#include <iostream>
#include <cctype>
using namespace std;

int main(void)
{
	
	char data;
	cout << "�п�J�@�r�� : ";
	cin >> data;
	
	if(data >= 'A' ){
		if(data <= 'Z'){
			cout << "*** ��J���j�g�r��..." << endl;
			cout << "��J�r�� : " << endl; 
			cout << "ASCII code : " << toascii(data) << endl;
		
			return 0;
		}
	}
}
