#pragma once
#include <iostream>
#include <string>
#include <regex>

class ZipCountry {
    std::string countryName;
    std::string pattern;
    int length;

public:
    ZipCountry(const std::string& name, const std::string& pat, int len)
        : countryName(name), pattern(pat), length(len) {}

    [[nodiscard]] const std::string& country_name() const {
        return countryName;
    }
    void set_country_name(const std::string& country_name) {
        countryName = country_name;
    }

    [[nodiscard]] const std::string& pattern1() const {
        return pattern;
    }
    void set_pattern(const std::string& pattern) {
        this->pattern = pattern;
    }

    [[nodiscard]] int length1() const {
        return length;
    }
    void set_length(int length) {
        if (length > 0)
            this->length = length;
    }

    [[nodiscard]] bool validate(const std::string& zip) const {
        return std::regex_match(zip, std::regex(pattern));
    }
};