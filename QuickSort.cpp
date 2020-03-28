#include<iostream>
using namespace std;

int partition(int* a,int s,int e)
{
    int p=a[s],count=0,i;
    for(i=s+1;i<=e ;i++)
    {
        if(a[i] < p)
            count++;
    }
    a[s]=a[count+s];
    a[count+s]=p;
    i=s;
    int j=e;
    while( i < j)
    {
        if(a[i] < a[count])
            i++;

        else if(a[j] > a[count])
            j--;
        else
        {
           //cout << a[i] << " " << a[j] << endl;
            p=a[i];
            a[i]=a[j];
            a[j]=p;
            i++;
            j--;
        }
    }
    //cout << count << endl;
    return count+s;
}


void sorting(int* a,int s,int e)
{
    if( s >= e)
        return;
    //cout << "partition" << endl;
    int c=partition(a,s,e);
    sorting(a,s,c-1);
    sorting(a,c+1,e);
}

void quickSort(int* a,int n)
{
    if(n==1 || n==0)
        return;
    sorting(a,0,n-1);
}


int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
     for(int i=0 ; i < n ;i++)
        cin >> arr[i];
    quickSort(arr,n);
    for(int i=0 ; i < n ;i++)
        cout << arr[i] << " ";
}
