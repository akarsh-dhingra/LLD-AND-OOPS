1. Suppose you're building an E-Commerce Application.

Whenever an order is placed, you want to notify the customer.

Today you support

Email
SMS
WhatsApp

Tomorrow your company says

"We also want Push Notifications."

Next month

"Add Slack notifications."

Next year

"Integrate Microsoft Teams."

If you write code like this:

class AlertManager {
public:
    void sendAlert(string type, string user, string msg) {

        if(type == "email")
            cout << "Sending Email";

        else if(type == "sms")
            cout << "Sending SMS";

        else if(type == "whatsapp")
            cout << "Sending WhatsApp";
    }
};

Every time a new notification method comes, you modify this class.

This is bad design because the class keeps growing.