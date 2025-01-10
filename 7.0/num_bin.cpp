#include <stdio.h>
#include <stdlib.h>

char* decBin(int n) {
    // Allocate enough space for the binary representation
    // 32 bits for the integer + 1 for the null terminator
    char* bin = (char*)malloc(33);
    if (bin == NULL) {
        return NULL; // Handle memory allocation failure
    }
    
    bin[32] = '\0'; // Null-terminate the string
    int index = 31; // Start filling from the end

    // Convert decimal to binary
    while (n > 0) {
        bin[index--] = (n % 2) + '0'; // Store '0' or '1'
        n /= 2;
    }

    // Fill the remaining part with '0's
    while (index >= 0) {
        bin[index--] = '0';
    }

    return bin; // Return the binary string
}
	
int binDec(int bin){
	int dec = 0;
	int pow = 1;
	
	while(bin > 0){
		int rem = bin % 10;
		bin /= 10;
		dec += ( rem * pow );
		pow *= 2;
	}
	return dec;
}
		
		
	


int main() {
    // Adjust the range as needed
    long long upper_limit = 199990000239001; // Change this to a smaller number for testing
    //for (long long number = 1; number <= upper_limit; number++) {
      //  char* binary = decBin(number);
        //printf("Binary representation of %lld is %s\n", number, binary);
        //free(binary); // Free the allocated memory
    //}
	
	char* binary = decBin(upper_limit);
	printf("Binary representation of %lld is %s\n", upper_limit, binary);
    free(binary); // Free the allocated memory
	
    return 0;
}
