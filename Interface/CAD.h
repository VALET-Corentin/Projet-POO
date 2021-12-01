#pragma once
ref class CAD
{
private:
	System::String^ requete;
	System::String^ chainecon;
	System::Data::SqlClient::SqlConnection^ connection;
	System::Data::SqlClient::SqlCommand^ command;
	System::Data::SqlClient::SqlDataAdapter^ sDataAdapter;
	System::Data::DataSet^ dataSet;
public:
	CAD(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
};