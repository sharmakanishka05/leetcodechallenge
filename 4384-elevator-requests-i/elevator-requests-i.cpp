class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=0;
        int currentTime=0;
        for(int floor : requests){
            sum+=abs(floor-currentTime);
            currentTime=floor;

        }
        return sum;
        
    }
};