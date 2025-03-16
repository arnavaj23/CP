int main()
{
    srand(time(0));

    // Define the range [min, max]
    int min = 10;
    int max = 50;

    // Generate a random number in the range [min, max]
    int randomNumber = min + (rand() % (max - min + 1));

return 0;
}
