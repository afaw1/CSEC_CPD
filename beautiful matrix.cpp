#include <iostream>
using namespace std;

int main() {
   int arr[5][5];
   int move=0;
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           int item;
           cin>>item;
           arr[i][j]=item;
           if(item==1){
               if(j>=2){
                   move+=j-2;
               }else{
                   move+=2-j;
               }
               if(i>=2){
                   move+=i-2;
               }else{
                   move+=2-i;
               }
           }
       }
   }
   cout<<move<<endl;
    return 0;
}
