#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int head = 0, tail=n-1;
    while(head <= tail)
    {
        if(people[head] + people[tail] > limit)
        {
            answer++;
            tail--;
        }
        else if(people[head] + people[tail] <= limit)
        {
            answer++;
            head++;
            tail--;
        }
        else
        {
            answer++;
            break;
        }

    }

    return answer;
}
