// EverdellScoreKeeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Everdell {
private:
	//base game variables
	string name;
	int cardPoints = 0;
	int coins = 0;
	int prosperityPoints = 0;
	int journeyPoints = 0;
	int specialEventPoints = 0;
	int numBasicEvents = 0;
	int numSpecialEvents = 0;
	int commonConstructions = 0;
	int uniqueConstructions = 0;
	int commonCritters = 0;
	int uniqueCritters = 0;
	int prosperityCards = 0;
	int twigs = 0;
	int resin = 0;
	int stone = 0;
	int berries = 0;
	//pearlbrook variables
	int pearls = 0;
	int numAdornments = 0;
	int adornmentPoints = 0;
	int wonders = 0;
	//bellfaire
	int flowerFestival = 0;
	int garlandAwardPoints = 0;
	//spirecrest
	int expedition = 0;
	int discoveryCardPoints = 0;
	//other variables
	int totalPoints = 0;
public:
	//base game getter functions
	string getName() {
		return name;
	}
	int getCardPoints() {
		return cardPoints;
	}
	int getCoins() {
		return coins;
	}
	int getProsperityPoints() {
		return prosperityPoints;
	}
	int getJourneyPoints() {
		return journeyPoints;
	}
	int getSpecialEventPoints() {
		return specialEventPoints;
	}
	int getNumBasicEvents() {
		return numBasicEvents;
	}
	int getNumSpecialEvents() {
		return numSpecialEvents;
	}
	int getCommonConstructions() {
		return commonConstructions;
	}
	int getUniqueConstructions() {
		return uniqueConstructions;
	}
	int getCommonCritters() {
		return commonCritters;
	}
	int getProsperityCards() {
		return prosperityCards;
	}
	int getUniqueCritters() {
		return uniqueCritters;
	}
	int getTwigs() {
		return twigs;
	}
	int getResin() {
		return resin;
	}
	int getStone() {
		return stone;
	}
	int getBerries() {
		return berries;
	}
	//pearlbrook getter functions
	int getPearls() {
		return pearls;
	}
	int getNumAdornments() {
		return numAdornments;
	}
	int getAdornmentPoints() {
		return adornmentPoints;
	}
	int getWonders() {
		return wonders;
	}
	//bellfaire getter functions
	int getFlowerFestival() {
		return flowerFestival;
	}
	int getGarlandAwardPoints() {
		return garlandAwardPoints;
	}
	//spirecrest getter functions
	int getExpedition() {
		return expedition;
	}
	int getDiscoveryCardPoints() {
		return discoveryCardPoints;
	}

	//base game setter functions
	void setName(string n) {
		name = n;
	}
	void setCardPoints(int cardp) {
		cardPoints = cardp;
	}
	void setCoins(int cp) {
		coins = cp;
	}
	void setProsperityPoints(int pp) {
		prosperityPoints = pp;
	}
	void setJourneyPoints(int jp) {
		journeyPoints = jp;
	}
	void setSpecialEventPoints(int sep) {
		specialEventPoints = sep;
	}
	void setNumBasicEvents(int be) {
		numBasicEvents = be;
	}
	void setNumSpecialEvents(int se) {
		numSpecialEvents = se;
	}
	void setCommonConstructions(int cc) {
		commonConstructions = cc;
	}
	void setUniqueConstructions(int uc) {
		uniqueConstructions = uc;
	}
	void setCommonCritters(int cc) {
		commonCritters = cc;
	}
	void setUniqueCritters(int uc) {
		uniqueCritters = uc;
	}
	void setProsperityCards(int pc) {
		prosperityCards = pc;
	}
	void setTwigs(int t) {
		twigs = t;
	}
	void setResin(int res) {
		resin = res;
	}
	void setStone(int s) {
		stone = s;
	}
	void setBerries(int ber) {
		berries = ber;
	}
	//pearlbrook setter functions
	void setPearls(int p) {
		pearls = p;
	}
	void setNumAdornments(int nAdornments) {
		numAdornments = nAdornments;
	}
	void setAdornmentPoints(int aPoints) {
		adornmentPoints = aPoints;
	}
	void setWonders(int w) {
		wonders = w;
	}
	//bellfaire setter functions
	void setFlowerFestival(int fFestival) {
		flowerFestival = fFestival;
	}
	void setGarlandAwardPoints(int garAwardPoints) {
		garlandAwardPoints = garAwardPoints;
	}
	//spirecrest setter functions
	void setExpedition(int exp) {
		expedition = exp;
	}
	void setDiscoveryCardPoints(int disPoints) {
		discoveryCardPoints = disPoints;
	}

	//additional getter and setter functions
	int getTotalPoints() {
		return totalPoints;
	}
	void setTotalPoints(int tPoints) {
		totalPoints = tPoints;
	}

	//additional functions base game
	void ProsperityMenuText();
	void EventMenuText();
	int ProsperityMenu();
	int EventMenu();
	int ProsperityCalculator(int);
	int EventCalculator(int);

	//additional pearlbrook functions
	int PearlbrookProsperityMenu();
	int PearlbrookEventMenu();
	int AdornmentMenu();
	int AdornmentCalculator(int);

};


