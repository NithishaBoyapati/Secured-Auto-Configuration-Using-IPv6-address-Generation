#include "bitset"
#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include "ctime"
#include "sstream"
#include "iomanip"

using namespace std;

int main()
{
srand((unsigned)time(0));
long a = rand();   
cout<<"Random integer: "<<a<<endl;
bitset<128> x(a);
cout<<"128 binary bit: "<<x<<endl;
cout<<"Hexadecimal value: "<<hex << x.to_ulong() << endl;
std::stringstream ss;
ss << std::setw(32) << std::setfill('0') << hex<<x.to_ulong();
std::string s = ss.str();
int i=0;
cout<<"iPv6 format: ";
for(i=0;i<s.length()-1;i++)
{
	cout<<s[i];
	if((i+1)%4==0)
		cout<<":";
}
cout<<s[i];
cout<<endl;
}