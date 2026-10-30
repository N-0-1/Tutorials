
# Introduction C++

## What type programming language is C++?

1. **Statically typed:** The type of every variables is known before the program runs.
   
   ```cpp
   int age = 33;             // Integer
   double salary = 3300.50   // Decimal
   int age = "thirty three"; // Error, the program will not going to run
   ``` 
2. **Compiled:** A c++ program is translated into machine code before it is executed.<br>
   Advantages: Fast execution and many errors are detected before the program runs.
  
   ```plain text
   Source Code (.cpp) → Compiler → Executable Program → Run
   ```
3. **General-purpose:** C++ can be used for many different kinds of software:

   - Operating systems
   - Games
   - Desktop applications
   - Embedded systems
   - Database engines
   - Scientific software
   - Device drivers
   
4. **Case-sensitive:** Uppercase and lowercase letters are considered different.

   ```cpp
   int age = 18;
   int Age = 20;
   ```
   Here, age and Age are two different variables. 
   
5. **Procedural programming:** Programs can be organized as a sequence of procedures (functions).
   - Functions
   - Steps to solve a problem
   - Top-down design

   ```cpp
   #include <iostream>
   using namespace std;

   void greet() 
   {
     cout << "Hello";
   }

   int main()
   {
     greet();
	 return 0;
   }
   ```
6. **Object-oriented programming (OOP):** Programs can be organized around objects that contain data and behavior.

   ```cpp
   class Student {                  // Student: is a designed type object
     public:
     string name;                   // name: where a data can be stored to the object

     void introduce() {             //introduce: is a behavior uses the data
         cout << "I am " << name;
        }
    };
	```
7. **Generic programming:** You can write code that works with many data types.

   Example:
   
   ```cpp
   template <typename T>
   T add(T a, T b) {
     return a + b;
   }
   ```
   Usage:
   
   ```cpp
   add(3, 5);          // int
   add(2.5, 4.1);      // double
   ```
   The same function works for different types without rewriting it.
   
8. **Middle-level language:** C++ combines features of both high-level languages and low-level languages.
   
   *High-level language features:*
   - Use classes and objects
   - Write reusable functions
   - Manage complex programs more easily
   - Focus on solving problems rather than hardware details
   
   ```cpp
   string name = "Johne";
   cout << name;
   ```
   
   *Low-level language features:*
   - Manipulate memory directly
   - Work with hardware devices
   - Control performance very precisely
   - Write operating-system components and device drivers
   
   ```cpp
   char name[] = {'J','o','h','n','e','\0'};
   ```
   
9. **C++ is a superset of C:** C++ contains most of the features of C and many other features like classes, objects, templates, exceptions etc.