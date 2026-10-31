
# Assignment 1.3: Truth table logical expression


Write a program to show the truth table of the following expression:

`(a  &&  b) || !c`

The program should meet the following requirements:

- Use a function with the following prototype to calculate the above-mentioned logic expression:

  ```cpp
  bool logicFunction(bool b1, bool b2, bool b3);
  ```

- Output/display must take place in the `main()` function.
- Two tables should be created and shown by an output stream; one with `noboolalpha` and the other with `boolalpha` formatting. 
- Ensure the columns have a fixed width