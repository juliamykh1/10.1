#include <iostream>
#include <fstream>

using namespace std;

void countSymbols(string filename) { //оголошення функції підрахунку кількості символів з параметром "ім'я файлу"
    ifstream fin(filename);  //створення потоку файлу для зчитування з файлу з іменем, переданим у функцію
    int plusCount = 0, minusCount = 0, equalCount = 0; //оголошення лічильників символів "+" , "-", "=" та їх ініціалізація 0
    char ch;

    while (fin >> ch) { // початок циклу, який виконується доти, поки в файлі є символи
        switch (ch) {
        case '+': //якщо символ є "+", то
            plusCount++; //лічильник символів "+" збільшується на одиницю
            break;
        case '-':
            minusCount++;
            break;
        case '=':
            equalCount++;
            break;
        }
    }

    cout << "Number of +: " << plusCount << endl; // виведення на екран кількості символів "+" з допомогою потоку виведення
    cout << "Number of -: " << minusCount << endl;
    cout << "Number of =: " << equalCount << endl;

    fin.close(); //закриваємо файл, щоб звільнити пам'ять
}

int main() {
    string filename = "text.txt";
    countSymbols(filename);
    return 0;
}
