class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n + 1, 0);
        for(int i=0;i<=n;i++){
            int count = 0;
            int temp = i;
            while(temp > 0){
                count++;
                temp = temp & (temp-1);
            }
            arr[i] = count;
        }
        return arr;

    }
};
