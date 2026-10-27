class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime,
                    int queryTime) {
        int n1 = startTime.size();
        int n2 = endTime.size();
        int count = 0;

        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
            if (startTime[i] <= queryTime && endTime[j] >= queryTime)
                count++;

            i++;
            j++;
        }
        return count;
    }
};