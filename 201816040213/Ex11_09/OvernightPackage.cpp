#include <iostream>
#include <string>
using namespace std;

#include "OvernightPackage.h" // include definition of class OvernightPackage

// OvernightPackage constructor initializes data members
OvernightPackage::OvernightPackage( string Sender, string Recipient, string Address, string City, string State, string Postcode, double Weight, double Packagefee, double Extrafee)
    :Package( Sender, Recipient, Address, City, State, Postcode, Weight, Packagefee )
{
    setExtraFee( Extrafee );
} // end OvernightPackage constructor

// set the overnightPackage extra fee
void OvernightPackage::setExtraFee( double fee )
{
    if( fee > 0 )
        extraFee = fee;
    else
        throw invalid_argument( "Extra fee must be greater than zero! ");
} // end function setExtraFee

// return the overnightPackage extra fee
double OvernightPackage::getExtraFee( )
{
    return extraFee;
} // end function getExtraFee

//calculate the cost of the package
double OvernightPackage::calculateCost( )
{
    return ( getPackageFee() + extraFee ) * getWeight();
} // end function calculateCost

//display the information of overnightPackage
void OvernightPackage::Print( )
{
    Package::Print();
    cout << "Extra fee : " << extraFee << "\n";
} // end function Print
