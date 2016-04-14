#include <iostream>

#include "MathUtils.hpp"
#include "Person.hpp"
#include "Worker.hpp"

using namespace std ;

int main() {
   double x = 10 ,
		   y = 20 ;
   double sum = add(x, y);
   double multi = multiply(x, y);

   cout << "sum = " << sum << endl
		   << "multi = " << multi << endl ;

   //testPerson();
   Person p1("foo", 10, 100.0); 
   cout << p1.toString() << endl; 
   
   Worker w1 ("bar", 20, 200.0); 
   cout << w1.toString() << endl; 
	return 0 ;
}




