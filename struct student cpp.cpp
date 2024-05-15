#include<iostream>
using namespace std;
struct student {
string name;
int a
};
void display (student st[], int len){
for (int k=0;k<len;k++)
{
cout<<st[k].name<<"\t"<<st[k].age;
}
}
int main (){
student st[3];
for(int i=0;i<3;i++){
cin>>st[i].name>>st[i].ag
}
display (st,3);
}