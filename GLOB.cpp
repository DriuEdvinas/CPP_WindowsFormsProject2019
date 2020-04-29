#pragma once
#include "GLOB.h"

int glob::lineF;
int glob::lineC;

int glob::Check;
int glob::allTicketsAmount;
int glob::allCampingsAmount;
int glob::shoppingCart_num;
int glob::indexArray[CMax];

int glob::concTicketAmount_1[CMax];
int glob::concTicketAmount_2[CMax];
int glob::concTicketAmount_3[CMax];
int glob::concTicketAmount_4[CMax];
int glob::concTicketAmount_5[CMax];

int glob::festTicketAmount_1[CMax];
int glob::festTicketAmount_2[CMax];
int glob::festTicketAmount_3[CMax];

double glob::totalPrice;
double glob::ticketPriceSumConc[CMax];
double glob::ticketSumConc[CMax];
double glob::ticketPriceSumFest[CMax];
double glob::ticketSumFest[CMax];

double glob::ConcPrice_1[CMax];
double glob::ConcPrice_2[CMax];
double glob::ConcPrice_3[CMax];
double glob::ConcPrice_4[CMax];
double glob::ConcPrice_5[CMax];

double glob::FestPrice_1[CMax];
double glob::FestPrice_2[CMax];
double glob::FestPrice_3[CMax];

PeopleClass glob::pers;
concert glob::conc;
festival glob::fest;



