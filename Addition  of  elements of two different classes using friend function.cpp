#include<iostream>
using namespace std;
class Bcomplex;//Forward Declaration
class Acomplex{
	int a;
	public:
		void get(){
			cout<<"Enter a:";
			cin>>a;
		}
		void display(){
			cout<<"a is:"<<a;
		}
		void add(Bcomplex b1);
};
class Bcomplex{
	int b ;
	public:
		void get(){
			cout<<"Enter b:";
			cin>>b;
		}
		void display(){
			cout<<"b is:"<<b;
		}
		friend void Acomplex::add(Bcomplex b1);
};
void Acomplex::add(Bcomplex b1){
	int c=0;
	c=a;
	a=b1.b;
	b1.b = c;
	cout<<"After swapping, "<<endl;
	display();
	b1.display();
}
int main(){
	Acomplex a1;
	Bcomplex b1;
	a1.get();
	b1.get();
	cout<<endl<<"Given Numbers are ,"<<endl;
	a1.display();
	b1.display();
	a1.add(b1);
	return 1;
}