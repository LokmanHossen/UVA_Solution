#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,flag=1,total=0;
    float  length, width, depth ,weight;
    cin>>t;
    while(t--){
        cin>>length>>width>>depth>>weight;
        if(weight<=7.00){
            if(length<=56 && width <=45 && depth<=25)
            {
                flag=1;
            }
            else if(length+width+depth<=125 )
            {
                flag=1;
            }
            else
            flag=0;
        }
        else{
            flag=0;
        }
        cout<<flag<<endl;
        total+=flag;
    }
    cout<<total<<endl;
    return 0;
}