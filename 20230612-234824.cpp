#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
ofs
o.open("Random.doc");
o<<"123456789";
o.seekp(5,ios::beg);
o<<"abc";
o.seekp(-2,ios::cur);
o<<"def";
o.seekp(-5,ios::end
o<<"efg";
o.close();

ifstream i;
i.open("Random.doc");
string line;
getline(i,line);

i.seekg(5,ios::beg);
cout<<line;
i.close ();
}