//function declarations
int gameMenu();
void PlayerScoring(int, int);
void EverdellBaseGame(Everdell* p);
void Pearlbrook(Everdell* p);
void Bellfaire(Everdell* p);
void Spirecrest(Everdell* p);
int DisplayBaseGamePoints(Everdell* p);
int DisplayPearlbrookPoints(Everdell* p);
int DisplayBellfairePoints(Everdell* p);
int DisplaySpirecrestPoints(Everdell* p);
void ChooseProsperity(Everdell* p);
void ChooseProsperityPearlbrook(Everdell* P);
void ChooseEvent(Everdell* p);
void ChooseEventPearlbrook(Everdell* p);
void ChooseAdornment(Everdell* p);


int main()
{
	int numberPlayers;
	int choice;
	bool again = true;

	//select which set of expansions you are playing with
	choice = gameMenu();

	//gather the number of players and set up scoring
	cout << "Enter the number of players: ";
	cin >> numberPlayers;

	PlayerScoring(choice, numberPlayers);
	
return 0;
}

void Everdell::EventMenuText() {
	cout << "             Events\n\n";
	cout << "1. A Brilliant Marketing Plan\n";
	cout << "2. Ancient Scrolls Discovered\n";
	cout << "3. An Evening of Fireworks\n";
	cout << "4. Architectural Renaissance\n";
	cout << "5. Arts & Music Festival\n";
	cout << "6. A Wee Run City\n";
	cout << "7. Bed & Breakfast Guild\n";
	cout << "8. Capture of the Acorn Theives\n";
	cout << "9. City Holiday\n";
	cout << "10. Croak Ware Cure\n";
	cout << "11. Flying Doctor Service\n";
	cout << "12. Gathering of Elders\n";
	cout << "13. Graduation of Scholars\n";
	cout << "14. King's Road Established\n";
	cout << "15. Ministering to Miscreants\n";
	cout << "16. Path of the Pilgrams\n";
	cout << "17. Performer in Residence\n";
	cout << "18. Pie Eating Contest\n";
	cout << "19. Pristine Chapel Ceiling\n";
	cout << "20. Remembering the Fallen\n";
	cout << "21. Royal Wedding\n";
	cout << "22. Statues Commissioned\n";
	cout << "23. Tax Relief\n";
	cout << "24. The Everdell Games\n";
	cout << "25. Under New Management\n";
}

int Everdell ::EventMenu() {
	int choice = 0;
	EventMenuText();
	cout << "Please enter the number beside the event card you aquired: ";
	cin >> choice;
	return choice;
}

