#include <stdio.h>
int main(){
    int a, i=0, x=0, y=1, z, k, p=1, temp;
    scanf("%d", &a);
    int arr[a];
    while(i<a){
        scanf("%d", &arr[i]);
        i++;
    }
    for(int k=0; k<a-p; k++){
        x=k;
        y=k+1;
        for(int z=0; z<a-p; z++){
            if(arr[x]>arr[y]){
                temp=arr[x];
                arr[x]=arr[y];
                arr[y]=temp;
            }
            x++;
            y++;
        }
        p++;
    }
    
    for(int i=0; i<a; i++)
        printf("%d ", arr[i]);
}