#include <boost/asio.hpp>
#include <iostream>
/*
In this example, we first create an io_service object to manage the serial port. We then open the serial port at the specified device (/dev/ttyS0) and baud rate (115200).

Next, we create a buffer to store incoming data and read data from the serial port into the buffer using the read_some() method. 
We then print the number of bytes transferred and the received data.

This code establishes a communication link to a remote device through the 
serial port and reads data from the device. You can modify this code to write data to the device or perform other operations on the serial port as needed.


*/
int main() {
    // Create an I/O service object to manage the serial port
    boost::asio::io_service io;

    // Open the serial port at the specified device and baud rate
    boost::asio::serial_port port(io, "/dev/ttyS0", 115200);

    // Create a buffer to store incoming data
    std::vector<char> buffer(1024);

    // Read data from the serial port into the buffer
    std::size_t bytes_transferred = port.read_some(boost::asio::buffer(buffer));

    // Print the number of bytes transferred
    std::cout << "Bytes transferred: " << bytes_transferred << std::endl;

    // Print the received data
    std::cout << "Received data: ";
    std::cout.write(buffer.data(), bytes_transferred);
    std::cout << std::endl;

    return 0;
}