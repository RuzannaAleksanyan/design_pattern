#include "template.hpp"

int main() {
    Report* pdf_report = new PDFReport();
    Report* csv_report = new CSVReport();

    pdf_report->generate_report();
    std::cout << "--------------------" << std::endl;
    csv_report->generate_report();

    delete pdf_report;
    delete csv_report;

    return 0;
}
