#include "bibleProject.h"

Christian::Christian(){

   favorVerses.resize(GODS_NUMBER);
   quizScores.resize(GODS_NUMBER);
   favoriteBook = "";
   m_name = "";
   BibleChoice = nullptr;
}

Christian::Christian(string name, string favBook){

   favorVerses.resize(GODS_NUMBER);
   quizScores.resize(GODS_NUMBER);
   favoriteBook = favBook;
   SetName(name);
   BibleChoice = nullptr;
}

Christian::~Christian(){

   if(BibleChoice != nullptr){
      delete BibleChoice;
      BibleChoice = nullptr;
   }
}

Christian::Christian(Christian& rhs){

   // Checks if there are any favorites verses stored in the rhs object.
   for(int i = 0; i < int(favorVerses.size()); i++){

      favorVerses[i] = rhs.favorVerses[i];
   }

   // Checks if there are any quiz scores stored in the rhs object.
   for(int i = 0; i < int(quizScores.size()); i++){
      
      quizScores[i] = rhs.quizScores[i];
   }

   favoriteBook = rhs.favoriteBook;
   SetName(rhs.m_name);
   BibleChoice = new Bible(rhs.BibleChoice->bibleVersion, rhs.BibleChoice->bibleAge);
}

Christian& Christian::operator=(const Christian& rhs){

   if(this != &rhs){

      // Checks if there are any favorites verses stored in the rhs object.
      for(int i = 0; i < int(favorVerses.size()); i++){

         favorVerses[i] = rhs.favorVerses[i];
      }

      // Checks if there are any quiz scores stored in the rhs object.
      for(int i = 0; i < int(quizScores.size()); i++){
         
         quizScores[i] = rhs.quizScores[i];
      }

      favoriteBook = rhs.favoriteBook;
      SetName(rhs.m_name);
      BibleChoice = new Bible(rhs.BibleChoice->bibleVersion, rhs.BibleChoice->bibleAge);

   }

   return *this;
}

string Christian::GetName(){
   return m_name;
}

void Christian::SetName(string name){
   m_name = name;
}

string Christian::GetFavBook(){
   return favoriteBook;
}

void Christian::SetFavBook(string name){
   favoriteBook = name;
}

void Christian::soulWinningScript(){

   cout << "To begin..." << endl;

   this_thread::sleep_for(chrono::seconds(7));
   cout << "Has anyone ever told you that God loves you and he has a wonderful plan for your life?" << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "God Forbid, if you were to die this very second, do you know for sure that you would go to Heaven?" << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Now I would of course like to say God Bless you and your family." << endl;

   this_thread::sleep_for(chrono::seconds(2));
   cout << "Let me quickly share with you what The Holy Bible reads." << endl;

   this_thread::sleep_for(chrono::seconds(4));
   cout << "It reads \" for all have sinned and come short of the glory of God\" " << endl;

   this_thread::sleep_for(chrono::seconds(4));
   cout << "and \" for the wages of sin is death, but the gift of God is eternal life through Jesus Christ our Lord\". " << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << " The Bible also reads "
      << "\" for whosoever shall call upon the name of The Lord shall be saved! \" " << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << " Say this prayer after me with your heart and lips out loud.." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Jesus, come into my heart. Forgive me of my sin." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Jesus, thank you that You died for me." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "I believe that You are risen from the dead and that You're coming back again for me." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Lord, feel me with The Holy Spirit. I want to fulfill the calling you have for my life." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Give me a passion for the lost and a hunger for the things of God." << endl;

   this_thread::sleep_for(chrono::seconds(3));
   cout << "Amen!" << endl;

   this_thread::sleep_for(chrono::seconds(4));
   cout << " Now please, live your life for Christ like He did for you. " 
      <<  "tap into a local Church and pray and read The Holy Bible Daily!" << endl;
}

Bible::Bible(){
   bibleAge = 0;
   bibleVersion = "";
}

Bible::Bible(string version, int bibAge){
   bibleAge = bibAge;
   bibleVersion = version;
}

Bible::~Bible(){}

string Bible::GetVersion(){
   return bibleVersion;
}

void Bible::SetVersion(string name){
   bibleVersion = name;
}

bool Bible::checkVersion(string name){

   return false;
}

int Bible::GetAge(){
   return bibleAge;
}

void Bible::SetAge(int age){
   bibleAge = age;
}

Bible::Bible(const Bible& rhs){

   bibleVersion = rhs.bibleVersion;
   bibleAge = rhs.bibleAge;
}

Bible& Bible::operator=(Bible& rhs){

   if(this != &rhs){ 
      bibleVersion = rhs.bibleVersion;
      bibleAge = rhs.bibleAge;
   }
   return *this;
}

