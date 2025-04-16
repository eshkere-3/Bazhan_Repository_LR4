#include <iostream>
#include <string>

using namespace std;

double enter_A() {

    int A;
    cout << "Введите число A: ";
    cin >> A;

    cout << "Число А: " << A << endl;

}

double enter_B() {

    int B;
    cout << "Введите число B: ";
    cin >> B;

    cout << "Число B: " << B << endl;

}

double proizv(int A, int B) {

    int pr;

    pr = A * B;

    return pr;

}

double delen(int A, int B) {

    int del;

    if (B != -0) {

        del = A/B;

    } else {

        cout << "Введите число отличное от нуля: ";
        
        cin >> B;

        del = A/B;

    }

    return del;
}

int main() {

    setlocale(LC_ALL, "Russian");
    int A=0, B=0;
    int ch;

    do {

        cout << "Меню: " << endl;
        cout << "1. Ввести А. " << endl;
        cout << "2. Ввести В. " << endl;
        cout << "3. Выполнить операцию “*”. " << endl;
        cout << "4. Выполнить операцию “/”. " << endl;

        cout << "Выберите пункт меню: ";

        cin >> ch;

        switch (ch) {
            case 1:
                A = enter_A();
                break;

            case 2:
                B = enter_B();
                break;
            case 3:
                proizv(A,B);
                break;

            case 4:
                delen(A,B);
                break;

            case 0:
                cout << "";
            default: 
                cout << "Неверный ввод, повторите ввод.";

        }

       } while (ch != 0);

    return 0;


}

