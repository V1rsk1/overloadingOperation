#include <iostream>
using namespace std;
class Overcoat {
    string type;
    double price;
public:
    Overcoat() :type(" "), price(0) {}
    void setType(const string& typee) {
        this->type = typee;
    }

    string getType() const {
        return type;
    }
    void setPrice(const double& price) {
        this->price = price;
    }

    double getPrice() const {
        return price;
    }
    void print() {
        cout << "\nType: " << getType() << "\nPrice: " << getPrice() << endl;
    }
    friend bool operator==(const Overcoat& coat1, const Overcoat& coat2) {
        return coat1.type == coat2.type;
    }
    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }
    friend bool operator>(const Overcoat& coat1, const Overcoat& coat2) {
        if (coat1.type == coat2.type) {
            return coat1.price > coat2.price;
        }
    }
};
class Flat {
    int S;
    double price;
public:
    Flat() :S(0), price(0) {}
    void setS(const int& SS) {
        this->S = SS;
    }

    int getS() const {
        return S;
    }
    void setPrice(const double& price) {
        this->price = price;
    }

    double getPrice() const {
        return price;
    }
    void print() {
        cout << "\nPlosha: " << getS() << "\nPrice: " << getPrice() << endl;
    }
    friend bool operator==(const Flat& flat1, const Flat& flat2) {
        return flat1.S == flat2.S;
    }
    Flat& operator=(const Flat& other) {
        if (this != &other) {
            S = other.S;
            price = other.price;
        }
        return *this;
    }
    friend bool operator>(const Flat& flat1, const Flat& flat2) {
        if (flat1.S == flat2.S) {
            return flat1.price > flat2.price;
        }
    }
};
int main()
{
    Overcoat coat1;
    coat1.setType("Sweater");
    coat1.setPrice(130);
    Overcoat coat2;
    coat2.setType("Sweater");
    coat2.setPrice(150);
    cout << "Overcoats: " << endl;
    coat1.print();
    coat2.print();
    bool a = coat1 == coat2, b = coat1 > coat2;
    (a == 1) ? cout << "\nThey both have same type: " << coat1.getType() << endl : cout << "\nThey both haven`t same type" << endl;
    (b == 1) ? cout << "First is more expencive than second " << endl : cout << "Second is more expencive than first " << endl;
    Overcoat coat3;
    coat3 = coat2;
    coat3.print();


    Flat flat1;
    flat1.setS(32);
    flat1.setPrice(130);
    Flat flat2;
    flat2.setS(45);
    flat2.setPrice(150);
    cout << "\n\nFlats: " << endl;
    flat1.print();
    flat2.print();
    bool c = flat1 == flat2, d = flat1 > flat2;
    (c == 1) ? cout << "\nThey both have same ploshu: " << flat1.getS() << endl : cout << "\nThey both haven`t same ploshu" << endl;
    (d == 1) ? cout << "First is more expencive than second " << endl : cout << "Second is more expencive than first " << endl;
    Flat flat3;
    flat3 = flat2;
    flat3.print();
}