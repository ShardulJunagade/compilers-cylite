#include <stdio.h>

// Helper function to check if a character is a letter
int isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Helper function to check if a character is a digit
int isDigit(char c) {
    return c >= '0' && c <= '9';
}

// Helper function to check if a character is whitespace
int isWhitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

// Helper function to compare strings manually
int stringEquals(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

// Function to check if a token is a keyword
int isKeyword(char *token) {
    if (stringEquals(token, "int")) return 1;
    if (stringEquals(token, "float")) return 1;
    if (stringEquals(token, "char")) return 1;
    if (stringEquals(token, "if")) return 1;
    if (stringEquals(token, "else")) return 1;
    if (stringEquals(token, "while")) return 1;
    if (stringEquals(token, "return")) return 1;
    return 0;
}

// Function to check if a token is an identifier
int isIdentifier(char *token) {
    if (token[0] == '\0') return 0;
    
    // First character must be letter or underscore
    if (!isLetter(token[0]) && token[0] != '_') {
        return 0;
    }
    
    // Remaining characters must be letters, digits, or underscores
    int i = 1;
    while (token[i] != '\0') {
        if (!isLetter(token[i]) && !isDigit(token[i]) && token[i] != '_') {
            return 0;
        }
        i++;
    }
    return 1;
}

// Function to check if a token is a number
int isNumber(char *token) {
    if (token[0] == '\0') return 0;
    
    int i = 0;
    while (token[i] != '\0') {
        if (!isDigit(token[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}

// Function to check if a character is an operator
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=';
}

// Function to check if a character is punctuation
int isPunctuation(char c) {
    return c == '(' || c == ')' || c == '{' || c == '}' || c == ';' || c == ',';
}

// Function to print a token with its type
void printToken(char *type, char *lexeme) {
    printf("<%s, %s>\n", type, lexeme);
}

int main() {
    char buffer[10000];
    char token[10000];
    int tokenIndex;
    
    // Read input line by line
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        int i = 0;
        while (buffer[i] !=
         '\0') {
            // Skip whitespace
            if (isWhitespace(buffer[i])) {
                i++;
                continue;
            }
            
            // Check for operators (single character)
            if (isOperator(buffer[i])) {
                token[0] = buffer[i];
                token[1] = '\0';
                printToken("OPERATOR", token);
                i++;
                continue;
            }
            
            // Check for punctuation (single character)
            if (isPunctuation(buffer[i])) {
                token[0] = buffer[i];
                token[1] = '\0';
                printToken("PUNCTUATION", token);
                i++;
                continue;
            }
            
            // Check for numbers
            if (isDigit(buffer[i])) {
                tokenIndex = 0;
                while (isDigit(buffer[i])) {
                    token[tokenIndex++] = buffer[i++];
                }
                token[tokenIndex] = '\0';
                printToken("NUMBER", token);
                continue;
            }
            
            // Check for identifiers/keywords
            if (isLetter(buffer[i]) || buffer[i] == '_') {
                tokenIndex = 0;
                while (isLetter(buffer[i]) || isDigit(buffer[i]) || buffer[i] == '_') {
                    token[tokenIndex++] = buffer[i++];
                }
                token[tokenIndex] = '\0';
                
                if (isKeyword(token)) {
                    printToken("KEYWORD", token);
                } else {
                    printToken("IDENTIFIER", token);
                }
                continue;
            }
            
            // Unknown character
            token[0] = buffer[i];
            token[1] = '\0';
            printToken("UNKNOWN", token);
            i++;
        }
    }
    
    return 0;
}
