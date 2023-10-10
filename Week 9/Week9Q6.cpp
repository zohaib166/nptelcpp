#include <iostream>
#include <list>
#include <numeric>

class purchase {
public: 
    purchase(int itm_no, double pri, int qty): itm_no_(itm_no), pri_(pri), qty_(qty) {}
    double get_pri() { return pri_; }
    int get_qty() { return qty_; }
private:
    int itm_no_, qty_;
    double pri_;  
};

struct compute_price{
    double operator()(double d, purchase p) {
        return d + p.get_pri() * p.get_qty();
    }
};

double compute_total(std::list<purchase> li, compute_price cp) {
    double total = accumulate(li.begin(), li.end(), 0, cp);
    return total;
}

int main() {
    std::list <purchase> li {purchase(101, 500.0, 10), purchase(102, 400.0, 5), purchase(102, 600.0, 5)};
    compute_price cp;
    double cost = compute_total(li, cp);
    std::cout<<cost;
    return 0;
}