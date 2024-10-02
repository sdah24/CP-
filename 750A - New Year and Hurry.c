main(){
int a,b,c=0,d,e=0;

scanf("%d %d",&a,&b);
d = 240 - b;
for(int i= 1; i<=a; i++){

     c+=5*i;
     if(c>d)
      break;
      e++;
}

printf("%d\n",e);
}
