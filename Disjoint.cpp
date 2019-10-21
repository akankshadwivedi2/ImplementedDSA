#include<iostream>
using namespace std;

void intial(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
}

bool find(int arr[],int a,int b)
{
    if(arr[a]==arr[b])
        return true;
    else
    {
        return false;
    }
    
}

void uniona (int arr[],int a,int b)
{
    arr[b]=arr[a];

}
 int main()
 {
     int arr[10]={0,1,2,3,4,5,6,7,8,9};

     uniona(arr,3,4);
     uniona(arr,4,7);
     uniona(arr,5,6);
     uniona(arr,7,5);

     if(find(arr,1,7))
        cout<<"yes";
    else
    {
        cout<<"No";
    }

     return 0;
 }
