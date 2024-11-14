#include <iostream>
#include <Windows.h>
using namespace std;

class Overcoat {
    string type;
    double price;
public:
    Overcoat() : type(" "), price(0) {}

    void setType(const string& type) {
        this->type = type;
    }

    string getType() const {
        return type;
    }

    void setPrice(double price) {
        this->price = price;
    }

    double getPrice() const {
        return price;
    }

    void print() const {
        cout << "\nТип: " << type << "\nЦіна: " << price << endl;
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
        return coat1.price > coat2.price;
    }
};

class Flat {
    int area;
    double price;
public:
    Flat() : area(0), price(0) {}

    void setArea(int area) {
        this->area = area;
    }

    int getArea() const {
        return area;
    }

    void setPrice(double price) {
        this->price = price;
    }

    double getPrice() const {
        return price;
    }

    void print() const {
        cout << "\nПлоща: " << area << "\nЦіна: " << price << endl;
    }

    friend bool operator==(const Flat& flat1, const Flat& flat2) {
        return flat1.area == flat2.area;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    friend bool operator>(const Flat& flat1, const Flat& flat2) {
        return flat1.price > flat2.price;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Overcoat coat1, coat2;
    coat1.setType("Куртка");
    coat1.setPrice(130);
    coat2.setType("Куртка");
    coat2.setPrice(150);

    cout << "Пальто:" << endl;
    coat1.print();
    coat2.print();

    if (coat1 == coat2) {
        cout << "\nУ них одинаковий тип: " << coat1.getType() << endl;
    }
    else {
        cout << "\nУ них різні типи" << endl;
    }

    if (coat1 > coat2) {
        cout << "Перше пальто дорожче за друге" << endl;
    }
    else {
        cout << "Друге пальто дорожче за перше" << endl;
    }

    Overcoat coat3 = coat2;
    cout << "\nКопія другого пальто:" << endl;
    coat3.print();

    Flat flat1, flat2;
    flat1.setArea(32);
    flat1.setPrice(130);
    flat2.setArea(45);
    flat2.setPrice(150);

    cout << "\n\nКвартири:" << endl;
    flat1.print();
    flat2.print();

    if (flat1 == flat2) {
        cout << "\nУ них одинаковий розмір: " << flat1.getArea() << " кв.м." << endl;
    }
    else {
        cout << "\nУ них різний розмір" << endl;
    }

    if (flat1 > flat2) {
        cout << "Перша квартира дорожча за другу" << endl;
    }
    else {
        cout << "Друга квартира дорожча за першу" << endl;
    }

    Flat flat3 = flat2;
    cout << "\nКопія другої квартири:" << endl;
    flat3.print();

    return 0;
}
