#include<iostream>
using namespace std;

int main()
{
    int i,m=0,n,p;
    cin >> n;
    int a[n];

    for(i=0;i < n ;i++)
        cin >> a[i];

    int min,j;
    for(i=0 ; i < n-1; i++)
    {
        min = a[i],m=i;
        for(j=i+1 ; j < n ;j++)
        {
            if(a[j] < min)
            {
                m=j;
                min = a[j];
            }
        }
                p=a[m];
                a[m]=a[i];
                a[i]=p;

    }
      for(i=0;i < n ;i++)
        cout << a[i] <<  " ";


}
