#include<iostream>
using namespace std;
int main(){
    int r,c;
     cin>> r >> c;
      int mat1[r][c],mat2[r][c],mat3[r][c];
      cout<<"enter matrix 1:";
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>mat1[i][j];
        }
    }
     cout<<"enter matrix 2:";
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>mat2[i][j];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat3[i][j] = 0;
        }
    }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          for(int k=0;k<c;k++){
            mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
          }
        }
    }
    cout<<"matrix 3:"<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
}