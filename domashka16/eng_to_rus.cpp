#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "eng_to_rus.h"

using namespace std;

int eng_to_rus() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (!fin || !fout) return 1;

    map<string, char> table = {
        {"a",'�'}, {"b",'�'}, {"v",'�'}, {"g",'�'}, {"d",'�'},
        {"e",'�'}, {"yo",'�'}, {"zh",'�'}, {"z",'�'}, {"i",'�'},
        {"y",'�'}, {"k",'�'}, {"l",'�'}, {"m",'�'}, {"n",'�'},
        {"o",'�'}, {"p",'�'}, {"r",'�'}, {"s",'�'}, {"t",'�'},
        {"u",'�'}, {"f",'�'}, {"h",'�'}, {"ts",'�'}, {"ch",'�'},
        {"sh",'�'}, {"sch",'�'}, {"yu",'�'}, {"ya",'�'}
    };

    string line;
    while (getline(fin, line)) {
        string buf;
        for (size_t i = 0; i < line.size();) {
            bool found = false;
            if (i + 1 < line.size()) {
                string two = line.substr(i, 2);
                if (table.find(two) != table.end()) {
                    fout << table[two];
                    i += 2;
                    found = true;
                }
            }
            if (!found) {
                string one = line.substr(i, 1);
                if (table.find(one) != table.end())
                    fout << table[one];
                else
                    fout << line[i];
                i++;
            }
        }
        fout << "\n";
    }

    fin.close();
    fout.close();
    return 0;
}