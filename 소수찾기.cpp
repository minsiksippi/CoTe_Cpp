#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
vector<int> res;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}

void permutation(vector<int> arr, int depth, int n, int r)
{
    if (depth==r)
    {
        int sum=0;
        for(int i=0; i<r; i++)
        {
            sum+=arr[i]*pow(10,i);
        }
        res.push_back(sum);
    }
    
    for(int i=depth; i<n; i++)
    {
        swap(arr[depth], arr[i]);
        permutation(arr, depth+1, n, r);
        swap(arr[depth], arr[i]);
    }
}

int sosu(int num)
{
    int cnt=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i ==0) cnt++;
    }
    if (cnt==2) return 1;
    else return 0;
}

int solution(string numbers) {
    int answer = 0;
    
    
    vector<int> num;
    vector<int> visit(numbers.size(),0);
    
    num.assign(numbers.begin(), numbers.end());

    for(int i=0; i<num.size(); i++)
    {
        num[i]-=48;
        
    }
    for(int i=1; i<numbers.size()+1;i++)
    {
        permutation(num, 0, numbers.size(), i);
    }
    
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    
    for(auto po:res)
    {
        
        answer += sosu(po);
        
    }
    
    return answer;
}
