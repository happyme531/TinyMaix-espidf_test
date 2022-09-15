#include <iostream>
#include <thread>
#include "tests.h"
#include "tm_port.h"

#include <esp_attr.h>
#include <esp_system.h>
#include <esp_sleep.h>
//Boot count 
volatile RTC_DATA_ATTR uint32_t boot_count = 0;

extern "C" int app_main(){
    
    switch (boot_count) {
    case 0:
      test_mnist(0, NULL);
      break;
    case 1:
      test_cifar(0, NULL);
      break;
    case 2:
      test_vww96(0, NULL);
      break;
    case 3:
      test_mbnet128(0, NULL);
      break;
    default:
      boot_count = 0;
      std::cout << "Test finished" << std::endl;
      return 0;
    }
    std::cout.flush();
    boot_count++;
    //Go to deep sleep, actrually reset the CPUs and main memory
    esp_sleep_enable_timer_wakeup(100);
    esp_deep_sleep_start();
    //never reach here
    return 0;
}

