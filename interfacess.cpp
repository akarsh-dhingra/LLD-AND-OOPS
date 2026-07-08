#include <iostream>
using namespace std;

// Interface (Abstract Class)
class NotificationService {
public:
    virtual void sendMessage(string user, string message) = 0;
    virtual ~NotificationService() = default;
};

// Concrete Implementations
class EmailNotification : public NotificationService {
public:
    void sendMessage(string user, string message) override {
        cout << "Sending Email to " << user << ": " << message << endl;
    }
};

class SMSNotification : public NotificationService {
public:
    void sendMessage(string user, string message) override {
        cout << "Sending SMS to " << user << ": " << message << endl;
    }
};

class WhatsAppNotification : public NotificationService {
public:
    void sendMessage(string user, string message) override {
        cout << "Sending WhatsApp message to " << user << ": " << message << endl;
    }
};

// Client Class
class AlertManager {
private:
    NotificationService* notificationService;

public:
    AlertManager(NotificationService* service)
        : notificationService(service) {}

    void sendAlert(string user) {
        notificationService->sendMessage(user, "Your order has been shipped.");
    }
};

int main() {
    EmailNotification email;
    SMSNotification sms;
    WhatsAppNotification whatsapp;

    AlertManager emailAlert(&email);
    emailAlert.sendAlert("Aakarsh");

    AlertManager smsAlert(&sms);
    smsAlert.sendAlert("Rahul");

    AlertManager whatsappAlert(&whatsapp);
    whatsappAlert.sendAlert("Shivam");

    return 0;
}