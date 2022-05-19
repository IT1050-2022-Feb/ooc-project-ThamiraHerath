//created by IT21319488
class Payment {
private:
	int paymentID;
	int cardNumber;
	string paymentType;
	RegisteredUser *user;
	Agreement *agr[SIZE];
	Payemnetslip *pay[SIZE];

public:
	void storePayementDetails(int pID, int CNum, string pType);
	void validatePayementMethod();
	void CancelpayementDetails();
	void editpayementDetails();

};

class PaymentSlip {
private:
	int paymentID;
	string userName;
	float payment;

public:
	void displayPaymentDetails();
	float editPayment(float pay);
	void cancelPaymentSlip();

};
