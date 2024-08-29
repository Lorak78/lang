#include <iostream>
using namespace std;

int const MAX=10;

void popol (int mat[MAX][MAX], int rig, int col);

void stampa (int mat[MAX][MAX], int rig, int col);

int main () {
    int matzz[MAX][MAX];
    popol(matzz, 8, 8);
    stampa(matzz, 8, 8);
    return 0;
}

void popol (int mat[MAX][MAX], int rig, int col){
    int n=1;
    for(int i=0; i<rig; i++){
        if(i%2==0){
            for(int j=0; j<col; j++){
                mat[i][j]=n;
                n++;
            }
        }
        else{
            for(int j=col - 1; j>=0; j--){
                mat[i][j]=n;
                n++;
            }
        }
    }
}    

void stampa (int mat[MAX][MAX], int rig, int col){
    for(int i=0; i<rig; i++){
        cout<<"\n";
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<"\t";
        }
    }
}