#include <iostream>
#include <string>
using namespace std;
class charchange{
	public:
	void convert_char(char ch){
	char char_sour=ch, char_dest;
	if (char_sour >= 65 && char_sour<=90)
	char_dest=char_sour+32;
	else
	char_dest=char_sour;
	cout<<"Out:"<<(char)char_dest<<"\t";  
		}
	};
	
class derived_cc : protected charchange{
	private:
	string str;
	public:
	string insert_str(){
	cout<<"Insert a string:";
	getline(cin,str);
	return str;}
	
	void access_cc(string ostr){
		for(size_t i=0; i<str.size(); i++)
	{
		cout<<"In:"<<str[i]<<"\t";
		convert_char(str[i]);
		cout<<"Index:"<<i<<endl;
	}
	}
};
	
int main()
{
	string str1;
	derived_cc cc;
	str1=cc.insert_str();
	cc.access_cc(str1);
	return 0;
}
