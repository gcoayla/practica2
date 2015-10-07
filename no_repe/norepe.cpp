#include <iostream>
using namespace std;
void no_repetitions(char c[20]){
    int i=0,j=0;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(c[i]==c[j]){c[j]=' ';}
        }
    }
    cout<<c;
}
int main(){
    char c[20];
    cin>>c;
    no_repetitions(c);

    return 0;
}
