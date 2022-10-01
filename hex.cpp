#include <iostream>
#include <string> 
#include <cstdint>
#include <sha2> // ჰეშის ალგორითმი | hash algorithm | sha512

using namespace std;

class HexFunction {
public:
	int GETHASH(); // ჰეშის ფუნქცია | hash function | return 
protected:
	string strhash; // გარდამქმნელი string | string etc

};

// კლასის ფუნქციის რეალიზაცია | class function realisation 
int HexFunction::GETHASH(){
	cout << "> ";
	string c;
	cin >> c; // getline(cin,c) for strings

	string gethashstr = sha512(c); // string-ის ჰეშში გარდაქმნა | string in hash

	cout << gethashstr << endl; 

	
	
	

	cout<< sizeof(gethashstr) << "- size of gethashstr"<< endl;
	cout<< sizeof(c) << "- size of c"<< endl;
	cout<< sizeof(strhash) << "- size of strhash"<< endl;

	return 0; // return EXIT_SUCCESS;
}


int main(int argc, char const *argv[])
{
	HexFunction hex; 
	hex.GETHASH();
	return 0;

	
}
