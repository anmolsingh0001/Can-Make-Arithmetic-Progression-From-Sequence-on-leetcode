class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        int difference=0;
        for(int i=arr.size()-1; i>0; i--){
            difference=arr[arr.size()-1]-arr[arr.size()-2];
            if(arr[i]-arr[i-1]==difference){
                count++;
            }
        }
        if(count==arr.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};