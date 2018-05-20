#ifndef COLORFUL_H_INCLUDED
#define COLORFUL_H_INCLUDED
#include <windows.h>
class color{
private:
    int ft=7;
    int bg=0;
    int ln=0;
public:
    color(){}; //constructor
    set(int a){ // ��J 0-8191�C��
        ft=a%16;
        bg=(a/16)%16;
        ln=(a/1024)%8;
    };
    set(int a,int b){ //��J a(0-16)�I���C��Ab(0-16)��r�C��
        bg=a%16;
        ft=b%16;
        ln=0;
    };
    set(int a,int b,int c){ //��J a(0-16)�I���C��Ab(0-16)��r�C��Ac(0-8)�ج[�榡
        bg=a%16;
        ln=c%8;
        ft=b%16;
    };
    set(){ //�I�s�C��
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h,ln*1024+bg*16+ft);
    };
};
void ocolor(void){ //�I�s�w�]�A��
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,7);
}
#endif // COLORFUL_H_INCLUDED
