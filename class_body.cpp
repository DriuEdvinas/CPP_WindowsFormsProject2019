#include <iomanip>
#include "class_body.h"
#include "GLOB.h"
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm> 

concert::concert()
{
	std::ifstream GetDataConc("concerts.txt");
	conc_number = 0;
		
	while (!GetDataConc.eof())
	{
		getline(GetDataConc, Concerts[conc_number].conc_ID, '#');
		getline(GetDataConc, Concerts[conc_number].conc_name, '#');
		getline(GetDataConc, Concerts[conc_number].conc_place, '#');
		getline(GetDataConc, Concerts[conc_number].conc_date, '*');
		replace(Concerts[conc_number].conc_date.begin(), Concerts[conc_number].conc_date.end(), '/', ' ');
		GetDataConc >> Concerts[conc_number].conc_ticket_price_coef;
		GetDataConc >> Concerts[conc_number].conc_tickets;
		getline(GetDataConc, Concerts[conc_number].conc_artist, '_');
		getline(GetDataConc, Concerts[conc_number].conc_info, '_');
		GetDataConc.ignore(80, '\n');
		conc_number++;
	}
	conc_number--;
	GetDataConc.close();
	SortDate();
}
std::string concert::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
void concert::ReadFromFile()
{
	std::ifstream GetDataConc("concerts.txt");
	if (GetDataConc.peek() != std::ifstream::traits_type::eof())
	{
		conc_number = 0;
		while (!GetDataConc.eof())
		{
			getline(GetDataConc, Concerts[conc_number].conc_ID, '#');
			getline(GetDataConc, Concerts[conc_number].conc_name, '#');
			getline(GetDataConc, Concerts[conc_number].conc_place, '#');
			getline(GetDataConc, Concerts[conc_number].conc_date, '*');
			replace(Concerts[conc_number].conc_date.begin(), Concerts[conc_number].conc_date.end(), '/', ' ');
			GetDataConc >> Concerts[conc_number].conc_ticket_price_coef;
			GetDataConc >> Concerts[conc_number].conc_tickets;
			getline(GetDataConc, Concerts[conc_number].conc_artist, '_');
			getline(GetDataConc, Concerts[conc_number].conc_info, '_');
			GetDataConc.ignore(80, '\n');
			conc_number++;
		}
		conc_number--;
		GetDataConc.close();
		SortDate();
	}
}
void concert::PrintToFile()
{
	std::ofstream PrintDataConc("concerts.txt");
	for (int i = 0; i < conc_number; i++)
	{
		replace(Concerts[i].conc_date.begin(), Concerts[i].conc_date.end(), ' ', '/');
		PrintDataConc << Concerts[i].conc_ID << '#' << Concerts[i].conc_name << '#' << Concerts[i].conc_place << '#' <<
			Concerts[i].conc_date << '*' << Concerts[i].conc_ticket_price_coef << ' ' << Concerts[i].conc_tickets << 
			Concerts[i].conc_artist << '_' << Concerts[i].conc_info << '_' << '\n';
	}
	PrintDataConc.close();
}
void concert::SortDate()
{
	for (int i = 0; i < conc_number; i++)
		for (int j = i + 1; j < conc_number; j++)
		{
			if
				((Concerts[j].conc_date[8] < Concerts[i].conc_date[8])
			  ||
				((Concerts[j].conc_date[8] == Concerts[i].conc_date[8])
			  && (Concerts[j].conc_date[9] < Concerts[i].conc_date[9])))
			{
				ConcertsExtra = Concerts[i];
				Concerts[i] = Concerts[j];
				Concerts[j] = ConcertsExtra;
			}
			if
				((Concerts[j].conc_date[5] < Concerts[i].conc_date[5])
			  ||
		  		((Concerts[j].conc_date[5] == Concerts[i].conc_date[5])
		  	  && (Concerts[j].conc_date[6] < Concerts[i].conc_date[6])))
			{
				ConcertsExtra = Concerts[i];
				Concerts[i] = Concerts[j];
				Concerts[j] = ConcertsExtra;
			}
			if
				((Concerts[j].conc_date[2] < Concerts[i].conc_date[2])
			  ||
				((Concerts[j].conc_date[2] == Concerts[i].conc_date[2])
			  && (Concerts[j].conc_date[3] < Concerts[i].conc_date[3])))
			{
				ConcertsExtra = Concerts[i];
				Concerts[i] = Concerts[j];
				Concerts[j] = ConcertsExtra;
			}
		}
}

