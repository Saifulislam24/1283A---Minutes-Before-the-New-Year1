#include<iostream>
using namespace std;
int main()
{
    int t,h,m,sum=0;
    cin >> t;
    while(t--)
    {
        cin >> h >> m;
        int res=h*60;
       int res1=res+m;
        sum=1440-res1;
        cout << sum << endl;
    }
    sum=0;
  //  cout << sum << endl;
}
