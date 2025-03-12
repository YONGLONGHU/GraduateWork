//class Solution
//{
//public:
//    vector<int> twoSum(vector<int>& nums, int target)
//    {
//        int length = nums.size();
//        vector<int> Rval;
//        for (int i = 0; i < length - 1; i++)
//        {
//            for (int j = i + 1; j < length; ++j)
//            {
//                if (nums[i] + nums[j] == target)
//                {
//                    Rval.push_back(i);
//                    Rval.push_back(j);
//                    return Rval;
//                }
//            }
//        }
//        return Rval;
//    }
//};
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs)
//    {
//        unordered_map<string, vector<string>>mp;
//        for (string str : strs)
//        {
//            string key = str;
//            sort(key.begin(), key.end());
//            mp[key].push_back(str);
//        }
//        vector<vector<string>> ans;
//        for (auto it = mp.begin(); it != mp.end(); ++it)
//        {
//            ans.push_back(it->second);
//        }
//        return ans;
//    }
//};