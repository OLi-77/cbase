#include <iostream>
enum class days1 : char { mon = 0, tue = 0, wed = 0, thu = 0, fri = 0, sat, sun };
enum class days2 : char { mon = 'a', tue, wed, thu, fri, sat, sun };
enum class days3 : bool { mon = false, tue};
enum class days4 : long long  { mon, tue = 0, wed = 0, thu = 0, fri = 0, sat, sun };
enum days5 : unsigned long  { mon, tue = 0, wed = 0, thu = 0, fri = 0, sat, sun };
enum class days6 : std::uint32_t { mon= 1000, tue = mon +2 };


int main() {
    days2 d2 = days2::tue;
    // std::cout << d2; // недозволена операція
    std::cout << char(d2); // print b
    days3 d3 = days3::tue;
    std::cout << bool(d3); // print b
}

