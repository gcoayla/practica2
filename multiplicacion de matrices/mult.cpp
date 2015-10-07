#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void productMatrix(int a[5][5],int b[5][5],int ind){
    int pro[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

                    pro[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]+a[i][3]*b[3][j]+a[i][4]*b[4][j];

        }
    }
    cout<<""<<endl;
    for(int i=0;i<ind;i++){
        for(int j=0;j<ind;j++){
            cout<<pro[i][j];
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}
int main(){
    srand(time(NULL));
    int ind=rand() %3+3;
    srand(time(NULL));
    int inda=rand() %3+3;
    srand(time(NULL));
    int indb=rand() %3+3;
    int a[5][5];
    int b[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)a[i][j]=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)b[i][j]=0;
    for(int i=0;i<inda;i++)
        for(int j=0;j<ind;j++)a[i][j]=rand() %5;
    for(int i=0;i<ind;i++)
        for(int j=0;j<indb;j++)b[i][j]=rand() %5;

    for(int i=0;i<inda;i++){
        for(int j=0;j<ind;j++){
            cout<<a[i][j];
        }
        cout<<" "<<endl;
    }
    cout<<" "<<endl;
    for(int i=0;i<inda;i++){
        for(int j=0;j<ind;j++){
            cout<<b[i][j];
        }
        cout<<" "<<endl;
    }
    productMatrix(a,b,ind);
    return 0;
}
