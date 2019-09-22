/************************************************************************
 *                      Vector of Objects 
 * 
 *         Combining classes and vectors can be a powerful thing 
 *         This program creates a review class to give gthe reviews
 *                  and comments on a Restuarant 
 * 
************************************************************************/


#include <iostream> 
#include <string>
#include <vector> 

using namespace std; 

class Review{

    public:
        void SetRatingAndComment(int revRating, string revComment){
            rating = revRating;
            comment = revComment; 
        }

        int GetRating() const {return rating; }
        string GetComment() const {return comment;}

    private:
        int rating = -1;
        string comment = "No Comment";
};//End of Review Class 


class Reviews{

    public:
        void InputReviews();
        void PrintCommentsForRating(int currRating) const; 
        int GetAverageRating() const; 
    
    private:
        vector<Review> reviewList;
};

//Get rating comment pairs, add each to list 

void Reviews::InputReviews() {
    Review currReview;
    int currRating;
    string currComment;

    cin >> currRating;

    while( currRating >= 0){
        getline(cin, currComment); //Gets the rest of the line
        currReview.SetRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        cin >> currRating; 
    }
}

//Print all comments for reviews having the given rating 
void Reviews::PrintCommentsForRating(int currRating) const {
    Review currReview;
    unsigned int i;

    for(i = 0; i<reviewList.size(),++1) {
        currReview = reviewList.at(i);

        if(currRating == currReview.GetRating()) {
            cout << currReview.GetComment() << endl;
        }
    }
}

int Reviews::GetAverageRating() const {
    int ratingSum;

    unsigned int i;

    for(i = 0; i< reviewList.size(); ++i){
        ratingSum += reviewList.at(i).GetRating();
    }

    return (ratingSum / reviewList.size());
}//End Review Class 


int main()
{
    Reviews allReviews;
    string currName;
    int currRating;

    cout << "Type ratings + comments. To end: -1" << endl;
    allReviews.InputReviews();

    cout << endl << "Average rating: ";
    cout << allReviews.GetAverageRating() << endl; 

    //Output all comments for given rating 
    cout << endl << "Average rating: ";
    cout << allReviews.PrintCommentsForRating(currRating); 
    cin >> currRating;

    while(currRating != -1) {
        allReviews.PrintCommentsForRating(currRating);
    }

    return 0;
}
