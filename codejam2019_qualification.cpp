#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

// Qualification Round 2019. Code Jam 2019. 
// Question 1 - Foregone Solution 
int Foregone(){
    
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

// Question 2 - Maze 
int maze() {
	int T; 
	cin >> T; 

	for (int i = 0; i < T;i++) {
		int N;  
		cin >> N; 

	    string P; 
	    cin >> P; 
		string solution = ""; 
		
		for (char c : P) {
			if (c == 'E') {
				solution += 'S'; 
			}
			else {
				solution += 'E';
			}
		}
    cout << "Case #" << i+1 <<": "<< solution << "\n";

	}
}