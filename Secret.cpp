#include <iostream>
using namespace std;
void print(const string &s)
{
	for (string::size_type i = 0; i < s.size(); i++) {
		cout << s[i] << "\n";
	}
}

int main()
{
    
    cout << "Can you read this?\n";
	std::string a("Bananas");
	print(a);
    std::string b("Are");
    print(b);
    std::string c("Awesome");
    print(c);
    cout << "If so, than congrats!\n";
    std::string d("Applesaretasty!");
    print(d);
    cout << "Try to Figure out the secret message!";
	return 0;
}
