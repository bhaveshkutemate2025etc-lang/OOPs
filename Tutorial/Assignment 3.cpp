#include<iostream>
using namespace std;
void accept(int &m,int[]);
void display(int &m,int[]);
void sort(int S,int arr[]);
int main()
{
    int s,arr[10];
    accept(s,arr);
    cout<<"\nUnsorted array is :"<<endl;
    display(s,arr);
    cout<<"\nSorted array is :"<<endl;
    display(s,arr);
    sort(s,arr);
    return 0;
}
void accept(int &m,int arr[])
{
    cout<<"Enter size of array : ";
    cin>>m;
    cout<<"Enter array : ";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
}
void display(int &m,int arr[])
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort(int S,int arr[])
{
    for(int i=0;i<=S;i++)
    {
        for(int j=0;j<=S-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
