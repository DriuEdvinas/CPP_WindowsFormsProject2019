#pragma once
#include <string>

const int CMax = 300;

struct concert_body
{
	std::string conc_ID,
		conc_name,
		conc_place,
		conc_artist,
		conc_date,
		conc_info;
	
	int	   conc_tickets;
	double conc_ticket_price_coef;
};

public class concert
{
public:
	int conc_number;
	concert_body Concerts[CMax];
	concert_body ConcertsExtra;
public:
	concert();
	std::string convert(System::String ^ text);

	void concert::ReadFromFile();
	void concert::PrintToFile();
	void concert::SortDate();

	void concert::NewConcert
	(std::string concID, std::string concName, std::string concPlace, std::string concArtist, std::string concInfo,
		std::string concDate, double concTicketPriceCoef, int concTickets);
};



struct festival_body
{
	std::string fest_ID,
		fest_name,
		fest_place,
		fest_artist,
		fest_date,
		fest_info;
	
	int		fest_tickets;
	double	fest_ticket_price_coef,
			fest_camping_price_coef;
};

public class festival
{
public:
	int fest_number;
	festival_body Festivals[CMax];
	festival_body FestivalsExtra;
public:
	festival();
	std::string convert(System::String ^ text);

	void festival::ReadFromFile();
	void festival::PrintToFile();
	void festival::SortDate();

	void festival::NewFestival
	(std::string festID, std::string festName, std::string festPlace, std::string festArtist, std::string festInfo,
		std::string festDate, double festTicketPriceCoef, double festCampingPriceCof, int festTickets);
};


struct person_body
{
	std::string pers_ID,
		pers_name,
		pers_secondname,
		pers_birthdate,
		pers_email,
		pers_CardName,
		pers_CardSecondName,
		pers_CardCountry,
		pers_CardDate,
		pers_CardNumber;
	double  pers_TicketPrice_sum;			
	int pers_ConcTicket_num,
		pers_ConcTicketID[CMax],
		pers_FestTicket_num,
		pers_FestTicketID[CMax];	
	int pers_CardCSC;
};

public class person
{
public:
	person_body Person;

public:
	std::string convert(System::String ^ text);
		
	void InsertPersonData
	(int LineP, std::string persID,std::string persName, std::string persSecondname, std::string persBirthdate,
	std::string persEmail);
	void InsertPersonCardData
	(int LineP,std::string persCardName, std::string persCardSecondName, std::string persCardCountry, std::string persCardDate, std::string persCardNumber, int persCardCSC);

	void InsertPersonName(int LineP,std::string persName);
	void InsertPersonConcTicketnum(int LineP,int persConcTicketnum);
	void InsertPersonConcTicketID(int LineP,int persConcTicketNum, int index);
	void InsertPersonFestTicketnum(int LineP,int persFestTicketnum);
	void InsertPersonFestTicketID(int LineP,int persFestTicketNum, int index);

	std::string GetPersonID()		  { return Person.pers_ID; }
	std::string GetPersonName()		  { return Person.pers_name; }
	std::string GetPersonSecondName() { return Person.pers_secondname; }
	std::string GetPersonBirthdate()  { return Person.pers_birthdate; }
	std::string GetPersonEmail()      { return Person.pers_email; }
	double GetPersonTicketPriceSum()  { return Person.pers_TicketPrice_sum; }
	int GetPersonConcTicketNum()      { return Person.pers_ConcTicket_num; }
	int GetPersonFestTicketNum()      { return Person.pers_FestTicket_num; }
	int GetPersonConcTicketID(int index) { return Person.pers_ConcTicketID[index]; }
	int GetPersonFestTicketID(int index) { return Person.pers_FestTicketID[index]; }
	
	std::string GetCardName()		  { return Person.pers_CardName;  }
	std::string GetCardSecondName()   { return Person.pers_CardSecondName; }
	std::string GetCardCountry()      { return Person.pers_CardCountry; }
	std::string GetCardDate()         { return Person.pers_CardDate; }
	std::string GetCardNumber()       { return Person.pers_CardNumber; }
	int GetCardCSC()				  { return Person.pers_CardCSC; }

	void RemovePersonConcTicketID(int index)
	{
		Person.pers_ConcTicketID[index] = Person.pers_ConcTicketID[index + 1];	
	}
	void RemovePersonFestTicketID(int index)
	{
		Person.pers_FestTicketID[index] = Person.pers_FestTicketID[index + 1];
	}
};

struct admin_body
{
	std::string admin_ID,
		admin_username,
		admin_password;
};

public class admin
{
public:
	admin_body Admin;
public:
	void InsertAdminData(std::string admin_ID,std::string admin_username,std::string admin_password);
	std::string GetAdminID() { return Admin.admin_ID; }
	std::string GetAdminUsername() { return Admin.admin_username; }
	std::string GetAdminPassword() { return Admin.admin_password; }
};


public class PeopleClass
{
public:
	int pers_number;
	int admin_number;
	person People[CMax];
	person PeopleExtra;
	admin Admins[CMax];
	PeopleClass();
	void PeopleClass::ReadPersonDataFromFile();
	void PeopleClass::ReadAdminDataFromFile();
	void PeopleClass::PrintPersonDataToFile();
	void PeopleClass::SortPersonName();
	void PeopleClass::PrintFestivalTicket(int index);
	void PeopleClass::PrintConcertTicket(int index);
	void PeopleClass::PrintCFReport();
};
