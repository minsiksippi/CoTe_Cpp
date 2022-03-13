#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> student;
    vector<int>::iterator it;
    student.assign(n,1);
    for(int i=0; i<lost.size();i++)
        student[lost[i]-1]--;
    
    for(int i=0; i<reserve.size();i++)
        student[reserve[i]-1]++;
    
    for(int i=0; i<n; i++)
    {
        if (student[i]==0 && student[i+1]==2) student[i]=student[i+1]=1;
        if (student[i]==2 && student[i+1]==0) student[i]=student[i+1]=1;
    }

    for(auto po : student) if(po==1 || po==2) answer++;
    
    return answer;
}
