#include <iostream>
using namespace std;
int main()
{
    int n,H;
    cin>>n>>H;
    int count=0;
    for(int i=0;i<n;i++){
        int fh;
        cin>>fh;
        if (fh>H){
            count+=2;}
        else{
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
