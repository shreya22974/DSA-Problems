#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of square matrix:";
    cin>>n;
    int mat[n][n];
    int rotated[n][n];
    //input 
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    //transpose
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while(left < right) {
            swap(mat[i][left], mat[i][right]);
            left++;
            right--;
        }
    }
     cout << "Matrix after 90° rotation:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }



}