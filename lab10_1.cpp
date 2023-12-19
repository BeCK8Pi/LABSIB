#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; 
	char grade;
	int student = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << student+1 <<  "]: ";
		cin >> grade; 
		if(grade == 'A'){ 
			count[0] += 1;
			student += 1;
		}else if(grade == 'B'){ 
			count[1] += 1;
			student += 1;
		}	
		else if(grade == 'C'){
			count[2] += 1;
			student += 1;
		}
		else if(grade == 'D'){
			count[3] += 1;
			student += 1;
		}
		else if(grade == 'F'){
			count[4] += 1;
			student += 1;
		}else if(grade != '0'){ 
			cout << "Wrong input. Please input again.\n"; 
		} 
		if(grade == '0'){
			break;
		}
	}while(1);
	
	
	cout << "In total " << student << " students.\n";
	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
