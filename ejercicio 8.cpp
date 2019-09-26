#include<iostream>

using namespace std;

int main(){
	float cal1,cal2,cal3,final = 0;
	
	cout<<"Ingrese la califiacion de algebra: ";
	cin>>cal1;
	cout<<"Ingrese la califiacion de historia: ";
	cin>>cal2;
	cout<<"Ingrese la califiacion de español: ";
	cin>>cal3;
	
	final = (cal1+cal2+cal3)/3;
	cout.precision(2);
	cout<<"\n La calificacion final es: "<<final<<endl;
	
	return 0;
}
