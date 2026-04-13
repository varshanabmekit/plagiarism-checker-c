int main() {
    char text[1000], pattern[100];
    int matches = 0;

    printf("Enter the main text:\n");
    fgets(text, sizeof(text), stdin);

    printf("Enter the text to compare:\n");
    fgets(pattern, sizeof(pattern), stdin);

    text[strcspn(text, "\n")] = 0;
    pattern[strcspn(pattern, "\n")] = 0;

    int m = strlen(pattern);
    int n = strlen(text);

    // Count matches
    for (int i = 0; i <= n - m; i++) {
        if (strncmp(&text[i], pattern, m) == 0) {
            matches++;
        }
    }

    float similarity = ((float)(matches * m) / n) * 100;

    printf("\nSimilarity: %.2f%%\n", similarity);

    if (similarity > 50)
        printf("Possible Plagiarism Detected!\n");
    else
        printf("Low similarity\n");

    return 0;
}
