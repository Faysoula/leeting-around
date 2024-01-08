class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> orignal;

        for(int i = 0; i< nums.size();i++){
            orignal[nums[i]]++;
        }

        multimap<int,int> flipped;

        for(auto i: orignal){
            flipped.insert({i.second,i.first});
        }
        for(auto i=flipped.rbegin(); i != flipped.rend(); i++){
            if(k > 0){
                res.push_back(i->second);
                k--;
            }
        }
        return res;
    }      
};