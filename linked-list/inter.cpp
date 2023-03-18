#include <bits/stdc++.h>
using namespace std;

class Car {
	int price;
	public:
		 display() {
			cout<<"car class display"<<endl;
		}
		setPrice(int val) {
					price = val;
				}
		
		getPrice(int discount) {
			cout<<"final price"<<price - discount<<endl;
		}

		getPrice(int discount, int taxes) {
			cout<<"final price with taxes"<<price - discount + taxes<<endl;
		}
};

class Suv: public Car {
	int price;
	public:
		setPrice(int val) {
			price = val;
		}
		 display() {
			cout<<"suv price"<<" "<<price<<endl;
		}

};

int main() {
	// Suv honda;
	// honda.setPrice(1000);
	// honda.display();
	Car* ptr = new Suv;
	// Base b;
	// A a;
	ptr->display();

	// 0
	int p{3}, q{2};

	// cout<<5/3<<endl;
	// brezza.getPrice(2000);

}