void concert::NewConcert
(std::string concID, std::string concName, std::string concPlace, std::string concArtist, std::string concInfo,
	std::string concDate, double concTicketPriceCoef, int concTickets)
{
	Concerts[conc_number].conc_ID = concID;
	Concerts[conc_number].conc_name = concName;
	Concerts[conc_number].conc_place = concPlace;
	Concerts[conc_number].conc_artist = concArtist;
	Concerts[conc_number].conc_date = concDate;
	Concerts[conc_number].conc_info = concInfo;
	Concerts[conc_number].conc_ticket_price_coef = concTicketPriceCoef;
	Concerts[conc_number].conc_tickets = concTickets;
	conc_number++;
}

festival::festival()
{
	std::ifstream GetDataFest("festivals.txt");
	fest_number = 0;
	
	while (!GetDataFest.eof())
	{
		getline(GetDataFest, Festivals[fest_number].fest_ID, '#');
		getline(GetDataFest, Festivals[fest_number].fest_name, '#');
		getline(GetDataFest, Festivals[fest_number].fest_place, '#');
		getline(GetDataFest, Festivals[fest_number].fest_date, '*');
		replace(Festivals[fest_number].fest_date.begin(), Festivals[fest_number].fest_date.end(), '/', ' ');
		GetDataFest >> Festivals[fest_number].fest_camping_price_coef;
		GetDataFest >> Festivals[fest_number].fest_ticket_price_coef;
		GetDataFest >> Festivals[fest_number].fest_tickets;	
		getline(GetDataFest, Festivals[fest_number].fest_artist, '_');		
		getline(GetDataFest, Festivals[fest_number].fest_info, '_');
		GetDataFest.ignore(80, '\n');
		fest_number++;
	}
	fest_number--;
	GetDataFest.close();
	SortDate();
}
std::string festival::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
void festival::ReadFromFile()
{
	std::ifstream GetDataFest("festivals.txt");
	if (GetDataFest.peek() != std::ifstream::traits_type::eof())
	{
		fest_number = 0;
		while (!GetDataFest.eof())
		{
			getline(GetDataFest, Festivals[fest_number].fest_ID, '#');
			getline(GetDataFest, Festivals[fest_number].fest_name, '#');
			getline(GetDataFest, Festivals[fest_number].fest_place, '#');
			getline(GetDataFest, Festivals[fest_number].fest_date, '*');
			replace(Festivals[fest_number].fest_date.begin(), Festivals[fest_number].fest_date.end(), '/', ' ');
			GetDataFest >> Festivals[fest_number].fest_camping_price_coef;
			GetDataFest >> Festivals[fest_number].fest_ticket_price_coef;
			GetDataFest >> Festivals[fest_number].fest_tickets;
			getline(GetDataFest, Festivals[fest_number].fest_artist, '_');
			getline(GetDataFest, Festivals[fest_number].fest_info, '_');
			GetDataFest.ignore(80, '\n');
			fest_number++;
		}
		fest_number--;
		GetDataFest.close();
		SortDate();
	}
}
void festival::PrintToFile()
{
	std::ofstream PrintDataFest("festivals.txt");
	for (int i = 0; i < fest_number; i++)
	{
		replace(Festivals[i].fest_date.begin(), Festivals[i].fest_date.end(), ' ', '/');
		PrintDataFest << Festivals[i].fest_ID << '#' << Festivals[i].fest_name << '#' << Festivals[i].fest_place << '#' <<
		Festivals[i].fest_date << '*' << Festivals[i].fest_ticket_price_coef << ' ' << Festivals[i].fest_camping_price_coef << ' ' <<
		Festivals[i].fest_tickets  << Festivals[i].fest_artist << '_' << Festivals[i].fest_info << '_' << '\n';
	}
	PrintDataFest.close();
}
void festival::SortDate()
{
	for (int i = 0; i < fest_number; i++)
		for (int j = i + 1; j < fest_number; j++)
		{
			if
				((Festivals[j].fest_date[8] < Festivals[i].fest_date[8])
					||
					((Festivals[j].fest_date[8] == Festivals[i].fest_date[8])
						&& (Festivals[j].fest_date[9] < Festivals[i].fest_date[9])))
			{
				FestivalsExtra = Festivals[i];
				Festivals[i] = Festivals[j];
				Festivals[j] = FestivalsExtra;
			}
			if
				((Festivals[j].fest_date[5] < Festivals[i].fest_date[5])
					||
					((Festivals[j].fest_date[5] == Festivals[i].fest_date[5])
						&& (Festivals[j].fest_date[6] < Festivals[i].fest_date[6])))
			{
				FestivalsExtra = Festivals[i];
				Festivals[i] = Festivals[j];
				Festivals[j] = FestivalsExtra;
			}
			if
				((Festivals[j].fest_date[2] < Festivals[i].fest_date[2])
					||
					((Festivals[j].fest_date[2] == Festivals[i].fest_date[2])
						&& (Festivals[j].fest_date[3] < Festivals[i].fest_date[3])))
			{
				FestivalsExtra = Festivals[i];
				Festivals[i] = Festivals[j];
				Festivals[j] = FestivalsExtra;
			}
		}
}

