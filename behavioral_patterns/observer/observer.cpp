#include "observer.hpp"

int main() {
    WeatherStation weatherStation;

    Display display1;
    Display display2;

    weatherStation.add_observer(&display1);
    weatherStation.add_observer(&display2);

    weatherStation.set_weather_data(25.5, 70.2);
    weatherStation.set_weather_data(24.8, 68.5);

    weatherStation.remove_observer(&display2);

    weatherStation.set_weather_data(23.7, 75.0);

    return 0;
}
