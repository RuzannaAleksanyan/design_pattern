#ifndef SINGLETON
#define SINGLETON 

class Singleton {
private:
    static Singleton* Instance;
    Singleton() {}
public:
    static Singleton* getInstance() {
        if (Instance == nullptr) {
            Instance = new Singleton();
        }   
        return Instance;
    }
};

Singleton* Singleton::Instance = nullptr;

#endif
