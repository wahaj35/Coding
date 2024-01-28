#include <iostream>
#include <string>
using namespace std;
void GPA(float, float, float, float, float, float, int);
struct data
{
	int roll_no;
	string name;
	float obtained_marks[6];
	int CreditHours[6];
	string subject[6] = {"Linear Algebra", "Software Engineering", "DLD", "Financial Management", "Pak Studies", "English"};
} student;
class QP
{
private:
	float quality_points[25] = {12, 11.67, 11.33, 11, 10.67, 10.33, 10, 9.67, 9.33, 9, 8.67, 8.33, 8, 7.67, 7.33, 7, 6.67, 6.33, 6, 5.5, 5, 4.5, 4, 3.5, 3};

public:
	float QualityPoints(float om);
	float DLD(float om5);
	float PakStudies(float om6);
};
int main()
{
	QP qualityPoints;
	char choice; // This variable is for the choice taken from the user.
	do
	{
		
		int total_marks[6];
		int a = 0; // counter for the loop
		cout << "Name: ";
		getline(cin,student.name);
		while (a <= 0)
		{
			cout << "Roll No: ";
			cin >> student.roll_no;
			cout << "Enter the Credit Hours of Subjects!" << endl;
			int n = 0; // counter for the loop;
			while (n < 6)
			{
				cout << "Credit Hours of " << student.subject[n] << ": ";
				cin >> student.CreditHours[n];
				n++;
			}
			cout << "Enter the Obtained Marks of All the subjects! " << endl;
			int c = 0; // counter
			while (c <= 5)
			{
				cout << student.subject[c] << ": ";
				cin >> student.obtained_marks[c];

				c++;
			}

			a++;
		}
		// Loop for calculating the sum of all Credit Hours of all Subjects.
		int Total_CreditHours = 0;
		int i = 0; // counter for the loop
		while (i < 6)
		{
			Total_CreditHours = student.CreditHours[i] + Total_CreditHours;

			i++;
		}
		cout << "Total Credit Hours: " << Total_CreditHours << endl;
		cout << "Total Marks: " << 360 << endl;
		float obtained = student.obtained_marks[0] + student.obtained_marks[1] + student.obtained_marks[2] + student.obtained_marks[3] + student.obtained_marks[4] + student.obtained_marks[5];
		cout << "Obtained Marks: " << obtained << endl;
		float percentage = obtained / 360 * 100;
		cout << "Percentage: " << percentage << endl;

		float om1, om2, om3, om4, om5, om6; // here om is the variable thar store the obtained marks of the specific subject
		// Loop for calling the function for the calculation of quality points of Linear Algebra
		int a1 = 0; // counter for the loop
		while (a1 <= 5)
		{
			if (student.subject[a1] == "Linear Algebra")
			{
				om1 = student.obtained_marks[a1];
				om1=qualityPoints.QualityPoints(om1);
			}
			else if (student.subject[a1] == "Software Engineering")
			{
				om2 = student.obtained_marks[a1];
				om2=qualityPoints.QualityPoints(om2);
			}
			else if (student.subject[a1] == "Financial Management")
			{
				om3 = student.obtained_marks[a1];
				om3=qualityPoints.QualityPoints(om3);
			}
			else if (student.subject[a1] == "English")
			{
				om4 = student.obtained_marks[a1];
				om4=qualityPoints.QualityPoints(om4);
			}
			else if (student.subject[a1] == "DLD")
			{
				om5 = student.obtained_marks[a1];
				om5 = qualityPoints.DLD(om5);
			}
			else if (student.subject[a1] == "Pak Studies")
			{
				om6 = student.obtained_marks[a1];
				om6 = qualityPoints.PakStudies(om6);
			}

			a1++;
		}
		// cout<<"Linear Algebra: "<<om1<<endl;
		// cout<<"Software Engineering: "<<om2<<endl;
		// cout<<"Financial Management: "<<om3<<endl;
		// cout<<"English: "<<om4<<endl;
		// cout<<"DLD: "<<om5<<endl;
		// cout<<"Pak Studies: "<<om6<<endl;
		GPA(om1, om2, om3, om4, om5, om6, Total_CreditHours);
		cout << "Do you want to Check again? If yes, Enter: 'y'";
		cin >> choice;
	} while ((choice == 'y') && (choice == 'y'));
	return 0;
}

void GPA(float om1, float om2, float om3, float om4, float om5, float om6, int Total_CreditHours)
{
	float sum = om1 + om2 + om3 + om4 + om5 + om6;
	float GPA = sum / Total_CreditHours;
	cout << "GPA: " << GPA << endl;
}

// Function for calculating the quality points of the subjects. It is a function of the class QP.
float QP::QualityPoints(float om)
{
	int i = 0; // counter for the loop
	int a1 = 48;
	while (i <= 25)
	{
		if ((om >= a1 && om <= 60))
		{
			om = quality_points[i];
		}
		else
		{
			if (om == a1)
			{
				om = quality_points[i];
			}
		}
		a1--;
		i++;
	}
	return om;
}
// Function for calculating the quality points of 80 marks paper.It is also the function of the Class QP.
float QP::DLD(float om5)
{
	float quality_points[33] = {16, 15.67, 15.33, 15, 14.67, 14.33, 14, 13.67, 13.33, 13, 12.67, 12.33, 12, 11.67, 11.33, 11, 10.67, 10.33, 10, 9.67, 9.33, 9, 8.67, 8.33, 8, 7.5, 7, 6.5, 6, 5.5, 5, 4.5, 4};
	int i = 0; // counter for the loop
	int a1 = 64;
	while (i <= 32)
	{
		if ((om5 >= a1 && om5 <= 80))
		{
			om5 = quality_points[i];
		}
		else
		{
			if (om5 == a1)
			{
				om5 = quality_points[i];
			}
		}
		a1--;
		i++;
	}
	return om5;
}
float QP::PakStudies(float om6)
{
	float quality_points[17] = {8, 7.67, 7.33, 7, 6.67, 6.33, 6, 5.67, 5.33, 5, 4.67, 4.33, 4, 3.5, 3, 2.5, 2};
	int i = 0; // counter for the loop
	int a1 = 32;
	while (i <= 16)
	{
		if ((om6 >= a1 && om6 <= 40))
		{
			om6 = quality_points[i];
		}
		else
		{
			if (om6 == a1)
			{
				om6 = quality_points[i];
			}
		}
		a1--;
		i++;
	}
	return om6;
}