class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>numbers;
        int n=(int)nums.size();
        for(int i=0;i<n;i++)
        {
            numbers.push_back({nums[i],i});
        }
        sort(numbers.begin(),numbers.end());
        vector<int>ans;
        for(int i=0;i<n-1;i++)
        {
            int element1=numbers[i].first;

            int missing_element=target-numbers[i].first;

            auto it=lower_bound(numbers.begin()+i+1,numbers.end(),make_pair(missing_element,INT_MIN));

            if(it!=numbers.end() && it->first==missing_element)
            {
                int idx=it->second;
                if(idx!=numbers[i].second)
                {
                    ans={numbers[i].second,idx};
                    return ans;
                }
            }
        }
        return ans;
    }
};