void reset(int started)
{
    if (!started)
	set_light(1);
}

void init()
{
    add_action("north", "north");
    add_action("south", "south");
    add_action("west", "west");
}

string short()
{
    return "A dimly lit forest";
}

void long()
{
    write("You are in part of a dimly lit forest.\n" +
	  "Trails lead north, south and west\n");
}

int north()
{
    this_player()->move_player("north#room/south/sforst3");
    return 1;
}

int south()
{
    this_player()->move_player("south#room/south/sforst9");
    return 1;
}

int west()
{
    this_player()->move_player("west#room/south/sforst8");
    return 1;
}
