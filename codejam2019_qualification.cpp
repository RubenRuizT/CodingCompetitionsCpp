#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

// Qualification Round 2019. Code Jam 2019. 
// Foregone Solution 
int main (){
    
	long long n; 
	cin >> n; 
	for (long long i = 0; i < n; i++) {
		long long number; 
		cin >> number; 
		string answer = ""; 
		string str_number = to_string(number);
		
		for (char c : str_number) {
			if (c == '4') {
				answer += "1"; 

			}
			else {
				answer += "0"; 
			}
		}
		
		long long resultado = number - stoll(answer);
	    				
		cout << "Case #" << i+1 << ":" << " " << resultado << " " <<stoll(answer) << "\n"; 
	    
	}

  return 0;
}
