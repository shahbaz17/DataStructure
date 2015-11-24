#include <stdio.h>
int main(){
	int T,i,j,len=0,count=0;
	scanf("%d",&T);
	char arrayOfWords[T][30];
    for (i=0; i< T; i++) {
    scanf ("%s" , arrayOfWords[i]);
    }
    for(i=0;i<T;++i){
    	for(j=0;arrayOfWords[i][j]!='\0';++j){
    		len++;
    	}
    	
    	for(j=0;j<=len-1;++j){
    		if(arrayOfWords[i][j]!=arrayOfWords[i][j+1])
                printf("%c",arrayOfWords[i][j]);
    	}      		
    	len = 0;
    	printf("\n");
    }
	return 0;
}