void festival::NewFestival
(std::string festID, std::string festName, std::string festPlace, std::string festArtist, std::string festInfo,
	std::string festDate, double festTicketPriceCoef, double festCampingPriceCoef, int festTickets)
{
	Festivals[fest_number].fest_ID = festID;
	Festivals[fest_number].fest_name = festName;
	Festivals[fest_number].fest_place = festPlace;
	Festivals[fest_number].fest_artist = festArtist;	
	Festivals[fest_number].fest_date = festDate;
	Festivals[fest_number].fest_info = festInfo;
	Festivals[fest_number].fest_ticket_price_coef = festTicketPriceCoef;
	Festivals[fest_number].fest_camping_price_coef = festCampingPriceCoef;
	Festivals[fest_number].fest_tickets = festTickets;
	fest_number++;
}


PeopleClass::PeopleClass()
{
	ReadAdminDataFromFile();
	ReadPersonDataFromFile();
}
std::string person::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
void PeopleClass::ReadPersonDataFromFile()
{
	std::ifstream GetDataPers("people.txt");
	if (GetDataPers.peek() != std::ifstream::traits_type::eof())
	{
		GetDataPers >> pers_number;
		std::string persID, persName, persSecondName, persBirthdate, persEmail,
			persCardName, persCardSecondName, persCardCountry, persCardDate, persCardNumber;
		int persConcTicketnum, persConcTicketID[CMax], persFestTicketnum, persFestTicketID[CMax], persCardCSC;
		for (int num = 0; num < pers_number; num++)
		{
			getline(GetDataPers, persID, '#');
			getline(GetDataPers, persName, '*');
			getline(GetDataPers, persSecondName, '*');
			getline(GetDataPers, persBirthdate, '*');
			getline(GetDataPers, persEmail, '*');
			getline(GetDataPers, persCardName, '$');
			getline(GetDataPers, persCardSecondName, '$');
			getline(GetDataPers, persCardCountry, '$');
			getline(GetDataPers, persCardDate, '$');
			getline(GetDataPers, persCardNumber, '$');
			GetDataPers >> persCardCSC, ' ';
			GetDataPers >> persConcTicketnum, ' ';
			People[num].InsertPersonConcTicketnum(num, persConcTicketnum);
			for (int i = 0; i < persConcTicketnum; i++)
			{
				GetDataPers >> persConcTicketID[i];
				People[num].InsertPersonConcTicketID(num, i, persConcTicketID[i]);
			}
			GetDataPers >> persFestTicketnum;
			People[num].InsertPersonFestTicketnum(num, persFestTicketnum);
			for (int i = 0; i < persFestTicketnum; i++)
			{
				GetDataPers >> persFestTicketID[i];
				People[num].InsertPersonFestTicketID(num, i, persFestTicketID[i]);
			}
			People[num].InsertPersonData(num, persID, persName, persSecondName, persBirthdate, persEmail);
			People[num].InsertPersonCardData(num, persCardName, persCardSecondName, persCardCountry, persCardDate, persCardNumber, persCardCSC);	
			GetDataPers.ignore(80, '\n');
		}
		GetDataPers.close();
	}
	else
		pers_number = 0;
}
void PeopleClass::PrintPersonDataToFile()
{
	std::ofstream PrintDataPers("people.txt");
	PrintDataPers.clear();
	PrintDataPers << pers_number;
	for (int i = 0; i < pers_number; i++)
		{
			int PersonConcTicketNum = People[i].GetPersonConcTicketNum();
			int PersonFestTicketNum = People[i].GetPersonFestTicketNum();

			PrintDataPers << People[i].GetPersonID() << '#' <<
				People[i].GetPersonName() << '*' << People[i].GetPersonSecondName() << '*' <<
				People[i].GetPersonBirthdate() << '*' << People[i].GetPersonEmail() << '*' << People[i].GetCardName() << '$' <<
				People[i].GetCardSecondName() << '$' << People[i].GetCardCountry() << '$' << People[i].GetCardDate() << '$' << People[i].GetCardNumber() << '$' << People[i].GetCardCSC() << ' ';
				PrintDataPers << PersonConcTicketNum << " ";
			for (int x = 0; x < PersonConcTicketNum; x++) { int TicketID = People[i].GetPersonConcTicketID(x); PrintDataPers << TicketID << " "; }

			PrintDataPers << PersonFestTicketNum << " ";
			for (int x = 0; x < PersonFestTicketNum; x++) { int TicketID = People[i].GetPersonFestTicketID(x); PrintDataPers << TicketID << " "; }
			PrintDataPers << '\n';
		}
		PrintDataPers.close();
	
}
void PeopleClass::ReadAdminDataFromFile()
{
	std::ifstream GetDataAdmin("admins.txt");
	admin_number = 0;
	std::string adminID, adminUsername, adminPassword;

	while (!GetDataAdmin.eof())
	{
		getline(GetDataAdmin, adminID, '#');
		getline(GetDataAdmin, adminUsername, '$');
		getline(GetDataAdmin, adminPassword, '$');
		Admins[admin_number].InsertAdminData(adminID, adminUsername, adminPassword);
		GetDataAdmin.ignore(80, '\n');
		admin_number++;
	}
	admin_number--;

	GetDataAdmin.close();
}
void PeopleClass::SortPersonName()
{
	for (int i = 0; i < pers_number; i++)
	{
		for (int j = i + 1; j < pers_number; j++)
			if (People[j].GetPersonName() < People[i].GetPersonName())
			{
				PeopleExtra = People[i];
				People[i] = People[j];
				People[j] = PeopleExtra;
			}
	}
	
}
void PeopleClass::PrintFestivalTicket(int index)
{
	std::ofstream PrintTicketFest("FestivalTicket.txt");
		int FestTicketNum = People[index].GetPersonFestTicketNum();
		for (int i = 0; i < FestTicketNum; i++)
		{
			if (FestTicketNum != 0)
			{
				int TicketID = People[index].GetPersonFestTicketID(i);
				PrintTicketFest << "_________________________________________________________" << std::endl;
				PrintTicketFest << "=========================================================" << std::endl;
				PrintTicketFest << "                     FESTIVAL TICKET                    |" << std::endl;
				PrintTicketFest << "________________________________________________________|" << std::endl;
				PrintTicketFest << "Name       |" << glob::fest.Festivals[TicketID].fest_name << std::endl;
				PrintTicketFest << "           |" << std::endl;
				PrintTicketFest << "Date       |" << glob::fest.Festivals[TicketID].fest_date << std::endl;
				PrintTicketFest << "           |" << std::endl;
				PrintTicketFest << "City       |" << glob::fest.Festivals[TicketID].fest_place << std::endl;
				PrintTicketFest << "           |" << std::endl;
				PrintTicketFest << "Tickets    |" << glob::festTicketAmount_1[TicketID] << std::endl;
				PrintTicketFest << "Campings 1 |" << glob::festTicketAmount_2[TicketID] << std::endl;
				PrintTicketFest << "Campings 2 |" << glob::festTicketAmount_3[TicketID] << std::endl;
				PrintTicketFest << "==========================================================" << std::endl;
				PrintTicketFest << "                Thank you for buying !  Official CF      |" << std::endl;
				PrintTicketFest << "________________________________________________________ |" << std::endl << std::endl;
			}
		}
}
void PeopleClass::PrintConcertTicket(int index)
{
	std::ofstream PrintTicketConc("ConcertTicket.txt");
	
		int ConcTicketNum = People[index].GetPersonConcTicketNum();
		for (int i = 0; i < ConcTicketNum; i++)
		{
			if (ConcTicketNum != 0)
			{
				int TicketID = People[index].GetPersonConcTicketID(i);
				int ticketsSum = 0;
				ticketsSum += glob::concTicketAmount_1[TicketID] + glob::concTicketAmount_2[TicketID] + glob::concTicketAmount_3[TicketID]+ glob::concTicketAmount_4[TicketID] + glob::concTicketAmount_5[TicketID];
				PrintTicketConc << "_________________________________________________________________" << std::endl;
				PrintTicketConc << "=================================================================" << std::endl;
				PrintTicketConc << "                          CONCERT TICKET                        |" << std::endl;
				PrintTicketConc << "________________________________________________________________|" << std::endl;
				PrintTicketConc << "Name    |" << glob::conc.Concerts[TicketID].conc_name << std::endl;
				PrintTicketConc << "        |" << std::endl;
				PrintTicketConc << "Date    |" << glob::conc.Concerts[TicketID].conc_date << std::endl;
				PrintTicketConc << "        |" << std::endl;
				PrintTicketConc << "City    |" << glob::conc.Concerts[TicketID].conc_place << std::endl;
				PrintTicketConc << "        |" << std::endl;
				PrintTicketConc << "Tickets |" << ticketsSum << std::endl;
				PrintTicketConc << "________________________________________________________________|" << std::endl;
				PrintTicketConc << "| Blue zone | Yellow zone | Brown zone | Red zone | Orange zone |" << std::endl;
				PrintTicketConc << "| " << std::setw(5) <<glob::concTicketAmount_1[TicketID] << std::setw(14) << glob::concTicketAmount_2[TicketID] << std::setw(12) << glob::concTicketAmount_3[TicketID] <<
					std::setw(12) << glob::concTicketAmount_4[TicketID] << std::setw(14) << glob::concTicketAmount_5[TicketID] << std::setw(6)<<  " |" << std::endl;
				PrintTicketConc << "=================================================================" << std::endl;
				PrintTicketConc << "                 Thank you for buying !  Official CF            |" << std::endl;
				PrintTicketConc << "________________________________________________________________|" << std::endl << std::endl;
			}
		}
}

