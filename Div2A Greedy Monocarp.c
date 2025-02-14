#include<stdio.h>
void bsort(int arr[], int n) {
    int t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main(){
int t;
scanf("%d",&t);

while(t--){
int n; long long k;

scanf("%d %lld",&n,&k);

int arr[n];

for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
}
 bsort(arr,n);
 for(int i = 0; i < n; i++){
      k-=arr[i];
      if(k==0)
        break;
      if(k<arr[i+1])
       break;
    }


 printf("%lld\n",k);
}
return 0;

}