int Everdell::EventCalculator(int userChoice) {
	bool again = true;
	char response;
	int resources, numCards, wood, critters, pairs, prisoners, berries;
	int coins, resin, stone, total1, total2;

	switch (userChoice) {
	case 1:
		resources = 0;
		again = true;
		while (again) {
			cout << "Have you already collected your donation? Enter y for yes or n for no: ";
			cin >> response;
			if (response == 'y') {
				cout << "Thank you! You recieve no further points.\n";
				again = false;
			}
			else if(response == 'n') {
				cout << "Enter the number of resources you donated to your opponent(s): ";
				cin >> resources;
				if (resources > 3) {
					cout << "3 is the max number of donated resources! Changing response to 3.\n";
					resources = 3;
				}
				specialEventPoints = specialEventPoints + (resources * 2);
				again = false;
			}
			else {
			cout << "Invalid response! Please try again.\n";
			}
		}
		return 1;
		break;
	case 2:
		numCards = 0;
		cout << "Please enter the number of cards you placed beneath this event: ";
		cin >> numCards;
		if (numCards > 5) {
			cout << "Sorry you were only allowed to place 5 cards under this event! Changing response to 5\n";
			numCards = 5;
		}
		specialEventPoints = specialEventPoints + numCards;
		return 1;
		break;
	case 3:
		wood = 0;
		cout << "Please enter the number of wood you placed on this event: ";
		cin >> wood;
		if (wood > 3) {
			cout << "Sorry the max number of wood that can be placed on this event is 3! Changing response to 3\n";
			wood = 3;
		}
		specialEventPoints = specialEventPoints + (wood * 2);
		return 1;
		break;
	case 4:
		specialEventPoints = specialEventPoints + 5;
		return 1;
		break;
	case 5:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 6:
		specialEventPoints = specialEventPoints + 4;
		return 1;
		break;
	case 7:
		specialEventPoints = specialEventPoints + 5;
		return 1;
		break;
	case 8:
		critters = 0;
		cout << "Please enter the number of critters you placed beneath this event: ";
		cin >> critters;
		if (critters > 2) {
			cout << "Sorry the max number of critters you could place under this event is 2! Changing response to 2.\n";
			critters = 2;
		}
		specialEventPoints = specialEventPoints + (critters * 3);
		return 1;
		break;
	case 9:
		specialEventPoints = specialEventPoints + 5;
		return 1;
		break;
	case 10:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 11:
		pairs = 0;
		cout << "Please enter the number of husband/wife pairs in your city: ";
		cin >> pairs;
		specialEventPoints = specialEventPoints + (pairs * 3);
		return 1;
		break;
	case 12:
		specialEventPoints = specialEventPoints + 5;
		return 1;
		break;
	case 13:
		critters = 0;
		cout << "Please enter the number of critters you placed beneath this event: ";
		cin >> critters;
		if (critters > 3) {
			cout << "Sorry the max number of critters you could place under this event is 2! Changing response to 2.\n";
			critters = 3;
		}
		specialEventPoints = specialEventPoints + (critters * 2);
		return 1;
		break;
	case 14:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 15:
		prisoners = 0;
		response = 'e';
		again = true;
		cout << "Please enter the number of prisoners in your dungeon: ";
		cin >> prisoners;
		if (prisoners > 2) {
			while (again) {
				cout << "Do you have the second dungeon? Please enter y for yes or n for no: ";
				cin >> response;
				if (response == 'y') {
					if (prisoners > 4) {
						cout << "With 2 dungeons you can only have a max of 4 prisoners. Changing response to 4!\n";
						prisoners = 4;
						again = false;
					}
				}
				else if (response == 'n') {
					cout << "The max number of prisoners is 2! Changing respoonse to 2.\n";
					prisoners = 2;
					again = false;
				}
				else {
					cout << "Invalid response! Please try again.\n";
				}
			}
		}
		specialEventPoints = specialEventPoints + (prisoners * 3);
		return 1;
		break;
	case 16:
		critters = 0;
		response = 'e';
		again = true;
		cout << "Please enter the number of workers in your monastery: ";
		cin >> critters;
		if (critters > 2) {
			while (again) {
				cout << "Do you have the second monastery? Please enter y for yes or n for no: ";
				cin >> response;
				if (response == 'y') {
					if (critters > 4) {
						cout << "With 2 monasteries you can only have a max of 4 workers. Changing response to 4!\n";
						critters = 4;
						again = false;
					}
				}
				else if (response == 'n') {
					cout << "The max number of workers is 2! Changing respoonse to 2.\n";
					critters = 2;
					again = false;
				}
				else {
					cout << "Invalid response! Please try again.\n";
				}
			}
		}
		specialEventPoints = specialEventPoints + (critters * 3);
		return 1;
		break;
	case 17:
		berries = 0;
		cout << "Please enter the number of berries you placed on this event: ";
		cin >> berries;
		if (berries > 3) {
			cout << "The max number of berries that can be placed on this event is 3! Changing response to 3.\n";
			berries = 3;
		}
		specialEventPoints = specialEventPoints + (berries * 2);
		return 1;
		break;
	case 18:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 19:
		coins = 0;
		cout << "Please enter the number of coins on your chapel: ";
		cin >> coins;
		specialEventPoints = specialEventPoints + (coins * 2);
		return 1;
		break;
	case 20:
		critters = 0;
		response = 'e';
		again = true;
		cout << "Please enter the number of workers buried in your cemetery: ";
		cin >> critters;
		if (critters > 2) {
			while (again) {
				cout << "Do you have the second cemetery? Please enter y for yes or n for no: ";
				cin >> response;
				if (response == 'y') {
					if (critters > 4) {
						cout << "With 2 cemetaries you can only have a max of 4 workers. Changing response to 4!\n";
						critters = 4;
						again = false;
					}
				}
				else if (response == 'n') {
					cout << "The max number of workers is 2! Changing respoonse to 2.\n";
					critters = 2;
					again = false;
				}
				else {
					cout << "Invalid response! Please try again.\n";
				}
			}
		}
		specialEventPoints = specialEventPoints + (critters * 3);
		return 1;
		break;
	case 21:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 22:
		specialEventPoints = specialEventPoints + 6;
		return 1;
		break;
	case 23:
		specialEventPoints = specialEventPoints + 3;
		return 1;
		break;
	case 24:
		specialEventPoints = specialEventPoints + 9;
		return 1;
		break;
	case 25:
		berries = 0;
		wood = 0;
		stone = 0;
		resin = 0;
		total1 = 0;
		total2 = 0;
		again = true;
		while (again) {
			cout << "Please enter the number of berries you placed on this card: ";
			cin >> berries;
			cout << "Please enter the number of twigs you placed on this card: ";
			cin >> wood;
			cout << "Please enter the number of resin you placed on this card: ";
			cin >> resin;
			cout << "Please enter the number of stone you placed on this card: ";
			cin >> stone;

			total1 = berries + twigs;
			total2 = resin + stone;
			again = false;

			if ((total1 + total2) > 3) {
				cout << "The max number of resources that can be placed on this event is 3! Please try again.\n";
				again = true;
			}
		}
		specialEventPoints = specialEventPoints + (total1 + (total2 * 2));
		return 1;
		break;
	case 26:
		again = true;
		response = 'e';
		numCards = 0;
		while (again) {
			cout << "Have you already gained the coins for this event? Enter y for yes or n for no: ";
			cin >> response;
			if (response == 'y') {
				cout << "No further points gained from this card!\n";
				again = false;
			}
			else if (response == 'n') {
				cout << "Please enter the number of cards given to opponents: ";
				cin >> numCards;
				again = false;
			}
			else {
				cout << "Invalid Input! Please try again.\n";
				again = true;
			}
		}
		specialEventPoints = specialEventPoints + numCards;
		break;
	case 27:
		specialEventPoints = specialEventPoints + 4;
		break;
	case 28:
		critters = 0;
		cout << "Please enter the number of critters placed beneath this event: ";
		cin >> critters;
		if (critters > 3) {
			cout << "The maximum number of critters that can be placed under this event is 3!\nSetting number of critters to 3.\n";
			critters = 3;
		}
		specialEventPoints = specialEventPoints + (critters * 2);
		break;
	case 29:
		cout << "No further points gained from this event.\n";
		break;
	case 30:
		cout << "No further points gained from this event.\n";
		break;
	case 31:
		cout << "No further points gained from this event.\n";
		break;
	default:
		cout << "Invalid entry!\n";
		return 0;
	}
}

