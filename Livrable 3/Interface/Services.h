#pragma once
#include "MAP.h"
#include "CAD.h"

ref class services
{
private:
	CAD^ oCad;
	CLclient^ oMap;
public:
	services(void);
	System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
	void ajouterUnePersonne(System::String^, System::String^);
	void supprimerPersonne(int^);

};