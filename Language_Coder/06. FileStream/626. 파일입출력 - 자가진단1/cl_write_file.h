#pragma once
#include"share.h"
#include<fstream>

class cl_write_file
{
	private:
		std::ofstream ofstream_write_file;
	public:
		cl_write_file();
		cl_write_file(std::string set_file_name);
		bool setterWriteFile(std::string string_msg);

	protected:
		std::string string_write_file_name;
};

