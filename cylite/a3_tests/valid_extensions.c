int main()
{
    int i;
    int x;

    if (i)
        pass;
    else
        print("fallback");

    for (i in range(0, 3))
        print(i);

    foreach (x in i)
        pass;

    try {
        pass;
    } except {
        print("recover");
    }

    return 0;
}
