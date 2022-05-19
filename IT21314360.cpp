class RegisteredUser : public user {
protected:
	int regID;

public:
	RegisteredUser();
	void setDetails(int uID, string uAdress, string uEmail, int uNo);
	int getID();
	string getName();
	int getNumber();
	void displayDetails();
	void searchAppointment();
	void updateDetails();
};

class apartment {
private:
	int aparatmentID;;
	string apartmentLocation;
	double apartmentPrice;
	string aparmentFacilities;
	double apartmentUtilityPrice;
	string apartmentStatus;

public:
	void editmentDetails(int AID, string Alocation, double Aprice, string Afacility, double AUtilityPrice, string Astatus);
	void displayApartmentDetails();
	void updateApartmentDetails();

};