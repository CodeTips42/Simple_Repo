int main()
{
    char str1[SIZE], str2[SIZE];
    printf("Enter 1st string\n");
    scanf("%s", str1);

    printf("Enter 2nd string\n");
    scanf("%s", str2);

    int count1[256], count2[256];
    // initialising arrays with 0
    memset(count1, 0, sizeof(count1));
    memset(count2, 0, sizeof(count2));

    // if lengths are not equal, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
    {
        printf("The strings are not anagrams");
        return 0;
    }
    
    // Store the count of every character in string
    int i;
    for (i = 0; i < strlen(str1); i++)
    {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    
    // If the counts of characters are not equal,
    // they are not anagrams
    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("The strings are not anagrams");
            return 0;
        }
    }
    printf("The strings are anagrams");
}
