#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

				double weight, proteinNeeded, w, womenProteinNeeded;
				string name;
				char gender;

				cout << "Hey Friend! What's your name?" << endl;
				getline(cin, name);
				cout << "\n\nNice to meet you " << name << ", \nIf you want to know how much protein your body would love to have stored within it each day, \njust type in 'M' if your a male, or type in 'F' if your a female.\n\n" << endl;
				cin >>gender;
				cout << "\n\nGreat! First let's get the technical stuff out of the way.\n\n" << endl;
				cout << "\n\nThe DRI (Dietary Referance Intake) is 0.36 grams per pound." << endl;
				cout << "\n\nAlso, keep in mind that women need only 82% of the protein that men require.\n\n" << endl;

				cout << "How much do you weigh in pounds?" << endl;
				cin >>w;

				proteinNeeded = w*0.36;
				womenProteinNeeded = (w*0.36)*0.82;

				if(gender =='M' || gender == 'm'){

				cout << "\n\nYou body requires " << setprecision(2) << fixed << proteinNeeded << " grams of protein every day." << endl;
				}
				else{
				cout << "\n\nYou body requires " << setprecision(2) << fixed << womenProteinNeeded << " grams of protein every day.\n\n" << endl;
				}

				if(proteinNeeded > 50 || womenProteinNeeded > 48){

				cout << "\n\nMaybe today you would benefit from adding a cup of peas to your meal that would add\n7.9 grams of protein.\n\n A serving of quinoa would provide 8 grams.\n\n Don't forget your almonds, cashews and pistachios would provide\n 6 grams per ounce.\n\n Go for the a black bean patty or beans any way you'd like today,\n two cups is good for 25 grams!\n\n Finish it with a nice hummus spread made from chickpeas for an additional 7.3 grams of protein in just a half cup.\n\n Say no to meats and Yes! to Green Treats!\n";
    }
				else{

								cout << "\n\nToday maybe a day to add tempeh or tofu to your meal that would add\n 20 grams of protein.\n\n Going out for sushi tonigh? An appetizer of edamame would provide 8.4 grams per half cup.\n\n Leafy greens may work, one cup of broccoli would provide 8.1 grams of the good stuff.\n\n You seen to be on the lighter side, if you want more bang for your buck, go with HEMP.\n hemp seeds pack 10 grams of protein in three tablespoons!.\n\n If an apple a day keeps the doctor away, then I guess I'm keeping everyone away. = ) \n";
				}


				return 0;
}
