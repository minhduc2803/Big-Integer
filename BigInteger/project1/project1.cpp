#include <iostream>
#include<fstream>
#include<string>

#include"io.h"
#include "qint.h"

using namespace std;

int main(int argc, char** argv)
{
	if (argc > 2)
	{
		ifstream InFile(argv[1]);
		ofstream OutFile(argv[2]);
		if (!(InFile.is_open() && OutFile.is_open()))
			return 1;

		string line;
		
		while (getline(InFile, line))
		{
			vector<string> data;
			data.clear();
			split(line, data);
			string result = execute_data(data);
			if (result.size() != 0)
				OutFile << result;
			else
				OutFile << "\n";
		}
		InFile.close();
		OutFile.close();
	}
	return 0;
}