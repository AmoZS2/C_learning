#include <stdio.h>
int main(void)
{
    int a = 10;
    int *b = &a;

    //b = &a �A�h���X
    //*b = a = 10�@�ϐ�

    char s[] = "ABCD";
    char *fp = s;
    char *sp;

    sp = s;    // sp = &s[0]�@�A�h���X

    //�z��̕\��
    printf("1�ԁF%s\n",s); // &s[0]�Ɠ��l
    printf("2�ԁF%s\n",&s[2]);
    printf("3�ԁF%s\n",&s[0]);
    printf("4�ԁF%c\n",s[2]); //int�^�ɂȂ�

    //�|�C���^�ɂ��z��̕\��
    printf("5�ԁF%s\n",sp); //&sp[0]�Ɠ��l
    printf("6�ԁF%s\n",&sp[2]);
    printf("7�ԁF%s\n",&sp[0]);

    printf("8�ԁF%s\n",fp);

    *fp = '?'; // *fp = fp[0] = '?'�@�ϐ�

    printf("9�ԁF%s\n",fp);

    return 0;
}