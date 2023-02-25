#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// A block in the blockchain representing a room in the hotel
struct RoomBlock {
    int roomNumber;
    string guestName;
    string checkInDate;
    string checkOutDate;

    // Hash of the previous block in the chain
    string prevBlockHash;

    // Hash of this block's data
    string blockHash;
};

// Calculate the hash of a block's data
string calculateBlockHash(RoomBlock block) {
    string data = to_string(block.roomNumber) + block.guestName + block.checkInDate + block.checkOutDate + block.prevBlockHash;
    // Hash the data using your preferred hashing algorithm (e.g. SHA-256)
    // Here we are just using a simple hash function for demonstration purposes
    unsigned long hash = 0;
    for (char c : data) {
        hash = hash * 101 + c;
    }
    return to_string(hash);
}

// A class to represent the hotel's room management system
class HotelChain {
private:
    // A map of room numbers to the blocks in the chain representing those rooms
    unordered_map<int, RoomBlock> roomBlocks;

public:
    // Add a new block to the chain representing a new room reservation
    void addRoomReservation(int roomNumber, string guestName, string checkInDate, string checkOutDate) {
        RoomBlock newBlock;
        newBlock.roomNumber = roomNumber;
        newBlock.guestName = guestName;
        newBlock.checkInDate = checkInDate;
        newBlock.checkOutDate = checkOutDate;
        newBlock.prevBlockHash = roomBlocks.count(roomNumber) ? roomBlocks[roomNumber].blockHash : "";
        newBlock.blockHash = calculateBlockHash(newBlock);
        roomBlocks[roomNumber] = newBlock;
    }

    // Get the current block in the chain for a given room
    RoomBlock getCurrentRoomBlock(int roomNumber) {
        return roomBlocks[roomNumber];
    }

    // Validate the integrity of the chain for a given room
    bool isChainValid(int roomNumber) {
        RoomBlock currentBlock = roomBlocks[roomNumber];
        RoomBlock prevBlock = roomBlocks[roomNumber - 1];

        // Check if the current block's hash is correct
        if (currentBlock.blockHash != calculateBlockHash(currentBlock)) {
            return false;
        }

        // Check if the previous block's hash is correct
        if (prevBlock.blockHash != calculateBlockHash(prevBlock)) {
            return false;
        }

        // If the current block is the first block in the chain, return true
        if (currentBlock.roomNumber == 1) {
            return true;
        }

        // Recursively validate the rest of the chain
        return isChainValid(roomNumber - 1);
    }
};

int main() {
    HotelChain hotelChain;

    // Add some room reservations to the chain
    hotelChain.addRoomReservation(1, "John");
}
