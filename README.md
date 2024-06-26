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
### 💛 call by value and call by referance

```
#include <stdio.h>

void square(int n);         // Function prototype for call by value
void _square(int* n);       // Function prototype for call by reference

int main() {
    int number = 4;

    // Call by value
    square(number);
    printf("n is : %d\n", number);

    // Call by reference
    _square(&number);
    printf("n is : %d\n", number);

    return 0;
}

// Function definition for call by value
void square(int n) {               // here all arguments create a copy for square Func
    n = n * n;                     // changing value but it does not affect the original value in MAIN func
    printf("square is : %d\n", n); // if we need to update value then we can return it and store it while calling func
}

// Function definition for call by reference
void _square(int* n) {
    *n = (*n) * (*n);              // imp: variable = values
    printf("square is : %d\n", *n);
}

//when we need multiple values to return then that time use pointer by referance
```

## 💚 Arrays
- Collection of similar data types stored at contiguous memory locations
- ```
    int marks[3];
    int marks[ ] = {97, 98, 89};
    int marks[ 3 ] = {97, 98, 89};
  ```

### 💙 Pointers Arithmetic
![image](https://github.com/parthmern/C-Language/assets/125397720/882ca709-fd6d-4f6c-be84-a409373c7370)

```
// Array is a Pointer -- IMP

int *ptr = &arr[0];  // OR
int *ptr = arr;
```
----------------------

```
// triversing on array
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; // Pointer to the first element of the array
                        // here & use nhi karna for array to give value to pointer

    // Incrementing the pointer moves it to the next element
    printf("After incrementing, *ptr is: %d\n", *ptr); // Prints 1 (first element)
    ptr++; // Incrementing the pointer - here in pointer value increased by the dataType here dT is 4byte so pointer is increased by 4 byte
    printf("After incrementing, *ptr is: %d\n", *ptr); // Prints 2 (second element)

    // Decrementing the pointer moves it to the previous element
    ptr--; // Decrementing the pointer
    printf("After decrementing, *ptr is: %d\n", *ptr); // Prints 1 (first element)

    return 0;
}

```

### 🧡 Array as Function Argument

- [jenny's lecture imp](https://youtu.be/2aScqfAI3oc?si=7hBj5gHaH14dopBg)

```
#include <stdio.h>

// Way of receving

int sum(int arr[]) {
    int sum_of_array = 0;
    for (int i = 0; i < 4; ++i) {
        sum_of_array += arr[i]; 
    }

    return sum_of_array;
}

int main() {
    int result;
    int array[] = {23, 33, 44, 55};

    result = sum(array); // Sending array as param

    printf("Result = %d", result); 

    return 0; 
}

```
-------------------------------------------
```
void display(int *ptr) {
    printf("%d", *ptr);
}

int main() {
  int arr[] = {1, 2, 3, 4};
  for (int i=0; i<4; i++) {
      display(&arr[i]);
 }
return 0;
```
------------------------------------------
```
#include <stdio.h>

int sum(int *arr, int size) {
    int sum_of_array = 0;
    for (int i = 0; i < size; ++i) {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}

int main() {
    int result;
    int array[] = {23, 33, 44, 55};
    int size = sizeof(array) / sizeof(array[0]);
    result = sum(array, size);
    printf("Result = %d", result);
    return 0;
}

```
--------------------------------------------
```
#include <stdio.h>

void display(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));       // by increasing ptr we can travel on index
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    display(arr, size);

    return 0;
}

```
- [imp vid](https://youtu.be/iaWMpHLQmDU?si=6mASSNCZ6DznzbbI)

## 💛 String
```
    char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'}; // like array with null char in last, size = 8
    char name[] = "SHRADHA"; // there is also null char in last but which is automaticlly added , size = 8
    
    // Printing using formatspecifier
    printf("Printing using printf: %s\n", name);
    
    // Printing using a for loop
    printf("Printing using for loop: ");
    for (int i = 0; name[i] != '\0'; ++i) {
        printf("%c", name[i]);
    }

    // how to take input string
    char input[50];
    scanf("%s", input);   // cannot use multiple word
    gets(input);          // can take multiword input , unsafe
    fgets(input, 50, stdin);     // stops when n-1 chars input or new line is entered , safe
    puts(input);          // same as printf string

```
-------------------------------------
```
// like array STRING is pointer

    char *canChange = "Hello World"; // Declares a pointer to a constant string "Hello World" 
    puts(canChange); // Prints the string "Hello World"
    
    canChange = "Hello"; // Changes the pointer to point to the string "Hello"
    puts(canChange); // Prints the string "Hello"
    
    char cannotChange[] = "Hello World"; // Declares a character array with the content "Hello World"
    puts(cannotChange); // Prints the string "Hello World"

    // The following line would cause a compilation error
    // cannotChange = "Hello"; // Trying to assign a new string to the array, which is not allowed 
```

- [jenny's lec](https://youtu.be/gW2xHKk1cBA?si=Mr1kEEzyArrzAuKM)
- [how to return string](https://youtu.be/JNdbsF-78uk?si=s0g5jAqTDINCAXiu)

## 💙 Structure
- a collection of values of different data types
- ```
  For a student store the following :
  name (String)
  roll no (Integer)
  cgpa (Float)

  -------------------------------------------------
  struct student {            // declaring struct
    char name[100];
    int roll;
    float cgpa;
  };

  struct student s1;          // initializing struct
  s1.cgpa = 7.5;              // accessing member

  struct student s2 = { "rajat", 1552, 8.3};  // declaring and initializing 
  
  ```

### Array of structure
```
struct student s[10] ; // struct student is-> dataType
```
![image](https://github.com/parthmern/C-Language/assets/125397720/0ba2407a-1803-4190-b5c0-fbd612acd58d)

### Pointers to Structures
```
struct student s1; // Declare a variable of type struct student
struct student *ptr; // Declare a pointer to a struct student

ptr = &s1;   // Assign the address of the struct student variable to the pointer

printf("Name: %s\n", (*ptr).name);
printf("Name: %s\n", ptr->name);   // ARROW operator : (*ptr).code === ptr->code
```

### Passing structure to function
```
struct student stud1; 
printInfo(stud1);
-----------------------------
void printInfo(struct student s1){
    printf("%s \n", s1.name);
}
```
----------------------------
```
struct student stud1; 
printInfo(&stud1);
-----------------------------
void printInfo(struct student *s) {
    printf("Name: %s\n", s->name);
    printf("Name: %s\n", (*s).name);
}
```
