#include <stdio.h>
int main(){
    char s1[100];
    scanf("%s\n",s1);
    int r=0;
    for (int i = 0; i < 800; ++i) {
        if(s1[i]!='\0'){
           r++;
        }
        if(s1[i]=='\0')
            break;
    }
    char t,u,i;
    int first_point,end_point;
    scanf("%c %c",&t,&u);
    for ( i = 0; i < r; ++i) {
        if(s1[i]==t) {
            first_point = i;
            break;
        }
    }
    for (int j = i; j < r; ++j) {
        if(s1[j]==u) {
            end_point = j;
            break;
        }
    }
    int f=end_point-first_point;
    int arry[f];
    for (int i = first_point,l=0; i <=end_point ; ++i,l++) {
        arry[l]=s1[i];
    }
    printf("%d\n",r);
    for (int i = f; i >=0 ; --i) {
        printf("%c",arry[i]);
    }
}