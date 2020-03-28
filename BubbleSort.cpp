#include<iostream>
using namespace std;

int main()
{
    int i,n,temp;
    cin >> n;
    int a[n];
    int m=n,p=n;
    for(i=0 ; i < n; i++)
        cin >> a[i];
    while(n-1 != 0)
    {
        for(i=0 ; i < n ; i++)
        {
            if(a[i] > a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1] = temp;
            }
        }
        n--;

    }
    for(i=0 ; i < m ;i++ )
        cout  << a[i] << endl;
}
