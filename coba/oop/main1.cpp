#include<iostream>
using namespace std;

class mobil
{
public:
	void inputsport(int a);
};
void mobil::inputsport(int a){
	cout<<"ini mobil sport";

}
void main(){
	mobil m;
	m.inputsport(3);
	cin.get();
}