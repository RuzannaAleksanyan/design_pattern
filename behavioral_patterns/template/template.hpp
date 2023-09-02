#ifndef TEMPLATE
#define TEMPLATE

#include <iostream>

class Report {
public:
    void generate_report() {
        open_file();
        write_header();
        write_data();
        close_file();
    }

    virtual void open_file() {
        std::cout << "Opening the file" << std::endl;
    }

    virtual void write_header() = 0; 

    virtual void write_data() = 0; 

    virtual void close_file() {
        std::cout << "Closing the file" << std::endl;
    }
};

class PDFReport : public Report {
public:
    void write_header() override {
        std::cout << "Writing PDF header" << std::endl;
    }

    void write_data() override {
        std::cout << "Writing data in PDF format" << std::endl;
    }
};

class CSVReport : public Report {
public:
    void open_file() override {
        std::cout << "Opening a CSV file" << std::endl;
    }

    void write_header() override {
        std::cout << "Writing CSV header" << std::endl;
    }

    void write_data() override {
        std::cout << "Writing data in CSV format" << std::endl;
    }

    void close_file() override {
        std::cout << "Closing a CSV file" << std::endl;
    }
};

#endif
