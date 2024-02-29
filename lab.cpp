#include <iostream>
using namespace std;
int main() {
    int n;
    int N;
    cout << "Ввести власну кількість рядків (1) або використовувати значення за замовчуванням (2)? ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Введіть кількість рядків: ";
        cin >> n;
    }
    else {
        cout << "Введіть номер в списку:";
         cin >> N;
         n = N % 5 + 5;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = 1; j <= i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
