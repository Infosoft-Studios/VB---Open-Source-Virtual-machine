#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

struct CREATELOCALMEMORY
{
	namespace loader
	{
		virtual void MemoryAspect(string type1) { return 0; };
		void functions(string type2) { std::cout << type << std::endl; };
	};
};

void lookat(string path)
{
	CREATELOCALMEMORY crlm;
	crlm.getFile = crlm.loader::functions("Functional %system%");

	fstream.open(path);

	string error_type[] =
	{
		"Normal",
		"High",
		"Critical"
	};

	string input;
	cin >> input;

	std::cout << "Welcome to errorhandler1.cpp, please choose how high and how low the error is: Normal, High, Critical" << std::endl;

	if (input == error_type[1])
	{
		std::cout << "thank you, please fix the error first. Best practice: We recommend to close a program frist, while fixing the error!" << std::endl;
	}
	else if (input == error_type[2])
	{
		std::cout << "ALERT ALERT: Please close the program as fast you can do, High is a real problem" << std::endl;
	}
	else if (input == error_type[3])
	{
		system("C:\\Windows\\System32\\Taskmgr.exe");
		std::cout << "END TASK NOW" << std::endl;
	}
	else
	{
		std::cout << "Please write the criticallaty" << std::endl;
	};
};

int main()
{
	std::string path2;
	cin << path2;
	std::cout << "add a path, so that we can open, there is a textbox above this message" << std::endl;
	lookat(path2);
};

// end of main