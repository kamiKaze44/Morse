#include <iostream>
#include <map>
#include <string>


using namespace std;

class MorseDic 
{
private:
	string input;

	map<char, string> morsedict
	{
		{'a',".-"},
		{'b',"-..."},
		{'c',"-.-."},
		{'d',"-.."},
		{'e',"."},
		{'f',"..-."},
		{'g',"--."},
		{'h',"...."},
		{'i',".."},
		{'j',".---"},
		{'k',"-.-"},
		{'l',".-.."},
		{'m',"--"},
		{'n',"-."},
		{'o',"---"},
		{'p',".--."},
		{'q',"--.-"},
		{'q',".-."},
		{'r',".-."},
		{'s',"..."},
		{'t',"-"},
		{'u',"..-"},
		{'v',"...-"},
		{'w',".--"},
		{'x',"-..-"},
		{'y',"-.--"},
		{'z',"--.."},

	};

public:

	void data();
	void makedata();
	void showdata();
	string toMorse(const string& text);

};



void MorseDic::data() 
{
	getline(cin, input);
}

string MorseDic::toMorse(const string& text) 
{
	string result;

	for (char c : text) 
	{
		result += morsedict[tolower(c)];
		result += " ";
	}

	return result;
}

void MorseDic::makedata() 
{
	input = toMorse(input);
}

void MorseDic::showdata() 
{
	cout << input << "\n";
}



int main() 
{
	MorseDic obj{};

	obj.data();
	obj.makedata();
	obj.showdata();

}
