#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int Quantity;
	const float TAX = .08;
	const int DISCOUNT = 100;
	const float DISCOUNTRATE = .2;
	float price,total;
	const unsigned int size = 10;
	cout << "what how much of this product you buy and how much?"<<endl;
	cin >> Quantity >> price;
	if(Quantity < DISCOUNT)
		total = (Quantity * price) + ((Quantity * price)*TAX);
	else
		total = ((Quantity * price) - (Quantity * DISCOUNTRATE)) + ((Quantity * price)*TAX);
	cout << "INVOICE\n";
	cout << "Quality:"<<setw(size)<<Quantity<<endl;
	cout << "Price  :"<<setw(size)<<price<<endl;
	cout << "Tax    :"<<setw(size)<<TAX<<endl;
	cout << "Total  :"<<setw(size)<<total <<endl;
	if(Quantity >= DISCOUNT)
		cout << "Total Savings:"<<setw(size)<< ((Quantity * DISCOUNTRATE)) <<endl;
	return 0;
}
