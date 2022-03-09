#include <iostream>
#include <cctype>
using namespace std;

int main(void)
{
	
	char data;
	cout << "請輸入一字元 : ";
	cin >> data;
	
	if(data >= 'A' ){
		if(data <= 'Z'){
			cout << "*** 輸入為大寫字母..." << endl;
			cout << "輸入字母 : " << endl; 
			cout << "ASCII code : " << toascii(data) << endl;
		
			return 0;
		}
	}
}
