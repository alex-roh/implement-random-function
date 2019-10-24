#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int random(int num);

using namespace std;

int main(int argc, char** argv) {
	
	int num = 0;
	
	cin >> num;
	
	int desired_num = random(num);
	
	while(desired_num > num)
		desired_num = random(num);
	
	cout << desired_num << endl;
	
	return 0;
}


int random(int num){
	
	int random_num = 0;
	int pivot = 1;
	
	srand((unsigned int) time(NULL));
	
	while (pow(2.0, (double) pivot) < num)
		pivot++;
	
	for(int i = 0; i < pivot; i++)
		random_num = (random_num * 2) + (rand() % 2);	
	
	return random_num;
		
}










