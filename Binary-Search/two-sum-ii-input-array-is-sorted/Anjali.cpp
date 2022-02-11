class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        int start = 0;
        int end = a.size()-1;
        while(start < end){
            int sum = a[start] + a[end];
            if(sum == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(sum < target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};
