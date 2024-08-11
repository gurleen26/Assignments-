#include<iostream>
#include<vector>
using namespace std;

class Student {
private:
    int id;
    string name;
    string major;
    double gpa;

public:
    Student(int id, string name, string major, double gpa) 
        : id(id), name(name), major(major), gpa(gpa) {}

  
    int getId() const { return id; }
    string getName() const { return name; }
    string getMajor() const { return major; }
    double getGPA() const { return gpa; }
 
    void setMajor(const string& newMajor) { major = newMajor; }
    void setGPA(double newGPA) { gpa = newGPA; }

    void printStudentDetails() const {
        cout << "ID: " << id << "\nName: " << name << "\nMajor: " << major << "\nGPA: " << gpa << endl;
    }
};

class UserInterface {
public:
    void displayMenu() const {
        cout << "\n---- OPTIONS ----";
        cout << "\n1. ADD STUDENT ";
        cout << "\n2. UPDATE STUDENT ";
        cout << "\n3. DELETE STUDENT ";
        cout << "\n4. DISPLAY STUDENT ";
        cout << "\n5. GENERATE REPORT ";
        cout << "\n6. EXIT ";
    }

    int getInput() const {
        int choice;
        cin >> choice;
        return choice;
    }
};

class StudentManagementSystem {
private:
    vector<Student> students; 

public:
    void addStudent() {
        int id;
        string name, major;
        double gpa;

        cout << "Enter Student ID: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Student Major: ";
        getline(cin, major);

        cout << "Enter Student GPA: ";
        cin >> gpa;

        students.push_back(Student(id, name, major, gpa));
        cout << "Student added successfully." << endl;
    }

    void updateStudent() {
        int id;
        cout << "Enter the student ID to update: ";
        cin >> id;
        cin.ignore();  

        for (auto& student : students) {
            if (student.getId() == id) {
                string major;
                double gpa;

                cout << "Enter new Major: ";
                getline(cin, major);

                cout << "Enter new GPA: ";
                cin >> gpa;

                student.setMajor(major);
                student.setGPA(gpa);

                cout << "Student updated successfully." << endl;
                return;
            }
        }
        cout << "Student not found." << endl;
    }

    void deleteStudent() {
        int id;
        cout << "Enter the student ID to delete: ";
        cin >> id;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getId() == id) {
                students.erase(it);
                cout << "Student deleted successfully." << endl;
                return;
            }
        }
        cout << "Student not found." << endl;
    }

    void displayStudent() const {
        int id;
        cout << "Enter student ID to display: ";
        cin >> id;

        for (const auto& student : students) {
            if (student.getId() == id) {
                student.printStudentDetails();
                return;
            }
        }
        cout << "Student not found." << endl;
    }

    void generateReport() const {
        if (students.empty()) {
            cout << "No students to report." << endl;
            return;
        }

        cout << "---- STUDENT REPORT ----" << endl;
        for (const auto& student : students) {
            student.printStudentDetails();
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    UserInterface ui;
    StudentManagementSystem sm;

    while (true) {
        ui.displayMenu();
        int choice = ui.getInput();

        switch (choice) {
            case 1:
                sm.addStudent();
                break;
            case 2:
                sm.updateStudent();
                break;
            case 3:
                sm.deleteStudent();
                break;
            case 4:
                sm.displayStudent();
                break;
            case 5:
                sm.generateReport();
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
