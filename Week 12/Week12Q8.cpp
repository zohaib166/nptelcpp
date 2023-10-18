#include <iostream>
#include <thread>
#include <functional>
#include <mutex>

struct ResourceA{
    int RAC;
};

struct ResourceB {
    int RBC;
};

std::mutex RA_mtx;
std::mutex RB_mtx;

void req1(ResourceA& obj_A, ResourceB& obj_B, int nA, int nB) {
    std::unique_lock<std::mutex> lck1(RA_mtx);
    std::unique_lock<std::mutex> lck2(RB_mtx);
    obj_A.RAC += nA;
    obj_B.RBC += nB;
    std::cout<<"REQ1: "<< obj_A.RAC << " " << obj_B.RBC << std::endl;
}

void req2(ResourceA& obj_A, ResourceB& obj_B, int nA, int nB) {
    std::unique_lock<std::mutex> lck2(RB_mtx);
    std::unique_lock<std::mutex> lck1(RA_mtx);
    obj_A.RAC += nA;
    obj_B.RBC += nB;
    std::cout<<"REQ2: "<< obj_A.RAC << " " << obj_B.RBC << std::endl;
}

int main() {
    ResourceA rA{0};
    ResourceB rB{0};
    std::thread t1{std::bind(req1, std::ref(rA), std::ref(rB), 5,5)};
    std::thread t2{std::bind(req2, std::ref(rA), std::ref(rB), 4,4)};
    t1.join();
    t2.join();
    return 0;
}
