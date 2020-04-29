#pragma once
#include "class_body.h"

namespace glob {
	 extern int lineF;
	 extern int lineC;
	 extern int Check;
	 extern int allTicketsAmount;
	 extern int allCampingsAmount;
	 extern int shoppingCart_num;
	 extern int indexArray[CMax];
	
	 extern int concTicketAmount_1[CMax];
	 extern int concTicketAmount_2[CMax];
	 extern int concTicketAmount_3[CMax];
	 extern int concTicketAmount_4[CMax];
	 extern int concTicketAmount_5[CMax];
	
	 extern int festTicketAmount_1[CMax];
	 extern int festTicketAmount_2[CMax];
	 extern int festTicketAmount_3[CMax];

	 extern double totalPrice;
	 extern double ticketPriceSumConc[CMax];
	 extern double ticketSumConc[CMax];
	 extern double ticketPriceSumFest[CMax];
	 extern double ticketSumFest[CMax];

	 extern double ConcPrice_1[CMax];
	 extern double ConcPrice_2[CMax];
	 extern double ConcPrice_3[CMax];
	 extern double ConcPrice_4[CMax];
	 extern double ConcPrice_5[CMax];

	 extern double FestPrice_1[CMax];
	 extern double FestPrice_2[CMax];
	 extern double FestPrice_3[CMax];

	 extern PeopleClass pers;
	 extern concert conc;
	 extern festival fest;
}