Here's a detailed README file for # 🗨️ Chatbot in C
---
[In Python](https://github.com/mdriyadkhan585/Chatbot-Python)

[In GUI](https://github.com/mdriyadkhan585/Chatbot-GUI)

![Logo](logo.svg)

---
Welcome to the **Chatbot** project! This simple command-line chatbot is written in C and can engage in basic conversation with users. It's designed to demonstrate how a chatbot can be created using basic C programming principles.

## 📋 Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Customization](#customization)


## 💡 Introduction

This project demonstrates a basic chatbot implemented in C. It can respond to predefined user inputs, offering a simple yet interactive experience in the terminal. Although basic, it’s a great starting point for anyone interested in learning about chatbot logic and C programming.

## ✨ Features

- **Simple Conversations**: Engage in basic dialogues with the bot.
- **Predefined Responses**: The chatbot recognizes specific inputs and responds accordingly.
- **Formatted Output**: Neatly formatted output for a better user experience.
- **Expandable**: Easily add more queries and responses to enhance the chatbot’s functionality.

## 🛠️ Prerequisites

Before you begin, ensure you have the following installed:

- **C Compiler**: You’ll need a C compiler like `gcc` to compile the chatbot. If you're on Linux, macOS, or Windows (using WSL), `gcc` should be available by default or easily installable.

## 📥 Installation

Follow these steps to set up the project on your local machine:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/mdriyadkhan585/Chatbot-in-C.git
   ```

2. **Navigate to the Project Directory**:
   ```bash
   cd Chatbot-in-C
   ```

3. **Compile the Program**:
   Use `gcc` to compile the chatbot program.
   ```bash
   gcc -o chatbot chatbot.c
   ```

## ▶️ Usage

Once compiled, you can start chatting with your bot by running the following command:

```bash
./chatbot
```

### 🎮 Interacting with the Chatbot

- **Greet the Bot**: Type `hello` and press Enter.
- **Ask How the Bot Is**: Type `how are you`.
- **Ask for Its Name**: Type `what's your name`.
- **Inquire About Its Abilities**: Type `what can you do`.
- **Request a Joke**: Type `tell me a joke`.
- **Say Goodbye**: Type `bye` to end the chat.

Example Interaction:

```plaintext
========================================
       Welcome to the Chatbot!
========================================

Chatbot: Hello! I'm your virtual assistant. Type 'bye' to exit.

You: hello

Chatbot: Hi there! How can I assist you today?

You: what's your name

Chatbot: I'm Chatbot, your virtual assistant. Nice to meet you!

You: bye

Chatbot: Goodbye! Have a fantastic day!
========================================
       Thank you for chatting!
========================================
```

## ⚙️ How It Works

The chatbot reads user input from the command line and compares it against a set of predefined strings. If the input matches one of these strings, it responds with a corresponding message.

### 📑 Code Structure

- **`main()` Function**: This is the entry point of the program, where it continuously reads user input until the user types `bye`.
- **`respond()` Function**: This function contains the logic for matching user inputs to predefined responses.

### 🛠️ Customization

You can easily expand the chatbot’s vocabulary by adding more `if` statements in the `respond()` function. Here's how you can add a new query:

```c
else if (strcmp(input, "your query") == 0) {
    printf("\nChatbot: Your response here!\n");
}
```

For example, to make the bot respond to "how old are you?":

```c
else if (strcmp(input, "how old are you") == 0) {
    printf("\nChatbot: Age is just a number! 😉\n");
}
```

---
**Happy Coding!** 💻🎉

---
