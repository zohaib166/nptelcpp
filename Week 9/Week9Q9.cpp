#include <iostream>
#include <algorithm>
#include <vector>

class product {
    public:
    product(int prod_num, std::string prod_nam): prod_num_(prod_num), prod_nam_(prod_nam) {}
    int get_prod_num() { return prod_num_; }
    std::string get_prod_nam() { return prod_nam_; }
    private:
    int prod_num_;
    std::string prod_nam_;
};

struct compare {
    bool operator() ( product p1, product p2 ) {
        if(p1.get_prod_nam() == p2.get_prod_nam()) {
            if(p1.get_prod_num() > p2.get_prod_num()) {
                return true;
            } else {
                return false;
            }
        } else if(p1.get_prod_nam() > p2.get_prod_nam()) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    std::vector<product> prod { product(103, "Pen"), product(102, "Pencil"), product(106, "scale"), 
    product(104, "Pen"), product(105, "sharpener")};
    sort(prod.begin(), prod.end(), compare());
    for(std::vector<product>::iterator it = prod.begin(); it != prod.end(); ++it) {
        std::cout << it->get_prod_num() << " : " << it->get_prod_nam() << std::endl;
    }
    return 0;
}