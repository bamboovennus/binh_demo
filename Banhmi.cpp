#include "Banhmi.h"
void Banhmi::serve() {	
	add_vegetable();
	add_sauce();
	add_topping();
	message();
	price_bm();
}
void Banhmi::add_vegetable() {
	cout << "Lettuce is added" << endl;
	price = price + 1;
}
void Banhmi::add_sauce() {
	cout << "Chili sauce is added" << endl;
	price = price + 1;
}
void Banhmi::add_topping() {
	cout << "Topping is added" << endl;
	price = price + 1;
}
void Banhmi::message()const {
	cout << "Banhmi is ready to serve!" << endl;
}
void Banhmi::price_bm(){
	cout << "Price of banhmi is: " << price << "$" << endl;
}
Banhmi::Banhmi(){ 
	type = "Rectangle";
	price = 0;

}
Banhmi::Banhmi(const string& type) {
	this->type = type;
	price = 0;
}
Banhmi::~Banhmi() {
}