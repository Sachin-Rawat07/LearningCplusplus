#include<bits/stdc++.h>
using namespace std;
  long long cntGood(string S) {
        // code here
        int count=0;
        
        for(int i=0;i<S.length();i++){
            if ((S[i] - '0') % 2 == 1) {
            // If it's odd, count all substrings that end with this character
            count += (i + 1); // There are (i + 1) substrings ending at position i
        }
        }
        
    return count;    
    }
int main(){
     string S= "201";//S=4223395050527984639840349583049755112161857785870700650978964717659316673076691725049721801958586672380043313060199061748527185138090033842890402863716158584987567739836087796576366263983531890628070573064997013270660283958586047298482920206997071904080385195687627954254827059261556419442325022552402575027569882880003557189947300046889604068755175488953568359346862811497814527083361398484821812206219202763804980096853861437274784915467471995320745964009611382470387028735783157841243519597785782796994165744812688699531029066908189254009623868317977161421267922169058288213556384408134571864284546424021161913572157413310303494477953667864692774577428443136280722373279547331342930856242563956581315072393408";
    long long ans =cntGood(S);
    cout<<ans<<endl;
return 0;
}