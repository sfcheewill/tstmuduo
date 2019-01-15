

#pragma once

#include <stdio.h>

#include <iostream>
#include <sstream>

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

#include <fstream>
#include <thread>

#include <memory>



#define GCC

class TimeInterval {
public:
    TimeInterval(const std::string& d) : detail(d)
    {
        init();
    }
//    TimeInterval(const char* d) : detail(d)
//    {
//        init();
//    }

    TimeInterval()
    {
        init();
    }

    ~TimeInterval()
    {
#ifdef GCC
        gettimeofday(&end, NULL);
        std::cout << detail
            << 1000 * (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000
            << " ms" << endl;
#else
        end = clock();
        std::cout << detail
            << (double)(end - start) << " ms" << std::endl;
#endif // GCC
    }

protected:
    void init() {
#ifdef GCC
        printf( "gettimeofday logic\n" );
        gettimeofday(&start, NULL);
#else
        printf( "clock logic\n" );
        start = clock();
#endif // GCC
    }
private:
    std::string detail;
#ifdef GCC
    timeval start, end;
#else
    clock_t start, end;
#endif // GCC
};

#define TIME_INTERVAL_SCOPE(d)   std::shared_ptr<TimeInterval> time_interval_scope_begin = std::make_shared<TimeInterval>(d)




