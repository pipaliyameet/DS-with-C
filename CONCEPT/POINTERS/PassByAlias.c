#include <stdio.h>

void reference(int &b) {  
    b = 20;
}

int main() {       
    int a = 10;
    reference(a);      
    printf("%d", a);    
    return 0;
}



// #include <stdio.h>

// void reference(int *b) {  // Pass by reference using a pointer
//     *b = 20;             // Dereference to modify the original variable
// }

// int main() {              // `void main()` is non-standard, use `int main()`
//     int a = 10;
//     reference(&a);        // Pass the address of 'a'
//     printf("%d", a);      // Output: 20
//     return 0;
// }