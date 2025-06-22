#include<stdio.h>

int N,M;
unsigned int costs[26];

int LKR(char* s1, char* s2, int len1, int len2) {
    int matrix[len1+1][len2+1];
    for (int i = 0; i <= len1; i++) {
        matrix[i][0] = 0;
    }
    for (int j = 0; j<=len2;j++) {
        matrix[0][j] = 0;
    }
    for (int i = 1; i<=len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (s1[i-1] == s2[j-1]) {
                matrix[i][j] = matrix[i-1][j-1] + costs[s1[i-1]- 'a'];
            }
            else if (matrix[i - 1][j]>= matrix[i][j - 1]) {
                matrix[i][j] = matrix[i-1][j];
            }
            else {
                matrix[i][j] = matrix[i][j-1];
            }
        }
    }
    return matrix[len1][len2];
}

int main() {
    scanf("%d %d",&N,&M);
    for (int i = 0; i < 26; i++) {
        scanf("%u",&costs[i]);
    }
    printf("\n");
    char sequence1[N+1], sequence2[M+1];
    scanf("%s %s",sequence1,sequence2);

    int result = LKR(sequence1,sequence2,N,M);

    printf("%d\n",result);

    return 0;
}