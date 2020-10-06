// рк1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int bukva[26];
    for (int i = 0; i < 26; ++i) bukva[i] = 0;
    int all = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i] >= 65) && (s[i] <= 90)) {
            bukva[s[i] - 65] ++;
            all++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        cout << char(i + 65) << ":" << bukva[i] << " iz " << all << ". procent = " << bukva[i]* 1.0 / all * 100 << endl;

    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'B') s[i] = 'E';
        else if (s[i] == 'X') s[i] = 'A';
        else if (s[i] == 'J') s[i] = 'Z';
        else if (s[i] == 'K') s[i] = 'O';
        else if (s[i] == 'F') s[i] = 'W';
        else if (s[i] == 'S') s[i] = 'V';
        else if (s[i] == 'C') s[i] = 'N';
        else if (s[i] == 'Q') s[i] = 'H';
        else if (s[i] == 'M') s[i] = 'R';
        else if (s[i] == 'I') s[i] = 'T';
        else if (s[i] == 'G') s[i] = 'D';
        else if (s[i] == 'A') s[i] = 'Q';
        else if (s[i] == 'O') s[i] = 'B';
        else if (s[i] == 'U') s[i] = 'B';
        else if (s[i] == 'Y') s[i] = 'L';
        else if (s[i] == 'T') s[i] = 'M';
        else if (s[i] == 'P') s[i] = 'U';
        else if (s[i] == 'W') s[i] = 'Y';
        else if (s[i] == 'H') s[i] = 'W';
        else if (s[i] == 'L') s[i] = 'C';
        else if (s[i] == 'Z') s[i] = 'I';
        else if (s[i] == 'E') s[i] = 'G';
        else if (s[i] == 'R') s[i] = 'S';
        else if (s[i] == 'D') s[i] = 'F';
        else if (s[i] == 'N') s[i] = 'P';
        else if (s[i] == 'V') s[i] = 'K';
        else if (s[i] == 'F') s[i] = 'J';
    }
    cout << s;
    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
