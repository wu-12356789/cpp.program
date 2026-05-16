#include <iostream>
#include <string>
#include <vector>
#include <limits>

class Person {
protected:
    std::string name;
    std::string gender;
    std::string idNumber;
    std::string phone;

public:
    void inputBasicInfo() {
        std::cout << "姓名: ";
        std::getline(std::cin, name);
        std::cout << "性别: ";
        std::getline(std::cin, gender);
        std::cout << "身份证号: ";
        std::getline(std::cin, idNumber);
        std::cout << "联系电话: ";
        std::getline(std::cin, phone);
    }

    void displayBasicInfo() const {
        std::cout << "姓名: " << name << '\n'
                  << "性别: " << gender << '\n'
                  << "身份证号: " << idNumber << '\n'
                  << "联系电话: " << phone << '\n';
    }
};

class Student : virtual public Person {
protected:
    std::string studentId;
    std::string major;

public:
    void inputStudentInfo() {
        std::cout << "请输入学生信息:\n";
        std::cout << "学号: ";
        std::getline(std::cin, studentId);
        inputBasicInfo();
        std::cout << "专业: ";
        std::getline(std::cin, major);
    }

    void displayStudentInfo() const {
        std::cout << "------------------------------\n"
                  << "学生信息:\n"
                  << "学号: " << studentId << '\n';
        displayBasicInfo();
        std::cout << "专业: " << major << '\n';
    }
};

class Teacher : virtual public Person {
protected:
    std::string employeeId;
    std::string title;
    std::string department;

public:
    void inputTeacherInfo() {
        std::cout << "请输入教师信息:\n";
        std::cout << "工号: ";
        std::getline(std::cin, employeeId);
        inputBasicInfo();
        std::cout << "职称: ";
        std::getline(std::cin, title);
        std::cout << "部门: ";
        std::getline(std::cin, department);
    }

    void displayTeacherInfo() const {
        std::cout << "------------------------------\n"
                  << "教师信息:\n"
                  << "工号: " << employeeId << '\n';
        displayBasicInfo();
        std::cout << "职称: " << title << '\n'
                  << "部门: " << department << '\n';
    }
};

class TA : public Student, public Teacher {
protected:
    std::string courseName;
    std::string textbook;
    std::string officeHours;

public:
    TA() = default;

    void inputTAInfo() {
        std::cout << "请输入助教信息:\n";
        std::cout << "学号: ";
        std::getline(std::cin, studentId);
        std::cout << "工号: ";
        std::getline(std::cin, employeeId);
        inputBasicInfo();
        std::cout << "专业: ";
        std::getline(std::cin, major);
        std::cout << "职称: ";
        std::getline(std::cin, title);
        std::cout << "部门: ";
        std::getline(std::cin, department);
        std::cout << "负责课程: ";
        std::getline(std::cin, courseName);
        std::cout << "采用书籍: ";
        std::getline(std::cin, textbook);
        std::cout << "答疑时间: ";
        std::getline(std::cin, officeHours);
    }

    void displayTAInfo() const {
        std::cout << "------------------------------\n"
                  << "助教信息:\n"
                  << "学号: " << studentId << '\n'
                  << "工号: " << employeeId << '\n';
        displayBasicInfo();
        std::cout << "专业: " << major << '\n'
                  << "职称: " << title << '\n'
                  << "部门: " << department << '\n'
                  << "负责课程: " << courseName << '\n'
                  << "采用书籍: " << textbook << '\n'
                  << "答疑时间: " << officeHours << '\n';
    }
};

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    std::vector<Student> students;
    std::vector<Teacher> teachers;
    std::vector<TA> tas;
    int choice = 0;

    while (true) {
        std::cout << "\n===== 信息管理菜单 =====\n"
                  << "1. 输入学生信息\n"
                  << "2. 输入教师信息\n"
                  << "3. 输入助教信息\n"
                  << "4. 显示所有学生信息\n"
                  << "5. 显示所有教师信息\n"
                  << "6. 显示所有助教信息\n"
                  << "7. 退出\n"
                  << "请选择 (1-7): ";
        if (!(std::cin >> choice)) {
            std::cout << "输入无效，请输入数字。\n";
            clearInput();
            continue;
        }
        clearInput();

        if (choice == 1) {
            Student student;
            student.inputStudentInfo();
            students.push_back(student);
            std::cout << "学生信息已保存。\n";
        } else if (choice == 2) {
            Teacher teacher;
            teacher.inputTeacherInfo();
            teachers.push_back(teacher);
            std::cout << "教师信息已保存。\n";
        } else if (choice == 3) {
            TA ta;
            ta.inputTAInfo();
            tas.push_back(ta);
            std::cout << "助教信息已保存。\n";
        } else if (choice == 4) {
            if (students.empty()) {
                std::cout << "当前没有学生信息。\n";
            } else {
                std::cout << "\n=== 所有学生信息 ===\n";
                for (const auto& student : students) {
                    student.displayStudentInfo();
                }
            }
        } else if (choice == 5) {
            if (teachers.empty()) {
                std::cout << "当前没有教师信息。\n";
            } else {
                std::cout << "\n=== 所有教师信息 ===\n";
                for (const auto& teacher : teachers) {
                    teacher.displayTeacherInfo();
                }
            }
        } else if (choice == 6) {
            if (tas.empty()) {
                std::cout << "当前没有助教信息。\n";
            } else {
                std::cout << "\n=== 所有助教信息 ===\n";
                for (const auto& ta : tas) {
                    ta.displayTAInfo();
                }
            }
        } else if (choice == 7) {
            std::cout << "退出程序。\n";
            break;
        } else {
            std::cout << "请选择1到7之间的选项。\n";
        }
    }

    return 0;
}
