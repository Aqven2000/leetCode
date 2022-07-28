#include <iostream>
#include <vector>
using namespace std;

void displayVec(vector<int>& nums){
    for(int i = 0;i<nums.size();i++)
    cout<<nums[i]<< " ";
        cout<<endl;
}

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++){
                int temp = nums[i-1];
                nums.erase(nums.begin()+i-1);
                    int zlicz =0;
                    for(int j=1;j<nums.size();j++){
                        if(nums[j-1]>=nums[j]){
                            nums.insert(nums.begin()+i-1,temp);
                            break;
                        }
                        zlicz++;
                    }
                    if(zlicz == nums.size()-1)
                        return true;
        }
        return false;
    }
};

int main(){
    Solution kas;
    vector<int> v {512,867,904,997,403};
    if(kas.canBeIncreasing(v))
    cout<<"true";
    else
    cout<<"false";
    
    return 0;
}