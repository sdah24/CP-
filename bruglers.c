#include <stdio.h>
int main(){

	long long n,check_max_no_matches,max_no_matches; 

	int m,total_no_matches=0,idx_of_max;

	scanf("%lld %d",&n,&m);
	long long ai[m];int bi[m];
	int i,j;
     
	for(int i = 0; i<m; i++){
    scanf("%lld %d",&ai[i],&bi[i]);
    }
 

      for(int i = 0;i<m;i++){   
     max_no_matches = ai[i]*bi[i]; ///==3 when i = 0
    	for(int j=i+1;j<m;j++){

    check_max_no_matches = ai[j]*bi[j];///==4 when i = 0 j= i+1,

      if (check_max_no_matches>max_no_matches){
    		max_no_matches = check_max_no_matches; //==4
    		if(ai[j]<n){
    		n = n - ai[j]; ///==1 when i = 0 j = i+1,
    	total_no_matches = total_no_matches + max_no_matches; ///==4
    	   }else{
    	   	ai[j]=(ai[j]+n)-ai[j];
    	   	n = n - ai[j];
    	   	total_no_matches = total_no_matches + (ai[j]*bi[j]);
    	   }

    }
}    if(n==0)
break;
    if(ai[i]<n) {
    	    	total_no_matches = total_no_matches + max_no_matches;
    	    	n = n - ai[i];
    	    } else {
    	    	ai[i]=(ai[i]+n)-ai[j];
    	    	n = n - ai[i];
    	    	total_no_matches = total_no_matches + (ai[i]*bi[i]);
    	    }
    	    if(n==0)
    	    	break;
}
           
           printf("%d\n",total_no_matches);

return 0;
}