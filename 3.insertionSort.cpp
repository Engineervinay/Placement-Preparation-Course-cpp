/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/

#include <iostream>

using namespace std;

int main() {
    int n,i,j,a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=1;i<n;i++)
    {
        int temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
        
    }
}
