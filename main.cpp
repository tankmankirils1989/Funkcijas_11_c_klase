#include <iostream>
using namespace std;
int process (int x, int y, int & max, int diff, double & avg) 
{
if(x>y){
  diff = x-y;
  max = x;
  avg= (x+y)/2;
    }
  else {
    max = y;
    diff = y-x;
    avg= (x+y)/2;
  }
}
int main() {
	int a,b,max;
	double avg;
	cout << "Ievadiet skaitļus:\n";
	cin >> a >> b;
	int diff= process (a,b,max,diff,avg);
	cout << "Lielākais: "
		<< max << endl;
	cout << "Vidējais: "
		<< avg	<< endl;
	cout << "Starpība: "
		<< diff << endl;
	return 0;
}
