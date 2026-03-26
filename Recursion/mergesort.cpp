#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
        vector<int> arr1(n1), arr2(n2);
    for(int i=0;i<n1;i++){
        arr1[i]=arr[low+i];
    }
   for(int i=0;i<n2;i++){
            arr2[i]=arr[mid+1+i];
        }
        int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
          arr[k]= arr1[i];
          i++;
        }else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=low+(high-low)/2;
           mergeSort(arr,low,mid);
           mergeSort(arr,mid+1,high);
           merge(arr,low,mid,high);
}
int main(){
    int arr[]={4,6,3,1,7,9,6,5};
    int n=8;
    mergeSort(arr,0,n-1);
   cout<<"Sorted array:";
   for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}