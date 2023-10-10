#include <iostream>
class employee {
    public:
        explicit employee(): employee(0){}
        explicit employee(const int emp_id): employee(emp_id, defaultSalary) {}
        explicit employee(const double salary):employee(0, salary){};
        explicit employee(int emp_id, double salary): emp_id_{emp_id}, salary_{salary} {};
        friend std::ostream& operator<<(std::ostream&, const employee&);
    private:
        int emp_id_{-1};
        double salary_ {0.0};
        static constexpr double defaultSalary {20000.0};
};

std::ostream& operator<<(std::ostream& os, const employee& e) {
    os << "[" << e.emp_id_ << " - " << e.salary_ << "]" << ", ";
    return os;
}

int main() {
    employee e1;
    employee e2(10);
    employee e3(60000.0);
    employee e4(10,75000);
    std::cout << e1 << e2 << e3 <<e4;
}