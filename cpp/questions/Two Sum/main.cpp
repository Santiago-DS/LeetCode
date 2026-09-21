#include <vector>
#include <iostream>

using namespace std;
class Solution {
    public:

        std::vector<int> twoSum(std::vector<int>& vec, int target){
            int result;

                for(size_t i = 0; i < (vec.size()-1); i++){
                    int num1 = vec[i];

                    for(size_t j = i+1; j < vec.size(); j++){
                        if(j > vec.size()) {break;}
                        int num2 = vec[j];

                        result = num1 + num2;
                        // cout << num1 << "+" << num2 << "=" << result << endl;
                        
                        if(result == target) { 
                            return {(int)i, (int)j};
                        }
                    } // end of second for
                } // end of first for
            
                return {};
            }
};

int main(){

    int target;
    vector<int> nums;
    Solution solution;
    vector<int> result;

    nums = {1, 2, 3, 4, 5};
    target = 9;
    result = solution.twoSum(nums, target);

    cout << "[" << result[0] << "," << result[1] << "]" << endl;

    return 0;
}