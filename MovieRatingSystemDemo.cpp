//Movie rating app
#include <iostream> 
using namespace std;

//void fuction to display movies
void displayMovies()
{
    cout << "Welcome to the phoenix movie rating system \n";
    cout << "Choose levels from 1(worse) to 5(best) \n";
    cout << "Choose from the movies below which one you'd like to rate: "<<endl;
    cout <<endl<< "1. Spiderman - Far From Home" << endl;
    cout << "2. Avengers - End game" << endl;
    cout << "3. Captain America - Civil War" << endl;
    cout << "4. Murder Mystery 2" << endl;
    cout << "5. Transformers - Rise Of The Beasts" << endl;
}

//Function for choosing a movie from an array of movies
string chooseMovie(int movieNum)
{
 string movieSelect[] = {"Spiderman - Far From Home", "Avengers - End game", "Captain America - Civil War",
 "Murder Mystery 2", "Transformers - Rise Of The Beasts"};
 
 if (movieNum >= 1 && movieNum <= 5)
    return(movieSelect[movieNum - 1]);
}

//Function for selecting a rate ranging from 1-5 which will give the rating level as poor, average or great
string rate(int level)
{
    string rated;

    if (level == 1 && level <=2)
    {
        rated = "Poor";
    }
    if(level > 2 && level <= 4)
    {
        rated = "Average";
    }
    if (level == 5)
    {
        rated = "Great";
    }
    return rated;
}


int main()
{
    int selectMovie;
    displayMovies();
    
    cout <<endl<< "Choose a movie to rate: ";
    cin >> selectMovie;
    
    cout <<chooseMovie(selectMovie);
    
    int rating;
    cout <<endl<< "How do you rate this movie (Choose integers from 1-5): ";
    cin >> rating;

    //Looping for rate if the invalid level is given by the user
    while(rating <= 0)
    {
        cout << "Please enter integer numbers from 1-5: ";
        cin >> rating;
    }
    
    cout <<endl<< "Movie choosen is "<<chooseMovie(selectMovie) << " and is rated ";
    cout << rate(rating) << endl;
    
    return 0;
}
