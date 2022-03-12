#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    int visit=0, last;
    int sum = 0;
    cin >> a >> b;

    for (int i=1; i< b+1; i++)
    {
        int c = i*i;
        if(a<=c && c<=b)
        {
            if(visit==0) last=c;
            visit=1;
            sum=sum + c;
        } 
    }
    if (visit==1) cout << sum << endl << last;
    else cout << -1;

}
