# observer
## Description
This project implements the Observer Design Pattern to create a simple weather station application. The Weather Station acts as the subject, and it maintains a list of observers (displays) that are interested in receiving updates whenever the weather data changes. The displays show the current temperature and humidity.
## Table of Contents
- [Installation](#Installation)
- [Usage](#Usage)
- [Contributing](#Contributing)

## Installation
To run the Weather Station Observer application, follow these steps:
- Clone the repository to your local machine.
- Navigate to the project directory.
- Compile the code using your preferred C++ compiler
## Usage
After running the application, the Weather Station will create two display objects, display1 and display2, which act as observers. The Weather Station will then register both displays as observers using the addObserver method.
The application will then set weather data using the setWeatherData method in the Weather Station, which triggers an update in both display1 and display2. The displays will show the current temperature and humidity.
To test the observer removal functionality, the application will remove display2 from the list of observers using the removeObserver method. After that, only display1 will receive updates when the weather data changes.
## Contributing
Contributions to this project are welcome. If you find any issues or have ideas for improvements, please feel free to open a pull request or submit an issue.
