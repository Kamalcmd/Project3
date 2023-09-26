
# Programming Project #3

The goal of this programming project is to give the student practice of writing a C++ class, using the Factory design pattern.

PROJECT TASKS
1. Read the problem definition below and write a C++ program that implements your solution. Readability of the program will be graded based on;

        a variable naming,
        b indentation,
        c There should be comments at the following points:
            i. At the beginning of the main to describe the purpose of the program
            ii. In the header files: before every public method and class to describe task, parameters, return values.
            iii. Throughout the code to discuss any complex logic.
        d spacing,
        e consistency
        f styling in general including choice of methods
        g If a method overrides a base class method the override key word must be used.
2. Compile and test your program
3. Run the code and write test code.
4. All classes will be in separate cpp and h files.


#   GOALS (or why are we doing this project)
   The following are the things to be learned or show you have learned by this project.
   
      • The Factory Pattern
        • Operator overloading
        • Enum class type
        • Designing for testing.
        • The Null Pattern – extra credit

**FYI**

   The word list is used through the requirements for this project. List refers to any STL container or an array.
   
**PROBLEM**

   You are going to write a link list program using the STL list collection.
   
**Introduction**

   Write a program that simulates a customer service line at an Apple store. The line is a linked-list of Customer nodes. Customers arrive at time specified by month/day/year plus hour/minute. The customers are served on a first come first serve basis. Here is the rest of the specification.
   The STL list holds the class Customer. 

• Write a C++ class: CustomerFactory implementing the Factory pattern to create Customer objects.

• Write a C++ class Customer
   
      (a) Constuctor: sets Creation timestamp and unique sequenceNumber, customer request, and customer name.
      (b) Customer request (Repair, training, purchase, other.): must be of type class enum xxx 
      (c) Overload the comparison operator (==operator)
      (d) All member variables must be private (timestamp, sequenceNumber, request).
   • Write a C++ class (Customers) **USING C++11 STL container std::list**. The class’s contract (public methods) are specified below:
   
      (a) Constuctor: initialize all class instance variables.
      (b) add: When a customer has just arrived their name and type of request are passed.

   • The CustomerFactory class is used to create new Customer objects to put into the list of Customers.

      (c) remove: A customer may leave before being served. This method should receive the name of the customer name as a parameter and remove the Customer object from the list of Customers.
      (d) search: This function receives the customer name as a parameter. It returns a reference to the Customer object found or a customer which you know signals the customer was not found. (this is where a Null Customer class would come into play).
      (e) Overload the << operator: go through the linked list from beginning to end displaying the following information for each:
#   N      Customer-name MM/DD/YYYY  HH:MM   XXXXXXX

   where N is the sequence number, Customer’s name is the name of the customer,
   MM/DD/YYY is the Customer’s creation timestamp of the class, HH:MM is the time from the time data members, and XXXXXX is the purpose of the visit from the service required data member.
#   TESTING
   Your program must execute the below test successfully to be graded.
   Write a test class CustomersTest or put them in main using the Arrange/Act/Assert design. Ensure that it has the following test cases:

      Create Customers

      Add 3 customers using the Add method
      search for the 2nd customer, it should be found
      search for the 1st customer, it should be found,
      search for the 3rd customer, it should be found
      search for the 4th customer (who does not exists), it should not be found

      Create Customers

      Add 3 customers using the Add method
      delete the last customer,
      search for the 2nd customer, it should be found delete the 1st customer
      search for the 1st customer, it should not be found search for the 2nd customer, it should be found

      Create Customers

      Add 5 customers using the Add method
      User the class Customers overloaded operator<< to print out the customer list.
      Add at least one more test case of your own.
