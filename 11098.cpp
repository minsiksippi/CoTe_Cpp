#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n;
    vector <pair<int, string> > vec(n+1);
    vector <string> name;

    for(int i=0; i<n; i++)
    {
        cin >> m;
        int max = vec[0].first;
        int maxnum=0;
        for(int j=0; j<m; j++)
        {
            cin >> vec[j].first >> vec[j].second;
            if (max < vec[j].first)
            {
                max=vec[j].first;
                maxnum=j;
            } 
        }
        name.push_back(vec[maxnum].second);
        
    }
    for(auto p : name)
    {
        cout << p << endl;
    }
    
    name.clear();

}
