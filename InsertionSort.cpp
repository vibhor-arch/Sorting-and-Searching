#include<iostream>
using namespace std;

int main()
{
    int i,j,p,n;
    cin >> n;
    int a[n];

    for(i=0 ; i < n ;i++)
        cin >> a[i];
    for(i=0;i < n ;i++)
    {
        p=a[i];
        j=i-1;
        while(a[j] > p && j >= 0 )
        {
            a[j+1] = a[j];
            j--;
        }
         a[j+1]=p;
    }
    for(i=0 ; i<n;i++)
        cout << a[i] << " ";


}
