//
// Created by Kamal Ghimire on 9/25/23.
//

#include "Customers.h"
#include "CustomerFactory.h"
#include "CustomerNull.h"
/* helper function go convert time to string format */
std::string timeToString(std::time_t timeStamp)
{
    char timeStr[100];
    std::strftime(timeStr, sizeof(timeStr), "%Y/%m/%d %H:%M", std::localtime(&timeStamp));
    return timeStr;

}

/* helper function to convert enum to string */
const char* enumToString(CustomerRequest request) {
    switch (request) {
        case 0:
            return "Repair";
        case 1:
            return "Training";
        case 2:
            return "Purchase";
        case 3:
            return "Other";
    }
}

Customers::Customers() {
    sequence=1;
}
//function definition to add customer in the customer list
void Customers::add(const string &name, CustomerRequest request) {
    CustomerFactory factory;
    //creates object of Customer using factory
    Customer customer = factory.createCustomer(name,request,sequence);
   sequence++;
    customerList.push_back(customer);

}

//function definition to remove customer
void Customers::remove(const string &other) {
    customerList.remove_if([other](const Customer& customer){
      return customer.getName()==other;
    });
}

//function definition to search customer by name
BaseCustomer& Customers::search(const string &name) {
    for(Customer& customer : customerList){
        if(customer.getName()==name){
            return customer;
        }
    }
    CustomerNull nullObject;
    return nullObject;
}

std::list<Customer> Customers:: getCustomerList(){
    return customerList;
}

//definition of << operator overloading
std::ostream &operator<<(ostream &os, Customers &customerList) {
    for(Customer customer: customerList.getCustomerList())
    {
        os<<customer.getSequenceNumber()<<"\t\t"<<customer.getName()<<"\t"<<timeToString(customer.getTimestamp())<<"\t\t"<<enumToString(customer.getRequest())<<endl;
    }
    return os;
}











