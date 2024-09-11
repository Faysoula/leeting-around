class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double> v = {c + 273.15, c * 1.80 + 32.00};
        return v;
    }
};