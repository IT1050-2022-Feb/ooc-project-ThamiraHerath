//created by IT21319938
class Agreement {
private:
	int userID;
	string userName;
	int agreementID;
	string agreementType;

public:
	void displayDetail(int UID, string Uname, int AId, string AType);
	void cancelAgreement();
	void updateAgreement();
};


class Report {
private:
	int reportNo;
	string reportType;
	int userID;
	string userName;

public:
	void setReportID(int RID);
	void setReportType(string Rtype);
	void setUserID(int UID);
	void setUserName(string Uname);
	void bookingDetailsReport();
	void paymentDetailsReport();

};