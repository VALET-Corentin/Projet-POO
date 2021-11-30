#include "pch.h"
#include "CAD.h"


CAD::CAD(void)
{
	this->chainecon = "Data Source = LAPTOP-OUHMHNOM\\SQLEXPRESS;Initial Catalog=\"DB 6\";Persist Security Info=True;User ID=\"Prosit 6\";Password=tomlucmarty27";

	this->requete = "Rien";

	this->connection = gcnew System::Data::SqlClient::SqlConnection(this->chainecon);
	this->command = gcnew System::Data::SqlClient::SqlCommand(this->requete, this->connection);
	this->sDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->dataSet = gcnew System::Data::DataSet();

	this->command->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ CAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->dataSet->Clear();
	this->requete = sSql;
	this->command->CommandText = this->requete;
	this->sDataAdapter->SelectCommand = this->command;
	this->sDataAdapter->Fill(this->dataSet, sDataTableName);

	return this->dataSet;
}
void CAD::actionRows(System::String^ sSql)
{
	this->requete = sSql;
	this->command->CommandText = this->requete;
	this->sDataAdapter->SelectCommand = this->command;
	this->connection->Open();
	this->command->ExecuteNonQuery();
	this->connection->Close();
}