void Everdell::ProsperityMenuText() {
	cout << "        Prosperity Cards\n\n";
	cout << "1. Architect\n";
	cout << "2. Castle\n";
	cout << "3. Ever Tree\n";
	cout << "4. Fynn Nobletail\n";
	cout << "5. King\n";
	cout << "6. Oleander's Opera House\n";
	cout << "7. Palace\n";
	cout << "8. Rugwort the Ruler\n";
	cout << "9. School\n";
	cout << "10. Scurrble Champion\n";
	cout << "11. Theater\n";
	cout << "12. Wife\n";
}

int Everdell::ProsperityMenu() {
	int choice = 0;
	ProsperityMenuText();
	cout << "Please enter the number beside the prosperity card you aquired: ";
	cin >> choice;
	return choice;
}

int Everdell :: ProsperityCalculator(int userChoice) {
	int total, numEvents, numScurrble, numCards;
	char response;
	bool again;

	switch (userChoice) {
	case 1:
		total = 0;
		total = resin + stone;
		if (total > 6) {
			total = 6;
		}
		prosperityPoints = prosperityPoints + total;
		return 1;
		break;
	case 2:
		prosperityPoints = prosperityPoints + commonConstructions;
		return 1;
		break;
	case 3:
		prosperityPoints = prosperityPoints + prosperityCards;
		return 1;
		break;
	case 4:
		total = 0;
		total = (numBasicEvents * 2) + (numSpecialEvents * 3);
		prosperityPoints = prosperityPoints + total;
		return 1;
		break;
	case 5:
		total = 0;
	    total = numBasicEvents + (numSpecialEvents * 3);
		prosperityPoints = prosperityPoints + total;
		return 1;
		break;
	case 6:
		prosperityPoints = prosperityPoints + (uniqueCritters * 2);
		return 1;
		break;
	case 7:
		prosperityPoints = prosperityPoints + uniqueConstructions;
		return 1;
		break;
	case 8:
		numEvents = 0;
		cout << "\nPlease enter the number of events achieved by your opponents: ";
		cin >> numEvents;
		prosperityPoints = prosperityPoints + numEvents;
		return 1;
		break;
	case 9:
		prosperityPoints = prosperityPoints + commonCritters;
		return 1;
		break;
	case 10:
		numScurrble = 0;
		cout << "\nPlease enter the number of other scurrble champions in your city: ";
		cin >> numScurrble;
		prosperityPoints = prosperityPoints + (numScurrble * 2);
		return 1;
		break;
	case 11:
		prosperityPoints = prosperityPoints + uniqueCritters;
		return 1;
		break;
	case 12:
		again = true;
		response = 'e';
		while (again) {
			cout << "Is your wife paired with a husband?\nPlease enter y for yes or n for no: ";
			cin >> response;
			if (response == 'y') {
				prosperityPoints = prosperityPoints + 1;
				again = false;
			}
			else if (response == 'n') {
				cout << "\nSorry you do not score any additional points!\n";
				again = false;
			}
			else {
				cout << "Invalid input!\n";
			}

		}
		return 1;
		break;
	case 13:
		numCards = 0;
		cout << "Please enter the number of Pearlbrook cards(cards with a river symbol on the left side) in your city: ";
		cin >> numCards;
		prosperityPoints = prosperityPoints + numCards;
		return 1;
		break;
	default:
		cout << "Invalid entry!\n";
		return 0;
	}
}

