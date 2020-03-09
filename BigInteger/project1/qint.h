#ifndef _QINT_H_
#define _QINT_H_

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Qint {
	bitset<128> core;

public:
	Qint(string p, int base);
	Qint(Qint *temp);

	//constructor này khởi tạo toàn bộ các bit bằng 0
	Qint();
	~Qint();
	
	//hàm chuyển số binary dạng bitset sang string để in vào file
	string to_string();

	string bi_to(int base);
	string bi_to_dec();
	string bi_to_hex();

	void bu_2();

	Qint operator + (Qint B);
	Qint operator - (Qint B);
	Qint operator * (Qint B);
	Qint operator / (Qint B);

	Qint operator & (Qint B);
	Qint operator | (Qint B);
	Qint operator ^ (Qint B);
	Qint operator ~ ();
	Qint operator << (Qint B);
	Qint operator >> (Qint B);
	void rol();
	void ror();

	bool operator < (Qint B);
	bool operator > (Qint B);
	bool operator <= (Qint B);
	bool operator >= (Qint B);
	Qint operator % (Qint B);
};

#endif
