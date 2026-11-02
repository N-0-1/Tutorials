
# Assignments 2.1: Reference type variables

This is an extension to C++ *Assignment 1.3* Truth table logic expression.

- Create a new function that has three bool reference variables in the parameter list:
  ```cpp
  void inputLogicValues(bool &b1, bool &b2, bool &b3);
  ```

- These three (output) values must be imported in this function with `cin`.<br>
  The function must write informative texts to `cout` within this context that requests that the user provides input.
- Call this function a few times after the entered values have been processed through the previously created `logicFunction()`.<br>
  This function will, therefore, be called outside the function `inputLogicValues()`!

- Call this new function before calling `logicFunction()` showing the value of the logical expression after the entered *boolean values*.