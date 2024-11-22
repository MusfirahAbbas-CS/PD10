#include <iostream>
using namespace std;
main()
{
    int x;
    cout << "Enter size of array: ";
    cin>>x;
    string arr[x];
    int sum=0;
    cout<<"Enter direction: "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<x;i++)
    {
        if((arr[i]=="right") || (arr[i]=="Right"))
        {
            sum +=90;
        }
        if((arr[i]=="left") || (arr[i]=="Left"))
        {
            sum -=90;
        }
    }
    int result=sum/360;
    if(result<0)
    {
        result=result*(-1);
    }
    cout<<result;
}