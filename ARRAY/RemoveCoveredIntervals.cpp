#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> intervals = {
        {1, 4},
        {2, 3},
        {2, 8}
    };

    vector<bool> covered(intervals.size(), false);

    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < intervals.size(); j++)
        {
            if (i != j)
            {
                if (intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1])
                {
                    covered[i]=true;
                    break;
                }
            }
            
        }
        
    }


    int count = 0;
    for(bool x : covered){
        if (!x)
        {
            count++;
        }
    }
    cout<<count;
    
}
