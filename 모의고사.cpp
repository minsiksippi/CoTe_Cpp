#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> collection(3,0);
    vector<int> first={1,2,3,4,5};
    vector<int> second={2,1,2,3,2,4,2,5};
    vector<int> thrid={3,3,1,1,2,2,4,4,5,5};
    int a=0, b=0, c=0;
    for(int i=0; i<answers.size();i++)
    {
        if(answers[i]==first[i%5]) collection[0]++;
        if(answers[i]==second[i%8]) collection[1]++;
        if(answers[i]==thrid[i%10]) collection[2]++; 
    }
    
    int max_score;
    max_score = *max_element(collection.begin(), collection.end());
    for(int i=0; i<3;i++)
    {
        if(max_score==collection[i]) answer.push_back(i+1);
    }
    
    return answer;
}
