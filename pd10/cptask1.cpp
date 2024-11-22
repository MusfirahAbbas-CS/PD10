#include <iostream>
using namespace std;
bool rearrange(int x,int temp);
main()
{
    int x;
    int temp=0;
    cout <<"Enter array length:  ";
    cin >>  x;
    
    bool result=rearrange(x,temp);
    cout<<result;
}
bool rearrange(int x,int temp)
{
    int arr[x];
    cout << "Enter numbers: "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    bool output=true;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=1;i<x;i++)
    {
        if((arr[i]-arr[i-1]!=1) || (arr[i]==arr[i-1]))
        {
            output=false;
            break;
        }
    }
    return output;
}