#include "pch.h"
#include "Services.h"

services::services(void)
{
	this->oCad = gcnew CAD();
	this->oMap = gcnew CLclient();
}
DataSet^ services::selectionnerToutesLesPersonnes(String^ nomtable)
{
	String^ sql;
	sql = this->oMap->Select();
}