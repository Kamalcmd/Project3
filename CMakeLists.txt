cmake_minimum_required(VERSION 3.26)
project(Project3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project3 main.cpp
        Customers.h
        CustomerFactory.h
        CustomerFactory.cpp
        Customer.h
        Customer.cpp
        Customers.cpp
        CustomerNull.h
        CustomerNull.cpp
        BaseCustomer.h
        BaseCustomer.cpp
        CustomersTest.h
        CustomersTest.cpp)
