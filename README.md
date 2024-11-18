# The purpose of this project:
Even being a simple project, I used it to learn a little more of C than the college had me previously taught while I remembering the basic concepts of low level coding.

# What I've learned:
- The difference, in terms of processing and memory consuptiom, of
this:
```c
int sum(int a, int b) {
    int num = a + b;
    return num;
}
```

and this:
```c
int sum(int a, int b) {
    return a + b;
}
```

It turns out that the first function executes more operations on CPU by creating a new variable in the stack and consuming 4 bytes of additional memory just for the new variable.

- I remembered on how to make a switch-case statement and to use defines, to make the code more readable and a bit more safe.
```c
    #define VARIABLE numberOption
```

- How `scanf` works and remembered a bit of how pointers works, as this function needs a pointer to the variable it will be modifying. I also learned when to not use pointers. You will want to use pointers only if you're changing the value of this variable or it is a complex data structure and, instead of copying itself again, you just use it's memory address. But when you are just using the value of a primal type variable, without changing it, you can just pass it by value. You can do it by pointers too, but since there is no need, the simple the better.

- The dangers of scanf and other functions to use instead of it.