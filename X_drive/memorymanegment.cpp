#include <iostream>
#include <cstdlib>  // for malloc() and free()

class MyClass {
public:
    int x;

    // Overload operator new
    void* operator new(size_t size) {
        std::cout << "Custom new called. Allocating " << size << " bytes.\n";
        void* p = std::malloc(size);
        if (!p) throw std::bad_alloc();
        return p;
    }

    // Overload operator delete
    void operator delete(void* p) {
        std::cout << "Custom delete called.\n";
        std::free(p);
    }

    // Overload operator new[]
    void* operator new[](size_t size) {
        std::cout << "Custom new[] called. Allocating " << size << " bytes.\n";
        void* p = std::malloc(size);
        if (!p) throw std::bad_alloc();
        return p;
    }

    // Overload operator delete[]
    void operator delete[](void* p) {
        std::cout << "Custom delete[] called.\n";
        std::free(p);
    }
};

int main() {
    MyClass* obj = new MyClass;   // Calls overloaded new
    delete obj;                   // Calls overloaded delete

    MyClass* arr = new MyClass[3]; // Calls overloaded new[]
    delete[] arr;                  // Calls overloaded delete[]
    return 0;
}
