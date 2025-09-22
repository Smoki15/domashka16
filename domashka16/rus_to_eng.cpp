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
		{'à',"a"}, {'á',"b"}, {'â',"v"}, {'ã',"g"}, {'ä',"d"},
		{'å',"e"}, {'¸',"yo"}, {'æ',"zh"}, {'ç',"z"}, {'è',"i"},
		{'é',"y"}, {'ê',"k"}, {'ë',"l"}, {'ì',"m"}, {'í',"n"},
		{'î',"o"}, {'ï',"p"}, {'ð',"r"}, {'ñ',"s"}, {'ò',"t"},
		{'ó',"u"}, {'ô',"f"}, {'õ',"h"}, {'ö',"ts"}, {'÷',"ch"},
		{'ø',"sh"}, {'ù',"sch"}, {'û',"y"}, {'ý',"e"}, {'þ',"yu"},
		{'ÿ',"ya"}
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