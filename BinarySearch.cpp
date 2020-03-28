#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n,num;
    cin >> n;
    int a[n],s=0,e=n-1;
    int m;
    for(i=0 ; i < n ; i++)
        cin >> a[i];
    cin >> num;
    m=((s+e)/2);
    while(s <= e)
    {
        if(a[m] == num)
        {
            cout << "Found" << m;
            return 0;
        }
        else if(a[m] < num)
            s=m+1;
        else if(a[m] > num)
            e=m-1;
        m=((s+e)/2);
    }
    cout << "Not Found";
}
