#include <string>
class Persona
{
private:
	
	std::string nombre;
	std::string ap_paterno;
	std::string ap_materno;
	std::string fecha_nacimiento;
	char genero;
	std::string entidad_federativa;
	std::string curp;

public:
	
	Persona(std::string, std::string, std::string, std::string, char, std::string);
	Persona(const Persona&);
	~Persona();
};