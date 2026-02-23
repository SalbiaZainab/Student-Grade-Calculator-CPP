#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Please enter marks : ";
	cin >> marks;
	
    if (marks > 100 || marks < 0)
	{
    cout << "Invalid marks entered!";
    }
    else if (marks >= 90) {
        cout << "Grade of student is A+";
    }
    else if (marks >= 80) 
	{
        cout << "Grade of student is A";
    }
    else if (marks >= 70) 
	{
        cout << "Grade of student is B";
    }
    else if (marks >= 60)
	{
        cout << "Grade of student is C";
    }
    else if (marks >= 50) 
	{
        cout << "Grade of student is D";
    }
    else
	{
        cout << "Grade of student is F";
    }

}
