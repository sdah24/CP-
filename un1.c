#include <stdio.h>
int main(){

	long long n,check_max_no_matches,max_no_matches; 

	int m,total_no_matches=0,idx_of_max;

	scanf("%lld %d",&n,&m);
while(m--){
	long long ai[m];int bi[m];
	int i,j;
     
	for(int i = 0; i<m; i++){
    scanf("%lld %d",&ai[i],&bi[i]);
    }
 

      for(int i = 0;i<m;i++){
     max_no_matches = ai[i]*bi[i];
    	for(int j=0;j<m;j++){

    check_max_no_matches = ai[j]*bi[j];

      if (check_max_no_matches>max_no_matches){
    		max_no_matches = check_max_no_matches;
    		if(ai[j]<n){
    		n = n - ai[j];
    	total_no_matches = total_no_matches + max_no_matches;
    	   }else{
    	   	ai[j]=(ai[j]+n)-ai[j];
    	   	n = n - ai[j];
    	   	total_no_matches = total_no_matches + (ai[j]*bi[j]);
    	   }

    }
}
    if(ai[i]<n) {
    	    	total_no_matches = total_no_matches + max_no_matches;
    	    	n = n - ai[i];
    	    } else {
    	    	ai[i]=(ai[i]+n)-ai[j];
    	    	n = n - ai[i];
    	    	total_no_matches = total_no_matches + max_no_matches;
    	    }
    	    if(n==0)
    	    	break;
}
           }
           printf("%d\n",total_no_matches);

return 0;
}