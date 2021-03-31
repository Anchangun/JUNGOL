#pragma once

#include<fstream>
#include"share.h"

class cl_file_write
{
private:
		std::ofstream ofstream_write_file;
	public:
		cl_file_write();
		cl_file_write(std::string interface_file_name);
		bool setterWriteFile(std::string string_msg);

	protected:
		std::string string_write_file_name;
};

