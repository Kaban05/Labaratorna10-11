//1.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
/* ������ ����� */
#include <stdio.h>
#include <stdlib.h>
main()
{
    int magic; /* ������ ����� */
    int guess; /* ������ ������ */
    magic = rand(); /* ��������� �������� ����� */
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic) printf("** Virno **");
    return 0;
}


//2.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
/* ������ ����� 2*/
#include <stdio.h>
#include <stdlib.h>
main()
{
    int magic; /* ������ ����� */
    int guess; /* ������ ������ */
    magic = rand(); /* ��������� �������� ����� */
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic) printf("** Virno **");
    else printf("Nevirno");
    return 0;
}

//3.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
/* ������ ����� 3*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic) {
        printf("** Virno **");
        printf("Magichne chuslo rivne %d\n", magic);
    }
    else {
        printf("** Nevirno, ");
        if (guess > magic) printf("zanabto veluke\n");
        /* ��������� if */
        else printf("zanabto male\n");
    }
    return 0;
}


//4.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
/* ������ �����, �������� 4*/

#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    int magic;
    int guess;

    magic = rand();
    printf("Vgaday magiche chyslo: ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("** Virno ** ");
        printf("Magichne chyslo rivne %d\n", magic);
    }
    else if (guess > magic)
        printf("Nevirno, zanabto veluke");

    else printf("Nevirno, zanabto male");

    return 0;

}


//5.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

int main() {

    int t;

    for (t = 0; t < 100; t++) {
        printf("%d ", t);

        if (t == 10) break;
    }

    return 0;
}



//6.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
/* Count the number of spaces */

#include <stdio.h>

int main(void) {
    char s[80], * str;
    int space;

    printf("Enter a string: ");
    gets(s);

    str = s;

    for (space = 0; *str; str++) {
        if (*str != ' ') continue;
        space++;
    }

    printf("%d spaces\n", space);

    return 0;
}


//7.
#include <stdio.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>

void main()
{
    int a = 2, b = 0, c = 1;
    printf("\n\n");
    if (a > 0 && b < -3) c = b * b / a; printf("c=%d\n", c); /*c=1*/ a = ++c / a + a % c;
    b += c * c;
    if (a < b || a < 0) { c *= a; printf("c=%d\n", c); } /*c=2*/
    else if (c++ == 2) printf("c=%d\n", c);
    if (b < a && a == 2) c = 2 * a + 1;
    else { c = (b--) + a; a = 0; }
    printf("c=%d\n", c);
    /*c=5*/
    a = b = 2;
    if (c >= 3) if (a< 0 || a > c) c = 0;
    else { a = 1; c = 7; printf("c=%d\n", c); } /*c=7*/
    if (c > 0 && c < 10) { if (a > 0) printf("c=%d\n", c++); } /*c=7*/
    else c = 10;
    if (c <= 5) if ((a = b + 1) > 2) c %= 2;
    printf("c=%d\n", c);
    /*c=8*/
    a = 3; b = -1;
    if (b > 0) c = 1;
    else if (b - 10) { c = -1; printf("c=%d\n", c); }
    else if (b <= -3) c = 2;
    else c = b * b + 10; printf("c=%d\n", c); /*c=11*/

}

//8.
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <Windows.h>
#include <stdio.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float num1, num2;
    char operation;

    // ��� ������� �����
    printf("������ ����� �����: ");
    scanf("%f", &num1);

    // ��� ������� �����
    printf("������ ����� �����: ");
    scanf("%f", &num2);

    // ��� ��������
    printf("������ �������� (+, -, *, /): ");
    scanf(" %c", &operation);

    // �������� �������� �� ���������� ����������
    if (operation == '+') {
        printf("���������: %.2f\n", num1 + num2);
    }
    else if (operation == '-') {
        printf("���������: %.2f\n", num1 - num2);
    }
    else if (operation == '*') {
        printf("���������: %.2f\n", num1 * num2);
    }
    else if (operation == '/') {
        // �������� �� ���� �� ���������
        if (num2 != 0) {
            printf("���������: %.2f\n", num1 / num2);
        }
        else {
            printf("�������: ������ �� ����!\n");
        }
    }
    else {
        printf("�������: ������ ��������!\n");
    }

    return 0;
}
