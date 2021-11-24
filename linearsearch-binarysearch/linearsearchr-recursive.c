#include<stdio.h>
int searchrescursive(int arr[],int size,int key){
int rec;
size--;
if(size>=0){
    if(arr[size]==key){
    return size;
     }
     else{
     rec=searchrescursive(arr,size,key);
     }}

else{
return -1;
}
return rec;
}
void main(){
int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int indx;
 
    indx = searchrescursive(arr, size, x);
 
    if (indx != -1){
        printf("Element %d is present at index %d", x, indx);}
    else{
        printf("Element %d is not present", x);}
}
