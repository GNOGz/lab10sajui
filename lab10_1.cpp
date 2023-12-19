#include<iostream>
using namespace std;

int main(){
	char grade;
	int countStudent  = 1;
	int count[5] = {0,0,0,0,0}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << countStudent<<"]: ";
		cin >> grade; 
		if(grade == 'A'){
			count[0]++;
			countStudent++;
		}
		else if(grade == 'B')
		{
			count[1]++;
			countStudent++;
		}
		else if(grade == 'C'){
			count[2]++;
			countStudent++;
		}
		else if(grade == 'D'){
			count[3]++;
			countStudent++;
		}
		else if(grade == 'F'){
			count[4]++; 
			countStudent++;
		}
		else if (grade == '0') break;
		else cout<<"Wrong input. Please input again.\n";
	}while(true);

	cout << "In total "<<countStudent-1<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	return 0;
}
