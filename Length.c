#include <stdio.h>

                // ����������� ������� ���������  ��, ��, ����, �� //

/////////////////////////////����������/////////////////////////////////////////////
double millimetresTOcentimetres(double LENGTH) // ������� �� ����������� � ����������
{
   LENGTH = LENGTH / 10;
    return LENGTH;
}

double millimetresTOmetres(double LENGTH) // ������� �� ����������� � �����
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}

double millimetresTOkilometres(double LENGTH) // ������� �� ����������� � ���������
{
    LENGTH = LENGTH / 1000000;
     return LENGTH;
}
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////����������//////////////////////////////////////////
double centimetresTOmillimetres(double LENGTH) // ������� �� ����������� � ����������
{
    LENGTH = LENGTH * 10;
     return LENGTH;
}

double centimetresTOmetres(double LENGTH) // ������� �� ����������� � �����
{
    LENGTH = LENGTH / 100;
     return LENGTH;
}

double centimetresTOkilometres(double LENGTH) // ������� �� ����������� � ���������
{
    LENGTH = LENGTH / 100000;
     return LENGTH;
}
/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////�����////////////////////////////////////////////
double metresTOmillimetres(double LENGTH) // ������� �� ������ � ����������
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double metresTOcentimetres(double LENGTH) // ������� �� ������ � ����������
{
    LENGTH = LENGTH * 100;
     return LENGTH;
}

double metresTOkilometres(double LENGTH) // ������� �� ������ � ���������
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////���������//////////////////////////////////////////
double kilometresTOmillimetres(double LENGTH) // ������� �� ���������� � ����������
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double kilometresTOcentimetres(double LENGTH) // ������� �� ���������� � ����������
{
    LENGTH = LENGTH * 100000;
     return LENGTH;
}

double kilometresTOmetres(double LENGTH) // ������� �� ���������� � �����
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}
///////////////////////////////////////////////////////////////////////////////////


                           //���������� ������� ��� ���, ���, ����(�������), ����(������), ���� //
