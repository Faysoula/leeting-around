class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int> mp;
       for(auto i:nums){
           mp[i]++;
       } 
       int maj = nums.size()/2;
       for(auto it:mp){
           if(it.second > maj){
               return it.first;
           }
       }
       return -1;
    }
};