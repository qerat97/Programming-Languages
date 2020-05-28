#include <bits/stdc++.h>
using namespace std;
/**
	Statics help in storing the comman data with respect to different instance of the class
	So for example if there is class called Family, Suppose all the siblings have the same surname 
	that can be taken as static member in the Family class as show below
*/

class FamilyMembers{
	public: 
		string firstname;
		static string surname;
};


/*
Initialize static member of class FamilyMembers
*/
string FamilyMembers::surname = "Abenoja"; /*Defined once and used twice*/

int main(){

	/**
	Suppose you intialize a Famaily and update yourname and a sibling name
	*/
	
	string surname = FamilyMembers::surname;

	FamilyMembers family_member_1;
	family_member_1.firstname = "Ren"; /*Instance variable is with respect to that class*/
	//family_member_1.surname = "Abenoja"; /*No need to initialize the static variable again*/ 
	
	FamilyMembers family_member_2;
	family_member_2.firstname = "Sen"; /*Instance variable is with respect to that class*/
	//family_member_2.surname = "Abenoja"; /*No need to initialize the static variable again*/ 


	cout << "Member : 1 == First Name: " << family_member_1.firstname << " Surname: " << surname << "\n";
	cout << "Member : 2 == First Name: " << family_member_2.firstname << " Surname: " << surname; 
}