# Url-browser-tracking-cpp
The URL Tracking System is a simple application that manages and tracks user navigation through different URLs using two stacks. The system allows users to navigate backward and forward through their visited URLs efficiently.

Components
Current URL: A variable that stores the URL currently being viewed.
Backward Stack: A stack that keeps track of URLs visited before the current one, allowing navigation backward.
Forward Stack: A stack that stores URLs visited after moving backward, enabling navigation forward.
Features
Visit URL: Adds a new URL to the current navigation state.
Go Back: Moves to the previous URL if available, and stores the current URL in the forward stack.
Go Forward: Moves to the next URL if available, and stores the current URL in the backward stack.
How It Works
Visiting a New URL:

When a new URL is visited, it is added to the backward stack, and the forward stack is cleared. The new URL becomes the current URL.
Going Back:

The current URL is pushed onto the forward stack.
The URL at the top of the backward stack is popped and set as the current URL.
