//Examples of Functors
//Function objects
//There are a lof of software patterns that solve known problems
//Functors help you solve stragety patterns
//This is the idea of passing functions into a function
//Code examples will be in functor folder
// with functors we can overload the () operator call
//This has an unlimited amt of parameters
//this used to be:
f.operator()(x, y);
//now we can just say:
f(x, y);
//Why?
//See ex1.cpp and rules.h to see how we can use 1 algorithm and swap out multipple 
// comparison options for the sort

//If we use this, keep the () operator overload as a member function

//syntactcally, function objects are a lot nicer than function pointers