#include "observer.hpp"

int main() {
    WeatherStation weatherStation;

    Display display1;
    Display display2;

    weatherStation.addObserver(&display1);
    weatherStation.addObserver(&display2);

    weatherStation.setWeatherData(25.5, 70.2);
    weatherStation.setWeatherData(24.8, 68.5);

    weatherStation.removeObserver(&display2);

    weatherStation.setWeatherData(23.7, 75.0);

    return 0;
}
