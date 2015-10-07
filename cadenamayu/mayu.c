#include <iostream>
#include <string>
using namespace std;
void mayus(char *t,int n){
   for(int i=0;i<n-1;i++){
      if(*(t+i)==' '){
	 if(*(t+i+1) > 96)
	 *(t+i+1)=char(*(t+i+1)-32);
      }
   }
}
int main(){
   string c;
   getline(cin,c);
   char *t;
   t=&s[0];
   mayus(t,c.length());
   cout<<s<<endl;
}
