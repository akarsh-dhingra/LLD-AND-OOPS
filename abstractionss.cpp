#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

class FoodOrder{
    private:
    void checkRestaurantAvailability(string foodItem){
        printf("Checking Restaurent Availabilty for ",foodItem);
    }
    void calculateDeliveryCharge(string userLocation){
        printf("Calculating delivery charge for " , userLocation);
    }
    void applyDiscount(){
        printf("Applying Available discount");
    }
    void assignDeliveryPartner(){
        printf("Assigning delivery partner");
    }
    void sendConfirmation(){
        printf("Sending order confirmation");
    }
    public:
    void placeOrder(string foodItem,string userLocation){
        checkRestaurantAvailability(foodItem);
        calculateDeliveryCharge(userLocation);
        applyDiscount();
        assignDeliveryPartner();
        sendConfirmation();
    }  
};


int main() {

    
    return 0;
}