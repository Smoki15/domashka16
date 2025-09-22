#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "rus_to_eng.h"

using namespace std;

int rus_to_eng() {
	ifstream fin("input2.txt");
	ofstream fout("output.txt");
	if (!fin || !fout) return 1;

	map<char, string> table = {
		{'�',"a"}, {'�',"b"}, {'�',"v"}, {'�',"g"}, {'�',"d"},
		{'�',"e"}, {'�',"yo"}, {'�',"zh"}, {'�',"z"}, {'�',"i"},
		{'�',"y"}, {'�',"k"}, {'�',"l"}, {'�',"m"}, {'�',"n"},
		{'�',"o"}, {'�',"p"}, {'�',"r"}, {'�',"s"}, {'�',"t"},
		{'�',"u"}, {'�',"f"}, {'�',"h"}, {'�',"ts"}, {'�',"ch"},
		{'�',"sh"}, {'�',"sch"}, {'�',"y"}, {'�',"e"}, {'�',"yu"},
		{'�',"ya"}
	};

	string line;
	while (getline(fin, line)) {
		for (char& c : line) {
			char lower = tolower((unsigned char)c);
			if (table.find(lower) != table.end()) {
				fout << table[lower];
			}
			else {
				fout << c;
			}
		}
		fout << "\n";
	}

	fin.close();
	fout.close();
	return 0;
}