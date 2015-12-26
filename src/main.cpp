/*
 * main.cpp
 *
 *  Created on: Dec 13, 2015
 *      Author: rafal
 */

#include "serial_port.h"
#include <string>

void default_config_test()
{
	using namespace std;

	string name = "/dev/ttyS98";
	try
	{
		mrobot::serial_port serial_device{name};
	}
	catch(mrobot::serial_port_exception& ex)
	{
		cout<<"default_config_test() failed - exception was thrown: "<<ex.what()<<endl;
		return;
	}
	cout<<"default_config_test() succeed"<<endl;
}

void config_test()
{
	using namespace std;
	using namespace mrobot;

	string name = "/dev/ttyS98";
	baudrate_option baud = baudrate_option::b115200;
	data_bits_option data = data_bits_option::eight;
	parity_option parity = parity_option::none;
	stop_bits_option stop_bits = stop_bits_option::one;

	try
	{
		serial_port serial_device(name, baud, data, parity, stop_bits);
	}
	catch(serial_port_exception& ex)
	{
		cout<<"config_test() failed - exception was thrown: "<<ex.what()<<endl;
		return;
	}
	cout<<"config_test() succeed"<<endl;
}

void action_test()
{
	using namespace std;
	using namespace mrobot;

	string name = "/dev/ttyS98";
	baudrate_option baud = baudrate_option::b115200;
	data_bits_option data = data_bits_option::eight;
	parity_option parity = parity_option::none;
	stop_bits_option stop_bits = stop_bits_option::one;

	try
	{
		serial_port serial_device(name, baud, data, parity, stop_bits);
	}
	catch(serial_port_exception& ex)
	{
		cout<<"action_test() failed - exception was thrown: "<<ex.what()<<endl;
		return;
	}
	cout<<"action_test() succeed"<<endl;
}

int main()
{
	return 0;
}


