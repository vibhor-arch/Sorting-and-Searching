#include<iostream>
using namespace std;

void merge(int* a1,int size1,int* a2,int size2,int* output)
{
    int i=0,j=0,k=0;
    while(i < size1 && j < size2)
    {
        if(a1[i] < a2[j])
        {
            output[k]=a1[i];
            i++;
            k++;
        }
        else
        {
            output[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i < size1)
    {
        output[k]=a1[i];
        i++;
        k++;
    }
    while(j < size2)
    {
        output[k] = a2[j];
        j++;
        k++;
    }
}



void mergeSort(int input[], int size){
	// Write your code here
    if(size <= 1)
        return;

    int mid=size/2;
    int part1[500],part2[500];
    int size1 = mid,size2= size-mid;

    for(int i=0;i < mid; i++)
        part1[i]=input[i];
    int k=0;
    for(int i=mid; i < size;i++)
    {
        part2[k]=input[i];
        k++;
    }

    mergeSort(part1,size1);
    mergeSort(part2,size2);
    merge(part1,size1,part2,size2,input);


}

int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
     for(int i=0 ; i < n ;i++)
        cin >> arr[i];
    int val;
   // cin >> val;
    mergeSort(arr,n);
    for(int i=0 ; i < n ;i++)
        cout << arr[i] << " ";
        cout << endl;
    for(int i=0;i < n-1 ;i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout << arr[i];
            break;
        }
    }

}
