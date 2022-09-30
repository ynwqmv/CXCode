#include <iostream>
#include <string>
#include <cstdint>
#include <sha2>

using namespace std;

class HexFunction {
public:
	int GETHASH();
protected:
	string strhash;
};

int HexFunction::GETHASH(){
	cout << "> ";
	string c;
	cin >> c;

	string gethashstr = sha512(c);

	cout << gethashstr;

	return 0;
}


int main(int argc, char const *argv[])
{
	HexFunction hex;
	hex.GETHASH();
	return 0;
}
