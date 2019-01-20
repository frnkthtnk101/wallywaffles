#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int Quantity;
	const float tax = .008;
	float price,total;
	const unsigned int size = 10;
	cout << "what how much of this product you buy and how much?"<<endl;
	cin >> Quantity >> price;
	total = (Quantity * price) + ((Quantity * price)*tax);
	cout << "INVOICE\n";
	cout << "Quality:"<<setw(size)<<Quantity<<endl;
	cout << "Price  :"<<setw(size)<<price<<endl;
	cout << "Tax    :"<<setw(size)<<tax<<endl;
	cout << "Total  :"<<setw(size)<<total <<endl;
	return 0;
}
