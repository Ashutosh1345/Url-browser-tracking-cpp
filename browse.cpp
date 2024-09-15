#include <iostream>
#include <stack>
#include <string>
using namespace std;
class URLTracker {
private:
    stack<string> backward;
    stack<string> forward;
    string currentURL;

public:
    void visit(const std::string& url) {
        if (!currentURL.empty()) {
            backward.push(currentURL);
        }
        currentURL = url;
        while (!forward.empty()) {
            forward.pop();
        }
        cout << "Visited: " << currentURL << endl;
    }

    
    void goBack() {
        if (backward.empty()) {
            cout << "No more history to go back to." << endl;
            return;
        }
        forward.push(currentURL);
        currentURL = backward.top();
        backward.pop();
        cout << "Back to: " << currentURL << endl;
    }

    // Go forward in the history
    void goForward() {
        if (forward.empty()) {
            cout << "No forward history to go to." << endl;
            return;
        }
        backward.push(currentURL);
        currentURL = forward.top();
        forward.pop();
        cout << "Forward to: " << currentURL << endl;
    }

    // Display the current URL
    void displayCurrentURL() const {
        cout << "Current URL: " << currentURL << endl;
    }
};
//ashutosh dekate//
int main() {
    URLTracker tracker;
    
    tracker.visit("https://www.founderjar.com/wp-content/uploads/2024/02/4.-Bella-Vista-Best-Travel-Website-Design-Examples.jpeg");
    tracker.visit("https://www.founderjar.com/wp-content/uploads/2024/02/3.-Champlain-Tours-Best-Travel-Website-Design-Examples.jpeg");
    tracker.visit("https://thumbor.bigedition.com/traveler-in-argentine-patagonia/zd_e1xRL93H5c4nO47P-iM2rdsY=/78x0:1185x830/800x600/filters:format(webp):quality(80)/granite-web-prod/bf/b4/bfb437c9028a4fb6925c4b50ff103b92.jpeg");
    
    tracker.goBack();
    tracker.goBack();
    tracker.goForward();
    
    tracker.displayCurrentURL();
    
    return 0;
}