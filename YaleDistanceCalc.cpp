#include<iostream>
#include<math.h>
using namespace std;

int main() {

	double PI = 3.14159265359;

	double lat1 = 51.4826;
	double lon1 = 0;
	//convert minutes and seconds to degrees
	double lat2 = 41.0 + 18.5 / 60.0; //60 for minutes
	double lon2 = 72.0 + 55.0 / 60.0 + 40.44 / 3600.0; //3600 for seconds
	lon2 *= -1; // minus sign, when present, is on the degrees component

	//calculate colatitudes
	double a = 90 - lat1;
	double b = 90 - lat2;
	double c = abs(lon1 - lon2); //abs turn the value positive if it is negative

	// turn degrees into radius
	a = a * PI / 180.0;
	b = b * PI / 180.0;
	c = c * PI / 180.0;

	double distance = acos(cos(a) * cos(b) + sin(a) * sin(b) * cos(c));
	distance = distance * 3959;
	cout << distance << endl;



}
