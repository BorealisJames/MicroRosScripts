# Notes

#define I2C_SDA 1
#define I2C_SCL 2
SDA and SCL are gpio pin 1 and 2 on ESP32-S3 devkit-c1

Possible when testing to set a lower DLPF from 
DLPF_BANDWIDTH_21HZ to even lower
DLPF_BANDWIDTH_10HZ
DLPF_BANDWIDTH_5HZ

Lower values have higher accuracy but lower output data rate. 
Can lower SMPLRT_DIV to compensate this ?

rclc is "ros client library for c". only provides convenience functions that ease the programming with the rcl types. New types are introduced only for concepts that are missing in rcl, most important an Executor, Lifecycle Node and the Parameter server.
rcl is "ros client library" library where publishers subscriber functions and structs defined

What is support?
What is allocator? 

# To Do

- A better error handler that states the error?
- Reconnection of ESP32 to client, client still have internet connection
- Test if ESP32 able to find client if client losing internet connection