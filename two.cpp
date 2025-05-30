#include <iostream>
#include <vector>

struct student {
    std::string studentID;
    int mark;
};

int main () {
    std::vector <student> data;
    std::string target;

    std::cout << "Please enter students' ID and marks: " << std::endl;

    for (int i = 0; i < 5; i++) {
        student s;

        std::cout << "Student " << i + 1 << " ID:";
        std::cin >> s.studentID;
        std::cout << "Student " << i + 1 << " mark:";
        std::cin >> s.mark;
        std::cin.ignore();
        
        data.push_back(s);
    }

    std::cout << "Enter the student's ID that you want o search: ";
    std::cin >> target;

    bool toggle = false;
    int current_mark;
    std::string current_id;
    for (int i = 0; i < data.size(); i++) {
        if (data[i].studentID == target) {
            toggle = true;
            current_mark = data[i].mark;
            current_id = data[i].studentID;
        }
    }

    if (toggle) {
        std::cout << "Target found\n" << std::endl;
        std::cout << "The mark of student " << current_id << " is " << current_mark << ". The grade is " << current_mark << std::endl; 
    }

    system("pause");

    return 0;
}

