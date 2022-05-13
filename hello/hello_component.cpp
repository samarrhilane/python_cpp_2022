#include <pybind11/pybind11.h>

char version[]="1.0";

char const* getVersion() {
	return version;
}

char const* greet() {
  return "hello, world";
}

class Himiage 
{
     public:
	 ~Himiage() { }
	 char const* Hello_IF() {
 	 return "Hi, Miage IF";
	 }
};

namespace py = pybind11;

	
	

PYBIND11_MODULE(hello_component,greetings)
{
  greetings.doc() = "greeting_object 1.0";
  
  greetings.def("greet", &greet, "a function saying hello");
  //greetings.def("Hello_IF", &Hello_IF, "a function saying hi Miage IF");
  greetings.def("getVersion", &getVersion, "a function returning the version");
	
  py::class_<Himiage>(greetings, "Himiage")
	.def(py::init<std::string>())
	.def("Hello_IF", &Himiage::Hello_IF);
}


 

