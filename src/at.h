#ifndef AT_H
#define AT_H
#include "serial.h"

void get_device_info(HANDLE serial_handle);
void get_current_operator(HANDLE serial_handle);
void get_signal_strength(HANDLE serial_handle);
void get_ssl_certificates(HANDLE serial_handle);
void setup_ssl_context(HANDLE serial_handle);

#endif