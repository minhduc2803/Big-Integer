#ifndef _IO_H_
#define _IO_H_

#include <fstream>
#include <sstream>
#include <vector>
#include "qint.h"

string execute_data(vector<string> data);

void split(string line, vector<string> & data);
int get_base(string num);

#endif
