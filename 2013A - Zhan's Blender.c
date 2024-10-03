main(){
    int t;
    scanf("%d",&t);
long long int n,x,y,z;

while(t--){

    scanf("%lld",&n);
    scanf("%lld %lld",&x,&y);

      if (x >= y) {
            z = (n + y - 1) / y;
        } else {
            z = (n + x - 1) / x;
        }
   printf("%lld\n",z);
}

}
