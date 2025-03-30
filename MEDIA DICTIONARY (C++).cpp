#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string word;
        cout << "Say a media-related word: ";
        cin >> word;
        
        // Convert input to uppercase
        for (char &c : word) {
            c = toupper(c);
        }
        
        if (word == "BROADCASTING") {
            cout << "TRANSMITTING AUDIO OR VIDEO CONTENT TO A WIDE AUDIENCE" << endl;
        } else if (word == "JOURNALISM") {
            cout << "THE ACT OF GATHERING, WRITING, AND REPORTING NEWS" << endl;
        } else if (word == "PODCAST") {
            cout << "DIGITAL AUDIO FILES AVAILABLE FOR STREAMING OR DOWNLOAD" << endl;
        } else if (word == "VIRAL") {
            cout << "CONTENT THAT RAPIDLY SPREADS ONLINE" << endl;
        } else if (word == "CENSORSHIP") {
            cout << "SUPPRESSION OR CONTROL OF MEDIA CONTENT" << endl;
        } else if (word == "INFOTAINMENT") {
            cout << "MEDIA CONTENT THAT COMBINES INFORMATION AND ENTERTAINMENT" << endl;
        } else if (word == "PROPAGANDA") {
            cout << "MEDIA USED TO INFLUENCE PUBLIC OPINION" << endl;
        } else if (word == "SUBTITLE") {
            cout << "TEXT DISPLAYED TO TRANSLATE OR TRANSCRIBE AUDIO" << endl;
        } else if (word == "LIVE STREAM") {
            cout << "REAL-TIME BROADCAST OVER THE INTERNET" << endl;
        } else if (word == "MEME") {
            cout << "IMAGE OR VIDEO WITH HUMOROUS OR SATIRICAL TEXT" << endl;
        } else if (word == "VLOG") {
            cout << "A VIDEO-BASED BLOG" << endl;
        } else if (word == "PRESS RELEASE") {
            cout << "OFFICIAL STATEMENT GIVEN TO NEWS OUTLETS" << endl;
        } else if (word == "MEDIA LITERACY") {
            cout << "THE ABILITY TO ANALYZE AND UNDERSTAND MEDIA CONTENT" << endl;
        } else if (word == "INFLUENCER") {
            cout << "A PERSON WHO IMPACTS AUDIENCE OPINIONS VIA SOCIAL MEDIA" << endl;
        } else if (word == "CITIZEN JOURNALISM") {
            cout << "NEWS REPORTED BY THE PUBLIC RATHER THAN PROFESSIONALS" << endl;
        } else if (word == "ALGORITHM") {
            cout << "COMPUTER PROGRAMMING THAT DETERMINES MEDIA CONTENT VISIBILITY" << endl;
        } else if (word == "STREAMING") {
            cout << "REAL-TIME PLAYBACK OF AUDIO OR VIDEO WITHOUT DOWNLOADING" << endl;
        } else if (word == "PAYWALL") {
            cout << "RESTRICTED CONTENT REQUIRING PAYMENT FOR ACCESS" << endl;
        } else if (word == "CLICKBAIT") {
            cout << "SENSATIONALIZED HEADLINES TO DRIVE TRAFFIC" << endl;
        } else if (word == "DEEPFAKE") {
            cout << "AI-GENERATED MEDIA THAT MANIPULATES REALITY" << endl;
        } else if (word == "EDITING") {
            cout << "THE PROCESS OF REFINING AND ADJUSTING MEDIA CONTENT" << endl;
        } else if (word == "PHOTOJOURNALISM") {
            cout << "STORYTELLING THROUGH IMAGES" << endl;
        } else if (word == "MEDIA MONOPOLY") {
            cout << "DOMINATION OF MEDIA OUTLETS BY A FEW COMPANIES" << endl;
        } else if (word == "FAKE NEWS") {
            cout << "FALSE OR MISLEADING INFORMATION SPREAD AS NEWS" << endl;
        } else if (word == "RADIO BROADCAST") {
            cout << "AUDIO TRANSMISSION OVER RADIO WAVES" << endl;
        } else if (word == "SATELLITE TELEVISION") {
            cout << "TV CONTENT TRANSMITTED VIA SATELLITE" << endl;
        } else if (word == "NET NEUTRALITY") {
            cout << "PRINCIPLE OF EQUAL ACCESS TO ONLINE CONTENT" << endl;
        } else if (word == "PRINT MEDIA") {
            cout << "PHYSICAL PUBLICATIONS SUCH AS NEWSPAPERS AND MAGAZINES" << endl;
        } else if (word == "SENSATIONALISM") {
            cout << "EXAGGERATED OR SHOCKING MEDIA CONTENT TO GAIN ATTENTION" << endl;
        } else if (word == "PRIVACY POLICY") {
            cout << "GUIDELINES ON DATA COLLECTION AND USAGE IN MEDIA" << endl;
        } else {
        	cout << "Word not found" << endl;
		}
    }
    return 0;
} 
