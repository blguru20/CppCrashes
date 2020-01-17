// C++ code to demonstrate buffer 
// overflow. 
#include <bits/stdc++.h> 
using namespace std; 

// driver code 
int main() 
{ 
	char A[8] = ""; 
	unsigned short B = 1979; 
	strcpy(A, "excessive"); 
	return 0; 
} 

