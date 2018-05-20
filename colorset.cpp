#include<iostream>
#include"colorful.h"
#include<windows.h>
using namespace std;
int main(){
    color colorx[16];
    int a;
    for(a=0;a<16;a++){
        colorx[a].set(a,15-a);
        colorx[a].set();
        if(a<10){
            cout << " ";
        }
        cout << a;
    }
    for(a=0;a<8;a++){
        color colorgrid;
        colorgrid.set(0,7,a);
        colorgrid.set();
        cout << endl << a << endl;
    }
    ocolor();
    system("pause");
    return 0;
}
