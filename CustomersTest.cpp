//
// Created by Kamal Ghimire on 9/25/23.
//

#include "CustomersTest.h"
#include "Customers.h"
//Defining the Test1 function
void CustomersTest::Test1() {
    Customers c;
    c.add("First", CustomerRequest::Training);
    c.add("Second",CustomerRequest::Repair);
    c.add("Third",CustomerRequest::Other);
    cout<<"Second Customer: "<<foundOrNot(c.search("Second"))<<endl;
    //cout<<"Second Customr: "<<((c.search("Second").getName()=="null")?"Not Found":"Found")<<endl;
    cout<<"First Customr: "<<foundOrNot(c.search("First"))<<endl;
    cout<<"Third Customr: "<<foundOrNot(c.search("Third"))<<endl;
    cout<<"Fourth Customr: "<<foundOrNot(c.search("Fourth"))<<endl;

}
//Defining the Test2 function
void CustomersTest::Test2() {
    Customers c;
    //adding first customer
    c.add("First", CustomerRequest::Training);
    //adding second customer
    c.add("Second",CustomerRequest::Repair);
    c.add("Third",CustomerRequest::Other);

    //removing
    c.remove("Third");
    cout<<"Second Customr: "<<foundOrNot(c.search("Second"))<<endl;
    c.remove("First");
    cout<<"First Customr: "<<foundOrNot(c.search("First"))<<endl;
    cout<<"Second Customer: "<<foundOrNot(c.search("Second"))<<endl;



}
//defining Test3() function
void CustomersTest::Test3() {
    //.remove("Kamal");
Customers customerList;
    customerList.add("First", CustomerRequest::Training);
    customerList.add("Second",CustomerRequest::Repair);
    customerList.add("Third",CustomerRequest::Other);
    customerList.add("Fourth",CustomerRequest::Repair);
    customerList.add("Fifth",CustomerRequest::Other);

    cout<<customerList;
}



//helper function
string CustomersTest::foundOrNot(BaseCustomer &base){
    if(base.getName()=="null")
        return "Not Found";
    else
        return "Found";

}

//defining Test3 function
void CustomersTest::Test4() {
    Customers c;
    c.add("First",CustomerRequest::Training);
    c.add("second",CustomerRequest::Training);
    cout<<endl<<"Equal Operator test with same object"<<endl;
    if(c.getCustomerList().front()==c.getCustomerList().front())
        cout<<"The overloaded operator on same object test passed";
    else
        cout<<"The overloaded operator on same object test failed";

    cout<<endl<<"Equal Operator test with different object"<<endl;
    if(c.getCustomerList().front()==c.getCustomerList().back())
        cout<<"The overloaded operator on different object test failed";
    else
        cout<<"The overloaded operator on different object test passed";

}
