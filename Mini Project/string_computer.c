#include <stdio.h>
#include <string.h>
char str1[100], str2[100];
int dp[100][100], arg[100][100];
void display(int i, int j) {
    if(i == 0 && j == 0) 
		return; // Base Condition
		
		// Body of the Function
	    if(arg[i][j] == 1) 
	        display(i-1, j-1);   // calling the display function again it is a recursive function
	    else if(arg[i][j] == 2) {
	        display(i-1, j);
	        printf("D%c%02d ", str1[i-1], j+1);
	    }
	    else if(arg[i][j] == 3) {
	        display(i, j-1);
	        printf("I%c%02d ", str2[j-1], j);
	    } else {
	        display(i-1, j-1);
	        printf("C%c%02d ", str2[j-1], j);
	    }

}
int main() {
    int i, j;
    char output[20][40];
    printf("Enter the String 1  2 : ");
    while(scanf("%s %s", str1, str2) == 2) {
        memset(dp, 63, sizeof(dp));
        int len_str1 = strlen(str1), len_str2 = strlen(str2);
        dp[0][0] = 0;
        for(i = 0; i <= len_str1; i++) {
            for(j = 0; j <= len_str2; j++) {
                if(str1[i] == str2[j] && dp[i+1][j+1] > dp[i][j]) // copy
                    dp[i+1][j+1] = dp[i][j], arg[i+1][j+1] = 1;
                if(dp[i+1][j] > dp[i][j]+1) // delete
                    dp[i+1][j] = dp[i][j]+1, arg[i+1][j] = 2;
                if(dp[i][j+1] > dp[i][j]+1) // insert
                    dp[i][j+1] = dp[i][j]+1, arg[i][j+1] = 3;
                if(dp[i+1][j+1] > dp[i][j]+1) // change
                    dp[i+1][j+1] = dp[i][j]+1, arg[i+1][j+1] = 4;
            }
        }
        printf("The Output is : ");
        display(len_str1, len_str2);
        printf("E\n\n");
    }
    return 0;
}