void PeopleClass::PrintCFReport()
{
	
	int PersonConcTicketsNum = 0, PersonFestTicketsNum = 0,
		soldTicketsTotalSum = 0,
		soldFestTicketsTotalSum = 0, soldFestCampingTotalSum = 0,
		soldConcTicketsTotalSum = 0,
		blueZoneTickets = 0, yellowzoneTickets = 0, brownZoneTickets = 0, redZoneTickets = 0, orangeZoneTickets = 0;
	
	std::ifstream GetDataPers("CFReport.txt");
	GetDataPers >> soldFestTicketsTotalSum >> soldFestCampingTotalSum >> soldConcTicketsTotalSum >>blueZoneTickets >> yellowzoneTickets >> brownZoneTickets >> redZoneTickets >> orangeZoneTickets;
	for (int i = 0; i < pers_number; i++)
	{
		PersonConcTicketsNum = People[i].GetPersonConcTicketNum();
		PersonFestTicketsNum = People[i].GetPersonFestTicketNum();
		
		soldConcTicketsTotalSum += PersonConcTicketsNum;
		soldFestTicketsTotalSum += PersonFestTicketsNum;

		for (int x = 0; x < PersonConcTicketsNum; x++)
		{ 
			int TicketID = People[i].GetPersonConcTicketID(x);
			blueZoneTickets += glob::concTicketAmount_1[TicketID];	yellowzoneTickets += glob::concTicketAmount_2[TicketID];
			brownZoneTickets += glob::concTicketAmount_3[TicketID]; redZoneTickets += glob::concTicketAmount_4[TicketID];
			orangeZoneTickets += glob::concTicketAmount_5[TicketID];
		}
		for (int x = 0; x < PersonFestTicketsNum; x++) 
		{ 
			int TicketID = People[i].GetPersonFestTicketID(x);
			soldFestCampingTotalSum += glob::festTicketAmount_2[TicketID] + glob::festTicketAmount_3[TicketID];
		}	
		soldTicketsTotalSum = soldFestTicketsTotalSum + soldConcTicketsTotalSum;
	}
	std::ofstream PrintCFReport("CFReport.txt");
	PrintCFReport << soldFestTicketsTotalSum << " " << soldFestCampingTotalSum << " "<< soldConcTicketsTotalSum << " " << blueZoneTickets<< " " <<yellowzoneTickets << " " << brownZoneTickets << " " << redZoneTickets << " " << orangeZoneTickets << " " << std::endl;
	PrintCFReport << "_________________________________________________________________" << std::endl;
	PrintCFReport << "=================================================================" << std::endl;
	PrintCFReport << "                       CONCERTS AND FESTIVALS                   |" << std::endl;
	PrintCFReport << "                           TICKETS REPORT                       |" << std::endl;
	PrintCFReport << "________________________________________________________________|" << std::endl;
	PrintCFReport << "       Total sold tickets      |" << std::setw(5) << soldTicketsTotalSum << std::endl;
	PrintCFReport << "                               |" << std::endl;
	PrintCFReport << "  Total sold concerts tickets  |" << std::setw(5) << soldConcTicketsTotalSum << std::endl;
	PrintCFReport << "=================================================================|" << std::endl;
	PrintCFReport << "| Blue zone | Yellow zone | Brown zone | Red zone | Orange zone |" << std::endl;
	PrintCFReport << "| " << std::setw(5) << blueZoneTickets << std::setw(14) << yellowzoneTickets << std::setw(12) << brownZoneTickets <<
		std::setw(12) << redZoneTickets << std::setw(14) << orangeZoneTickets << std::setw(6) << " |" << std::endl;
	PrintCFReport << "=================================================================" << std::endl;
	PrintCFReport << "                               |" << std::endl;
	PrintCFReport << "  Total sold festivals tickets |" << std::setw(5) << soldFestTicketsTotalSum << std::endl;
	PrintCFReport << "                               |" << std::endl;
	PrintCFReport << "   Total sold camping tickets  |" << std::setw(5) << soldFestCampingTotalSum << std::endl;
	PrintCFReport << "=================================================================" << std::endl;
	PrintCFReport << "                            Official CF                         |" << std::endl;
	PrintCFReport << "________________________________________________________________|" << std::endl << std::endl;

}

