/*
 * 04/20/2021 11:45
 * Status   Accepted	
 * Runtime  56 ms
 * Memory   33.1 MB
 */

class ParkingSystem {
public:
    vector<int> count;
    
    ParkingSystem(int big, int medium, int small) {
        count = {big, medium, small};
    }
    
    bool addCar(int carType) {
        return --count[carType - 1] >= 0;
    }
};