#include "cl_write_file.h"

cl_write_file::cl_write_file()
{
}

cl_write_file::cl_write_file(std::string set_file_name)
{
	string_write_file_name = set_file_name;
}

bool cl_write_file::setterWriteFile(std::string string_msg)
{
	ofstream_write_file.open(string_write_file_name);
	ofstream_write_file.write(string_msg.c_str(), string_msg.size());
	ofstream_write_file.close();
	return true;
}
