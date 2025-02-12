#include <iostream>
using namespace std;
int main()
{
    int l,b,sum=0;
    cin>>l>>b;
    if((l<1 ||l>b) || (b<1 || b>10)){
        exit (0);
    }
    while(l<=b){
        l=l*3;
        b=b*2;
        sum++;
    }
    cout<<sum;
    return 0;
}
