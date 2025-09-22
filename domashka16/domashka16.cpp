//завдання 1
//#include <iostream>
//#include <fstream>
//#include <set>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    ifstream fin("input3.txt");
//    ifstream fbad("badwords.txt");
//    ofstream fout("res1.txt");
//
//    if (!fin || !fbad || !fout) {
//        cout << "Помилка відкриття файлів!\n";
//        return 1;
//    }
//
//    set<string> bad;
//    string word;
//    while (fbad >> word) {
//        bad.insert(word);
//    }
//
//    string line;
//    while (getline(fin, line)) {
//        stringstream ss(line);
//        string w;
//        bool first = true;
//        while (ss >> w) {
//            if (bad.find(w) == bad.end()) { 
//                if (!first) fout << " ";
//                fout << w;
//                first = false;
//            }
//        }
//        fout << "\n";
//    }
//
//    cout << "Файл успішно оброблено! Результат у res1.txt\n";
//
//    fin.close();
//    fbad.close();
//    fout.close();
//    return 0;
//}
//завдання 2
//#include <iostream>
//#include "rus_to_eng.h"
//#include "eng_to_rus.h"
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null"); // щоб працювали кириличні символи в консолі
//
//    cout << "\n=== Транслітератор ===\n";
//    cout << "[1] Російська -> Англійська\n";
//    cout << "[2] Англійська -> Російська\n";
//    cout << "Ваш вибір: ";
//
//    short choice;
//    cin >> choice;
//
//    int res = 0;
//    switch (choice) {
//    case 1: res = rus_to_eng(); break;
//    case 2: res = eng_to_rus(); break;
//    default: cout << "Немає такого пункту меню!\n"; break;
//    }
//
//    if (res == 0)
//        cout << "Операція виконана успішно!\n";
//    else
//        cout << "Сталася помилка!\n";
//    return 0;
//}
