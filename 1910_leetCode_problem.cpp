#include <iostream>
using namespace std;


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()>0)
        {
            size_t pozycja = s.find(part);
            
            if(pozycja == string::npos)
                return s;
            else{
                s.erase(pozycja,part.size());
            }
        }
        return s;
    }
};

int main(){
    Solution name;
    string s = "axxxxyyyyb", part = "xy";
    
    cout<<name.removeOccurrences(s,part)<<endl;
    return 0;
}
