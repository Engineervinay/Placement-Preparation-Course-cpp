/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/



//optimized matrix search      
//matrix should be in ascending order

#include<iostream>

using namespace std;

int main() {
    int n,m,key;
    cin>>n>>m>>key;
    int a[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0)
    {
        if(a[r][c]==key)
        {
            flag=true;
            break;
        }
        else if(a[r][c]>key){
            c--;
            
        }
        else
            r++;
        
    }
    if(flag)
        cout<<"present";
    else
        cout<<"not present";
    
    
}
