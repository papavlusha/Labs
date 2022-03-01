
#include <iostream>

using namespace std;

int Asm_part(int a, int b) {
    int answer;
    __asm {
        mov eax, b              //eax <=b
        neg eax                 // eax <= -b
        mov ebx, a              //ebx <= a
        cdq                     // расширение для деления
        idiv ebx                // eax << -b/a
        mov answer, eax         //answer <= -b/a
    }
    return answer;
}

int main() {
    int a, b;
    cout << "solution ax+b=0\n";
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << Asm_part(a,b);
}