int gameMenu() {
	int choice = 0;

	cout << "       Choose One\n";
	cout << "1. Everdell\n";
	cout << "2. Everdell and Pearlbrook\n";
	cout << "3. Everdell and Bellfaire\n";
	cout << "4. Everdell and Spirecrest\n";
	cout << "5. Everdell, Pearlbrook, and Bellfaire\n";
	cout << "6. Everdell, Pearlbrook and Spirecrest\n";
	cout << "7. Everdell, Bellfaire, and Spirecrest\n";
	cout << "8. Everdell, Pearlbrook, Bellfaire, and Spirecrest\n";
	cout << "Please enter the number of the combination of expansions you are playing with: ";
	cin >> choice;
	return choice;
}

void PlayerScoring(int c, int numPlayers) {
	Everdell player[6];
	int baseGamePoints, pearlbrookPoints, bellfairePoints, spirecrestPoints, totalPoints, winnerPoints, prosperity, events, adornments;
	string name, winner;

	switch (c) {
	case 1:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information it will be used to calculate your score" << endl;
			EverdellBaseGame(&player[i]);

			//get prosperity and event points
			ChooseProsperity(&player[i]);
			ChooseEvent(&player[i]);
		}
		
		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			cout << "Total: " << baseGamePoints << endl << endl;

			//keep track of the winner
			if (baseGamePoints > winnerPoints) {
				winnerPoints = baseGamePoints;
				winner = player[i].getName();
			}
		}

		cout << "The winner is " << winner << "!!!";
		break;
	case 2:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Pearlbrook(&player[i]);

			//get prosperity and event points
			ChooseProsperityPearlbrook(&player[i]);
			ChooseEventPearlbrook(&player[i]);
			ChooseAdornment(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			pearlbrookPoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			pearlbrookPoints = DisplayPearlbrookPoints(&player[i]);
			totalPoints = baseGamePoints + pearlbrookPoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";

		break;
	case 3:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Bellfaire(&player[i]);

			//get prosperity and event points
			ChooseProsperity(&player[i]);
			ChooseEvent(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			bellfairePoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			bellfairePoints = DisplayBellfairePoints(&player[i]);
			totalPoints = baseGamePoints + bellfairePoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	case 4:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Spirecrest(&player[i]);

			//get prosperity and event points
			ChooseProsperity(&player[i]);
			ChooseEvent(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			spirecrestPoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			spirecrestPoints = DisplaySpirecrestPoints(&player[i]);
			totalPoints = baseGamePoints + spirecrestPoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	case 5:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Pearlbrook(&player[i]);
			Bellfaire(&player[i]);

			//get prosperity and event points
			ChooseProsperityPearlbrook(&player[i]);
			ChooseEventPearlbrook(&player[i]);
			ChooseAdornment(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			pearlbrookPoints = 0;
			bellfairePoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			pearlbrookPoints = DisplayPearlbrookPoints(&player[i]);
			bellfairePoints = DisplayBellfairePoints(&player[i]);
			totalPoints = baseGamePoints + pearlbrookPoints + bellfairePoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	case 6:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Pearlbrook(&player[i]);
			Spirecrest(&player[i]);

			//get prosperity and event points
			ChooseProsperityPearlbrook(&player[i]);
			ChooseEventPearlbrook(&player[i]);
			ChooseAdornment(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			pearlbrookPoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			pearlbrookPoints = DisplayPearlbrookPoints(&player[i]);
			spirecrestPoints = DisplaySpirecrestPoints(&player[i]);
			totalPoints = baseGamePoints + pearlbrookPoints + spirecrestPoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	case 7:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Bellfaire(&player[i]);
			Spirecrest(&player[i]);

			//get prosperity and event points
			ChooseProsperity(&player[i]);
			ChooseEvent(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			bellfairePoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			bellfairePoints = DisplayBellfairePoints(&player[i]);
			spirecrestPoints = DisplaySpirecrestPoints(&player[i]);
			totalPoints = baseGamePoints + bellfairePoints + spirecrestPoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	case 8:
		winnerPoints = 0;
		winner = "";
		for (int i = 0; i < numPlayers; i++) {
			//get player names
			cout << "Enter player " << i + 1 << "'s name: ";
			cin >> name;
			player[i].setName(name);

			//get info from each player
			cout << name << " enter the following information. It will be used in calculating your score!\n";
			EverdellBaseGame(&player[i]);
			Pearlbrook(&player[i]);
			Bellfaire(&player[i]);
			Spirecrest(&player[i]);

			//get prosperity and event points
			ChooseProsperityPearlbrook(&player[i]);
			ChooseEventPearlbrook(&player[i]);
			ChooseAdornment(&player[i]);
		}

		for (int i = 0; i < numPlayers; i++) {
			baseGamePoints = 0;
			pearlbrookPoints = 0;
			bellfairePoints = 0;
			spirecrestPoints = 0;
			totalPoints = 0;

			//display score for player i
			cout << player[i].getName() << endl;
			baseGamePoints = DisplayBaseGamePoints(&player[i]);
			pearlbrookPoints = DisplayPearlbrookPoints(&player[i]);
			bellfairePoints = DisplayBellfairePoints(&player[i]);
			spirecrestPoints = DisplaySpirecrestPoints(&player[i]);
			totalPoints = baseGamePoints + pearlbrookPoints + bellfairePoints + spirecrestPoints;
			cout << "Total: " << totalPoints << endl << endl;

			//keep track of the winner
			if (totalPoints > winnerPoints) {
				winnerPoints = totalPoints;
				winner = player[i].getName();
			}
		}
		cout << "The winner is " << winner << "!!!";
		break;
	}
}

void EverdellBaseGame(Everdell* p) {
	int cards = 0, coin = 0, journey = 0, basicEvents = 0, specialEvents = 0, commonConstructs = 0, uniqueConstructs = 0;
	int commonCrits = 0, uniqueCrits = 0, numProsperity = 0, numTwigs = 0, numResin = 0, numStone = 0, numBerries = 0;

	cout << "Number of common constructions in your city: ";
	cin >> commonConstructs;
	cout << "Number of common critters in your city: ";
	cin >> commonCrits;
	cout << "Number of unique constructions in your city: ";
	cin >> uniqueConstructs;
	cout << "Number of unique critters in your city: ";
	cin >> uniqueCrits;
	cout << "Number of prosperity cards in your city: ";
	cin >> numProsperity;
	cout << "Number of twigs you have left over: ";
	cin >> numTwigs;
	cout << "Number of resin you have left over: ";
	cin >> numResin;
	cout << "Number of stone you have left over: ";
	cin >> numStone;
	cout << "Number of berries you have left over: ";
	cin >> numBerries;
	cout << "Number of basic events(Events worth 3 points): ";
	cin >> basicEvents;
	cout << "Number of special events: ";
	cin >> specialEvents;
	cout << "Number of base points from cards in your city: ";
	cin >> cards;
	cout << "Number of coins: ";
	cin >> coin;
	cout << "Number of journey points: ";
	cin >> journey;
	
	p->setCommonConstructions(commonConstructs);
	p->setUniqueConstructions(uniqueConstructs);
	p->setCommonCritters(commonCrits);
	p->setUniqueCritters(uniqueCrits);
	p->setProsperityCards(numProsperity);
	p->setTwigs(numTwigs);
	p->setResin(numResin);
	p->setStone(numStone);
	p->setBerries(numBerries);
	p->setNumBasicEvents(basicEvents);
	p->setNumSpecialEvents(specialEvents);
	p->setCardPoints(cards);
	p->setCoins(coin);
	p->setJourneyPoints(journey);

}
void Pearlbrook(Everdell* p) {
	int pearl = 0, adornments = 0, wonder = 0;
	cout << "Number of pearls: ";
	cin >> pearl;
	cout << "Number of adornments purchased: ";
	cin >> adornments;
	cout << "Points gained from wonders: ";
	cin >> wonder;
	
	p->setPearls(pearl);
	p->setNumAdornments(adornments);
	p->setWonders(wonder);
}
void Bellfaire(Everdell *p) {
	int flowerFestivalEvent = 0, garlandAward = 0, awardPlace = 0;
	char choice;
	bool again = true;
	while (again) {
		cout << "Did you gain the flower festival event? Enter y for yes or n for no: ";
		cin >> choice;
		if (choice == 'y') {
			flowerFestivalEvent = 4;
			again = false;
		}
		else if (choice == 'n') {
			flowerFestivalEvent = 0;
			again = false;
		}
		else {
			cout << "Invalid Response! Please try again.\n";
		}
	}
	
	again = true;
	while (again) {
		cout << "Please enter your placement for the garland Award. Enter 1 for 1st, 2 for 2nd, etc.: ";
		cin >> awardPlace;
		if (awardPlace == 1) {
			garlandAward = 6;
			again = false;
		}
		else if (awardPlace == 2) {
			garlandAward = 3;
			again = false;
		}
		else if (awardPlace > 2) {
			garlandAward = 0;
			again = false;
		}
		else {
			cout << "Invalid input! Please try again.\n";
			again = true;
		}
	}
	
	p->setFlowerFestival(flowerFestivalEvent);
	p->setGarlandAwardPoints(garlandAward);
}
void Spirecrest(Everdell* p) {
	int expeditionPoints = 0, discoveryPoints = 0;

	cout << "Please enter the number of points gained on your expedition: ";
	cin >> expeditionPoints;
	cout << "Please enter the number of points gained from discovery cards: ";
	cin >> discoveryPoints;

	p->setExpedition(expeditionPoints);
	p->setDiscoveryCardPoints(discoveryPoints);
}

int Everdell::PearlbrookProsperityMenu() {
	int choice = 0;
	ProsperityMenuText();
	cout << "13. Shipwright\n";
	cout << "Please enter the number beside the prosperity card you aquired: ";
	cin >> choice;
	return choice;
}

int Everdell::PearlbrookEventMenu() {
	int choice = 0;
	EventMenuText();
	cout << "26. Masquerade Invitations\n";
	cout << "27. River Race\n";
	cout << "28. Riverside Resort\n";
	cout << "29. Romantic Cruise\n";
	cout << "30. Sunken Treasure Discovered\n";
	cout << "31. X Marks the Spot\n";
	cout << "Please enter the number beside the event card you aquired: ";
	cin >> choice;
	return choice;
}

int Everdell::AdornmentMenu() {
	int choice = 0;
	cout << "1. Bell\n";
	cout << "2. Compass\n";
	cout << "3. Gilded Book\n";
	cout << "4. Hourglass\n";
	cout << "5. Key to the City\n";
	cout << "6. Masque\n";
	cout << "7. Mirror\n";
	cout << "8. Scales\n";
	cout << "9. Seaglass Amulet\n";
	cout << "10. Spyglass\n";
	cout << "11. Sundial\n";
	cout << "12. Tiara\n";
	cout << "Please enter the number beside the adornment card you aquired: ";
	cin >> choice;
	return choice;
}

int Everdell::AdornmentCalculator(int c) {
	int critters = 0, travelerCards = 0, governanceCards = 0, destinationCards = 0, constructions = 0, uniqueColor = 0, hand = 0, productionCards = 0, numWonder = 0;
	switch (c) {
	case 1:
		critters = 0;
		critters = commonCritters + uniqueCritters;
		critters = critters / 2;
		adornmentPoints = adornmentPoints + critters;
		return 1;
		break;
	case 2:
		travelerCards = 0;
		cout << "Please enter the number of traveler cards(brown cards) in your city: ";
		cin >> travelerCards;
		adornmentPoints = adornmentPoints + travelerCards;
		return 1;
		break;
	case 3:
		governanceCards = 0;
		cout << "Please enter the number of governance cards(blue cards) in your city: ";
		cin >> governanceCards;
		adornmentPoints = adornmentPoints + governanceCards;
		return 1;
		break;
	case 4:
		destinationCards = 0;
		cout << "Please enter the number of destination cards(red cards) in your city: ";
		cin >> destinationCards;
		adornmentPoints = adornmentPoints + destinationCards;
		return 1;
		break;
	case 5:
		constructions = 0;
		constructions = commonConstructions + uniqueConstructions;
		constructions = constructions / 2;
		adornmentPoints = adornmentPoints + constructions;
		return 1;
		break;
	case 6:
		adornmentPoints = adornmentPoints + (coins / 3);
		return 1;
		break;
	case 7:
		uniqueColor = 0;
		cout << "Please enter the number of colors of cards in your city: ";
		cin >> uniqueColor;
		adornmentPoints = adornmentPoints + uniqueColor;
		return 1;
		break;
	case 8:
		hand = 0;
		cout << "Please enter the number of cards in your hand: ";
		cin >> hand;
		if (hand > 5) {
			cout << "The max number of eligible cards for this adornment is 5! Setting hand size to 5.\n";
			hand = 5;
		}
		adornmentPoints = adornmentPoints + hand;
		return 1;
		break;
	case 9:
		adornmentPoints = adornmentPoints + 3;
		return 1;
		break;
	case 10:
		numWonder = 0;
		cout << "Please enter the number of wonders you built: ";
		cin >> numWonder;
		adornmentPoints = adornmentPoints + (numWonder * 3);
		return 1;
		break;
	case 11:
		productionCards = 0;
		productionCards = productionCards / 2;
		adornmentPoints = adornmentPoints + productionCards;
		return 1;
		break;
	case 12:
		adornmentPoints = adornmentPoints + prosperityCards;
		return 1;
		break;
	default:
		cout << "Invalid input! Please try again.\n";
		return 0;
	}
}

int DisplayBaseGamePoints(Everdell* p) {
	int total = 0, cards = 0, prosperity = 0, journey = 0, coins = 0, events = 0;

	cards = p->getCardPoints();
	prosperity = p->getProsperityPoints();
	journey = p->getJourneyPoints();
	coins = p->getCoins();
	events = (p->getNumBasicEvents() * 3) + p->getSpecialEventPoints();
	total = cards + prosperity + journey + coins + events;

	cout << "Cards: " << cards << endl;
	cout << "Prosperity Points: " << prosperity << endl;
	cout << "Journey Points: " << journey << endl;
	cout << "Coins: " << coins << endl;
	cout << "Events: " << events << endl;

	return total;
}

int DisplayPearlbrookPoints(Everdell* p) {
	int total = 0, pearls = 0, wonders = 0, adornmentPoints = 0;

	pearls = p->getPearls();
	wonders = p->getWonders();
	adornmentPoints = p->getAdornmentPoints();
	total = pearls + wonders + adornmentPoints;

	cout << "Pearls: " << (pearls * 2) << endl;
	cout << "Wonders: " << wonders << endl;
	cout << "Adornment Points: " << adornmentPoints << endl;

	return total;
}

int DisplayBellfairePoints(Everdell* p) {
	int total = 0, flower = 0, garland = 0;

	flower = p->getFlowerFestival();
	garland = p->getGarlandAwardPoints();
	total = flower + garland;

	cout << "Flower festival Event: " << p->getFlowerFestival() << endl;
	cout << "Garland Award: " << p->getGarlandAwardPoints() << endl;

	return total;
}

int DisplaySpirecrestPoints(Everdell* p) {
	int total = 0, expedition = 0, discovery = 0;

	expedition = p->getExpedition();
	discovery = p->getDiscoveryCardPoints();
	total = expedition + discovery;

	cout << "Expedition Points: " << p->getExpedition() << endl;
	cout << "Discovery Card Points: " << p->getDiscoveryCardPoints() << endl;

	return total;
}


void ChooseProsperity(Everdell* p) {
	int numProsperity = 0, choice = 0, again = 0;

	numProsperity = p->getProsperityCards();

	for (int i = 0; i < numProsperity; i++) {
		while (again != 1) {
			cout << "Please enter prosperity card #" << i + 1 << endl;
			choice = p->ProsperityMenu();
			again = p->ProsperityCalculator(choice);
		}
		again = 0;
	}
}

void ChooseProsperityPearlbrook(Everdell* p) {
	int numProsperity = 0, choice = 0, again = 0;

	numProsperity = p->getProsperityCards();

	for (int i = 0; i < numProsperity; i++) {
		while (again != 1) {
			cout << "Enter prosperity card #" << i + 1 << endl;
			choice = p->PearlbrookProsperityMenu();
			again = p->ProsperityCalculator(choice);
		}
		again = 0;
	}
}

void ChooseEvent(Everdell* p) {
	int numEvents = 0, choice = 0, again = 0;

	numEvents = p->getNumSpecialEvents();

	for (int i = 0; i < numEvents; i++) {
		while (again != 1) {
			cout << "Please enter event card #" << i + 1 << endl;
			choice = p->EventMenu();
			again = p->EventCalculator(choice);
		}
		again = 0;
	}
}

void ChooseEventPearlbrook(Everdell* p) {
	int numEvents = 0, choice = 0, again = 0;

	numEvents = p->getNumSpecialEvents();

	for (int i = 0; i < numEvents; i++) {
		while (again != 1) {
			cout << "Enter special event card #" << i + 1 << endl;
			choice = p->PearlbrookEventMenu();
			again = p->EventCalculator(choice);
		}
		again = 0;
	}
}

void ChooseAdornment(Everdell* p) {
	int numAdornment = 0, choice = 0, again = 0;

	numAdornment = p->getNumAdornments();

	for (int i = 0; i < numAdornment; i++) {
		while (again != 1) {
			cout << "Enter adornment #" << i + 1 << endl;
			choice = p->AdornmentMenu();
			again = p->AdornmentCalculator(choice);
		}
		again = 0;
	}
}