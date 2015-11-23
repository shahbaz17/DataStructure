/*
Chandu is a bad student. Once his teacher asked him to print the reverse of a given string. He took three hours to solve it. The teacher got agitated at Chandu and asked you the same question. Can you solve it?

Input:
The first line contains an integer T, denoting the number of test cases.
Each test case contains a string S, comprising of only lower case letters.

Output:
For each test case, print the reverse of the string S.

Constraints:

1 <= T <= 10
1 <= |S| <= 30


Sample Input


2
ab
aba

Sample Output

ba
aba


*/


#include <stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	char arrayOfWords[T][30];
	int i,j,len=0;
    for (i=0; i< T; i++) {
    scanf ("%s" , arrayOfWords[i]);
    }
    for(i=0;i<T;++i){
    	for(j=0;arrayOfWords[i][j]!='\0';++j){
    		len++;
    	}
    	for(j=len-1;j>=0;--j)    		
    		printf ("%c" , arrayOfWords[i][j]);
    	len = 0;
    	printf("\n");
    }
	return 0;
}
