#include <stdio.h>
#include <string.h>

#define MAX_INPUT 100

// Function to simulate the chatbot's response
void respond(char *input) {
    if (strcmp(input, "hello") == 0) {
        printf("\nChatbot: Hi there! How can I assist you today?\n");
    } else if (strcmp(input, "how are you") == 0) {
        printf("\nChatbot: I'm an AI, so I don't have feelings, but I'm here to help you!\n");
    } else if (strcmp(input, "what's your name") == 0) {
        printf("\nChatbot: I'm Chatbot, your virtual assistant. Nice to meet you!\n");
    } else if (strcmp(input, "what can you do") == 0) {
        printf("\nChatbot: I can have a simple conversation with you. You can ask me about the weather, time, or just say 'bye' to end our chat.\n");
    } else if (strcmp(input, "what's the time") == 0) {
        printf("\nChatbot: I can't actually tell the time right now, but you can check a clock!\n");
    } else if (strcmp(input, "tell me a joke") == 0) {
        printf("\nChatbot: Why don't scientists trust atoms?\nChatbot: Because they make up everything!\n");
    } else if (strcmp(input, "bye") == 0) {
        printf("\nChatbot: Goodbye! Have a fantastic day!\n");
    } else {
        printf("\nChatbot: I'm sorry, I don't understand that.\n");
    }
}

int main() {
    char input[MAX_INPUT];

    printf("========================================\n");
    printf("       Welcome to the Chatbot!          \n");
    printf("========================================\n");
    printf("\nChatbot: Hello! I'm your virtual assistant. Type 'bye' to exit.\n");

    while (1) {
        printf("\nYou: ");
        fgets(input, MAX_INPUT, stdin);

        // Remove the newline character from the input
        input[strcspn(input, "\n")] = 0;

        // Check if the user wants to exit
        if (strcmp(input, "bye") == 0) {
            respond(input);
            break;
        }

        // Respond to the input
        respond(input);
    }

    printf("========================================\n");
    printf("       Thank you for chatting!          \n");
    printf("========================================\n");

    return 0;
}
