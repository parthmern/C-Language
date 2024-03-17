## h

## ❤️ Functions
```
#include<stdio.h>

// 1= Function declaration/prototype
void printHello();

int main() {
    //3= Function call
    printHello();
    return 0;
}

//2= Function definition
void printHello() {
    printf("Hello!\n");
}

```

```
void printHello( ); // this function return nothing and input parameter is void means null

int printHello() ; //this function return integer and input parameter is void means null
int printHello() {
    printf("Hello!\n");
    return 5 ;
}

double printHello(int y); //this function return double and input parameter is one which is int
double printHello(int y) {
    printf("Hello!\n");
    double x = 5.6 + y ;
    return x ;
}

```

## 🧡 Pointers

![Screenshot 2024-03-17 151005](https://github.com/parthmern/C-Language/assets/125397720/6bd8a270-1650-4686-8309-64aa16c57ffa)

```
* = value at address
& = address of

//----------------------------------

int age = 22;           // Declare and initialize an integer variable 'age'
int *ptr;               // Declare an integer pointer variable 'ptr'
ptr = &age;             // Assign the address of 'age' to the pointer 'ptr'

//----------------------------------


int age = 22;       // Declare an integer variable 'age' and assign it the value 22
int *ptr = &age;    // Declare an integer pointer variable 'ptr' and assign it the address of 'age'
int _age = *ptr;    // Dereference 'ptr' to get the value stored at the address it points to, and assign it to '_age'
printf("%d\n", _age);  // Output: 22 (value stored in '_age')

// Address of 'age'
printf("%p\n", &age);   // Output: Address of 'age' in memory ex. Ox14

// Address stored in 'ptr' (address of 'age')
printf("%p\n", ptr);    // Output: Address stored in 'ptr', which is the address of 'age' ex. Ox14

// Address of 'ptr' itself
printf("%p\n", &ptr);   // Output: Address of 'ptr' itself in memory ex. Ox55

// Data stored in 'age' (value)
printf("%d\n", age);    // 22 Output: Value stored in 'age'  

// Data pointed to by 'ptr' (value at the address it points to, which is 'age')
printf("%d\n", *ptr);   // 22 Output: Value pointed to by 'ptr', which is the value of 'age'

// Dereferencing the address of 'age' directly to get its value
printf("%d\n", *(&age));  // 22 Output: Value of 'age' obtained by dereferencing its address

```
