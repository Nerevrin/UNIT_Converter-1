#include <stdio.h>

                // ����������� ������� ���������  ��, ��, ����, �� //

/////////////////////////////����������/////////////////////////////////////////////
double millimetresTOcentimetres(double LENGHT) // ������� �� ����������� � ����������
{
   LENGHT = LENGHT / 10 ;
    return LENGHT ;
}

double millimetresTOmetres(double LENGHT) // ������� �� ����������� � �����
{
    LENGHT = LENGHT / 1000 ;
     return LENGHT ;
}

double millimetresTOkilometres(double LENGHT) // ������� �� ����������� � ���������
{
    LENGHT = LENGHT / 1000000 ;
     return LENGHT ;
}
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////����������//////////////////////////////////////////
double centimetresTOmillimetres(double LENGHT) // ������� �� ����������� � ����������
{
    LENGHT = LENGHT * 10  ;
     return LENGHT ;
}

double centimetresTOmetres(double LENGHT) // ������� �� ����������� � �����
{
    LENGHT = LENGHT / 100 ;
     return LENGHT ;
}

double centimetresTOkilometres(double LENGHT) // ������� �� ����������� � ���������
{
    LENGHT = LENGHT / 100000 ;
     return LENGHT ;
}
/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////�����////////////////////////////////////////////
double metresTOmillimetres(double LENGHT) // ������� �� ������ � ����������
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}

double metresTOcentimetres(double LENGHT) // ������� �� ������ � ����������
{
    LENGHT = LENGHT * 100 ;
     return LENGHT ;
}

double metresTOkilometres(double LENGHT) // ������� �� ������ � ���������
{
    LENGHT = LENGHT / 1000 ;
     return LENGHT ;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////���������//////////////////////////////////////////
double kilometresTOmillimetres(double LENGHT) // ������� �� ���������� � ����������
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}

double kilometresTOcentimetres(double LENGHT) // ������� �� ���������� � ����������
{
    LENGHT = LENGHT * 100000 ;
     return LENGHT ;
}

double kilometresTOmetres(double LENGHT) // ������� �� ���������� � �����
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}
///////////////////////////////////////////////////////////////////////////////////


                           //���������� ������� ��� ���, ���, ����(�������), ����(������), ���� //
