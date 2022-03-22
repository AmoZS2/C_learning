#include <stdio.h>
int main(void)
{
    int a = 10;
    int *b = &a;

    //b = &a アドレス
    //*b = a = 10　変数

    char s[] = "ABCD";
    char *fp = s;
    char *sp;

    sp = s;    // sp = &s[0]　アドレス

    //配列の表示
    printf("1番：%s\n",s); // &s[0]と同様
    printf("2番：%s\n",&s[2]);
    printf("3番：%s\n",&s[0]);
    printf("4番：%c\n",s[2]); //int型になる

    //ポインタによる配列の表示
    printf("5番：%s\n",sp); //&sp[0]と同様
    printf("6番：%s\n",&sp[2]);
    printf("7番：%s\n",&sp[0]);

    printf("8番：%s\n",fp);

    *fp = '?'; // *fp = fp[0] = '?'　変数

    printf("9番：%s\n",fp);

    return 0;
}