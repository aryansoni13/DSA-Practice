class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> arr;
        for(int nums:nums){
            arr.push_back(to_string(nums));
        }

        sort(arr.begin(), arr.end(), [](const string &a,const string &b){
            return (b+a) < (a+b);
        });

        if (arr[0] == "0") {
            return "0";
        }

        string largest;
        for (const string &num : arr) {
            largest += num;
        }

        return largest;
    }
};