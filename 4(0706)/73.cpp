#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//문자 회전하여 암호화하는 프로그램
//알파벳 입력되면 a부터m까지는 13 더하고 n부터 z까지는 13 뺌 
//기타 알파벳 이외 문자 입력되면 그대로 출력
//a는 n으로 bsms o로 반대는 n은 a로 바꾸기 함
//끝내려면 ctrl+Z(EOF)누름
//시저 암호(Caesar cipher, 카이사르 암호)


int main(void)
{
    //int i=0;
    char arr[100];
    
    scanf("%s", arr);
    
    for(int i=0; i<strlen(arr); i++){
        if('m'-arr[i]>=0 && arr[i]-'a'>=0)
            printf("%c",arr[i]+13);

        else if(arr[i]-'m'>=0)
            printf("%c", arr[i]-13);

        else printf("%c", arr[i]);
        }
        printf("\n");
    return 0;
 
}