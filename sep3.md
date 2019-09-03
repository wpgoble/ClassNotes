# Class Notes from Sep. 9
## New Features in C++11
- Initialzation of vectors using {}
>int list[5] = {1, 2, 3, 4, 5}
>int* list = new int[5] {1, 2, 3, 4, 5}
- Init vectors using {}
- Range-based for loop
>int sum = 0;
>for (int x: squares)
>{
> sum++;   
>}
- Keyword **auto**
    + Don't have to specify type, as long as there is context to it
    + auto x = Func();

## Points review
*Remember* a **memory leak** is when memory has be allocated but is never used, which takes away the possible memory the program **could** use until it is restarted.

## References, parameter passing, returns
*l-value vs r-value*
see code for examples
R-values willl only exist in the statement in which it appears
### Types of pass types
- Pass by values
    + makes a copy of the value returned
- Pass by reference
    + no copy
- Pass by const ref
    + no copy, caller cannot use to modify the item

## Other uses for L-value reference
- Can make code more efficient
    + This is code via Aliasing complex names
    + avoiding recalculating values in for-loops

In the sep3.cpp the first function has the GOOD
defininition becuase it is the only one that will return something that will live after it's function execution
*We will see more return by reference in this class*

## R-value reference
This creates a 4th parameter reference
R-value reference is helpful for move semantics
- Also useful for is we're doing some form of concat
- *To have a move with r-value you need a move copy constructor and assignment operator*
- This is more of an efficeny thing than anything else
    + prevents unnecessary copies

*See IntVector to see code*
The big five functions:
1. Destructor 
2. Copy Constructor
3. Move Constructor
4. Copy Assignment operator
5. Move Assignment operator
