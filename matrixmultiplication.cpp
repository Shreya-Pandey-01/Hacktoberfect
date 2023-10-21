//matrix multiplication
#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(b!=c){
        cout<<"Mutltiplication not possible";
        exit(0);
    }
    int A[a][b],B[c][d],C[a][d];
    
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>A[i][j];
    
    for(int i=0;i<c;i++)
        for(int j=0;j<d;j++)
            cin>>B[i][j];

    for(int i=0;i<a;i++)
        for(int j=0;j<d;j++)
            C[i][j]=0;

    for(int fix1=0;fix1<a;fix1++)
        for(int fix2=0;fix2<a;fix2++){
                for(int i=0;i<b;i++){
                    C[fix1][fix2]+=A[fix1][i]*B[i][fix2];
                }
        }

    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