void admin::InsertAdminData(std::string adminID, std::string adminUsername, std::string adminPassword)
{
	Admin.admin_ID = adminID;
	Admin.admin_username = adminUsername;
	Admin.admin_password = adminPassword;
}

void person::InsertPersonData(int LineP, std::string persID, std::string persName, std::string persSecondname, std::string persBirthdate, std::string persEmail)
{
	glob::pers.People[LineP].Person.pers_ID = persID;
	glob::pers.People[LineP].Person.pers_name = persName;
	glob::pers.People[LineP].Person.pers_secondname = persSecondname;
	glob::pers.People[LineP].Person.pers_birthdate = persBirthdate;
	glob::pers.People[LineP].Person.pers_email = persEmail;
}
void person::InsertPersonCardData(int LineP,std::string persCardName, std::string persCardSecondName, std::string persCardCountry, std::string persCardDate, std::string persCardNumber, int persCardCSC)
{
	glob::pers.People[LineP].Person.pers_CardName = persCardName;
	glob::pers.People[LineP].Person.pers_CardSecondName = persCardSecondName;
	glob::pers.People[LineP].Person.pers_CardCountry = persCardCountry;
	glob::pers.People[LineP].Person.pers_CardDate = persCardDate;
	glob::pers.People[LineP].Person.pers_CardNumber =persCardNumber;
	glob::pers.People[LineP].Person.pers_CardCSC = persCardCSC;
}
void person::InsertPersonName(int LineP,std::string persName)
{
	glob::pers.People[LineP].Person.pers_name = persName;
}
void person::InsertPersonConcTicketnum(int LineP, int persConcTicketnum)
{
	glob::pers.People[LineP].Person.pers_ConcTicket_num = persConcTicketnum;
}
void person::InsertPersonConcTicketID(int LineP, int persConcTicketNum, int index)
{
	glob::pers.People[LineP].Person.pers_ConcTicketID[persConcTicketNum] = index;
}
void person::InsertPersonFestTicketnum(int LineP, int persFestTicketnum)
{
	glob::pers.People[LineP].Person.pers_FestTicket_num = persFestTicketnum;
}
void person::InsertPersonFestTicketID(int LineP, int persFestTicketNum, int index)
{
	glob::pers.People[LineP].Person.pers_FestTicketID[persFestTicketNum] = index;
}



