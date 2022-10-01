#include <iostream>
#include <string> 
#include <cstdint>
#include <sha2> // ჰეშის ალგორითმი | hash algorithm | sha512

using namespace std;

class HexFunction {
public:
	int GETHASH(); // ჰეშის ფუნქცია | hash function | return 
protected:
	string strhash; // გარდამქმნელი string | string 
};

// კლასის ფუნქციის რეალიზაცია | class function realisation 
int HexFunction::GETHASH(){
	cout << "> ";
	string c;
	cin >> c; // getline(cin,c) for strings

	string gethashstr = sha512(c); // string-ის ჰეშში გარდაქმნა | string in hash

	cout << gethashstr; 

	return 0; // return EXIT_SUCCESS;
}


int main(int argc, char const *argv[])
{
	HexFunction hex; 
	hex.GETHASH();
	return 0;
}
