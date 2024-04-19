#include <iostream>

class Group_Generator {
private:
    int total_students;
    int total_groups;

public:
    Group_Generator(int students, int groups) : total_students(students), total_groups(groups) {}

    void generateGroups() {
        int students_per_group = total_students / total_groups;
        int remaining_students = total_students % total_groups;
        int student_count = 1;

        for (int i = 1; i <= total_groups; ++i) {
            std::cout << "Group " << i << " ";
            for (int j = 0; j < students_per_group; ++j) {
                std::cout << "Roll#" << student_count << " ";
                student_count++;
            }
            if (remaining_students > 0) {
                std::cout << "Roll#" << student_count << " ";
                student_count++;
                remaining_students--;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int total_students, total_groups;
    std::cout << "Enter total number of students: ";
    std::cin >> total_students;
    std::cout << "Enter total number of groups: ";
    std::cin >> total_groups;

    Group_Generator generator(total_students, total_groups);
    generator.generateGroups();

    return 0;
}

