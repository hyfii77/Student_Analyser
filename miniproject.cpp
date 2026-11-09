#include <iostream>
using namespace std;

// Function to enter marks
void inputMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks! Enter again: ";
            cin >> marks[i];
        }
    }
}

// Function to calculate total
int totalMarks(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    return total;
}

// Function to find highest mark
int highestMark(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// Function to find lowest mark
int lowestMark(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

// Function to count passed students
int passedStudents(int marks[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
        {
            count++;
        }
    }

    return count;
}

// Main function
int main()
{
    char choice;

    do
    {
        int n;

        cout << "\nSTUDENT MARKS ANALYZER\n";
        cout << "Enter number of students (1-100): ";
        cin >> n;

        while (n < 1 || n > 100)
        {
            cout << "Invalid number! Enter again: ";
            cin >> n;
        }

        int* marks = new int[n];

        inputMarks(marks, n);

        int total = totalMarks(marks, n);
        double average = (double)total / n;
        int highest = highestMark(marks, n);
        int lowest = lowestMark(marks, n);
        int passed = passedStudents(marks, n);
        int failed = n - passed;

        cout << "\n------ STUDENT REPORT ------\n";
        cout << "Total marks: " << total << endl;
        cout << "Average marks: " << average << endl;
        cout << "Highest mark: " << highest << endl;
        cout << "Lowest mark: " << lowest << endl;
        cout << "Passed students: " << passed << endl;
        cout << "Failed students: " << failed << endl;

        delete[] marks;

        cout << "\nDo you want to run again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you!\n";

    return 0;
}