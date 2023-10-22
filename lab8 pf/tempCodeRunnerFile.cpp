int calculate(int age, int toy, int price)
{
    int money = 0;
    int receive = 10;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += receive - 1; // Lilly's brother took 1 USD
            receive += 10;
        }
        else
        {
            money += toy; // Lilly sells her toys
        }
    }

    return money; // Return the total money Lilly has saved
}
