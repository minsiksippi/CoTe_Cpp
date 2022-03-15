#include <string>
#include <vector>

#include <iostream>

using namespace std;
int answer = 0;
void dfs(vector<int> arr, int target, int sum, int count)
{
    if(count==arr.size()) 
    {
        if (sum==target) answer++;
        return;
    }
    
    dfs(arr,target,sum+arr[count],count+1);
    dfs(arr,target,sum-arr[count],count+1);
    
}

int solution(vector<int> numbers, int target) {
    
    
    for(int i=0; i<numbers.size(); i++)
    {
        cout << numbers[i] << " ";

    }
    dfs(numbers,target,0,0);
    
    return answer;
}
