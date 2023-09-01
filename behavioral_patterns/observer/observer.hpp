#ifndef OBSERVER
#define OBSETVER

#include <iostream>
#include <vector>
#include <algorithm>

class Observer {
public:
    virtual void update(float c, float ro) = 0;
};      

class Display : public Observer {
public:
    void update(float c, float ro) {
        std::cout << "Display: Temperature = " << c << "°C, Humidity = " << ro << "%" << std::endl;
    }
};

class WeatherStation {
private:
    std::vector<Observer*> observers;
    float c;
    float ro;
public:
    void add_observer(Observer* observer) {
        observers.push_back(observer);
    }

    void remove_observer(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notify_observers() {
        for (Observer* observer : observers) {
            observer->update(c, ro);
        }
    }

    void set_weather_data(float temperature, float humidity) {
        this->c = temperature;
        this->ro = humidity;
        notifyObservers();
    }
};

#endif
