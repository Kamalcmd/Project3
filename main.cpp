#include <iostream>
#include "Customers.h"
#include "Customer.h"
#include "CustomersTest.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;

    CustomersTest Test;
    cout<<endl;
    cout<<"Testing first test:"<<endl;
    //invoking Test1
    Test.Test1();

    cout<<endl;
    cout<<"Testing second test: "<<endl;
    //invoking Test2
    Test.Test2();


    cout<<endl;
    cout<<"Testing Third test: "<<endl;
    //invoking Test3
    Test.Test3();

    cout<<endl;
    cout<<"Testing Fourth test: "<<endl;
    //invoking Test4
    Test.Test4();




    return 0;
}
