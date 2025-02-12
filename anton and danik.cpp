#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  if(n<1 || n>100000){
      exit(0);
  }
  string x;
  cin>>x;
int countA=0,countD=0;
for(int i=0;i<x.length() ; i++){
    if (x[i]=='A'){
        countA++;
    }else{
        countD++;
    }
}
if (countA>countD)
   cout<<"Anton";
else if(countA<countD)
   cout<<"Danik";
else
cout<<"Friendship";
    return 0;
}
