class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size() , 0);
        stack<int> s;
        for(int i = 0;i<temp.size();i++){

            while(!s.empty() && temp[s.top()] < temp[i]){
                int index = s.top();
                s.pop();
                res[index]= i-index;
            }
            s.push(i);
            
        }
        return res;
    }
};