#include <iostream>
#include "Calculator.h"
#include "BestHitCalculator.h"
#include "iomanip""
using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double g = 0.0;
    double d = 0.0;
    double e = 0.0;
    double f = 0.0;
    double h = 0.0;
    double i = 0.0;
    double j = 0.0;
    double k = 0.0;
    double l = 0.0;
    double m = 0.0;
    double n = 0.0;
    double o = 0.0;
    double p = 0.0;
    double q = 0.0;
    double playerLevel = 0.0;
    double prophetLevel = 0.0;
    double swordsLevel = 0.0;
    double flameLevel = 0.0;
    double titanSlevel = 0.0;
    double titanClevel = 0.0;
    double ogmarlLevel = 0.0;
    double snowqueenLevel = 0.0;
    double cameraLevel = 0.0;
    double auraPerc = 0.0;
    double auraLevel = 0.0;
    double swordLevel = 0.0;
    double endBoost = 0.0;
    double owned = 0.0;
    double equipped = 0.0;
    double heroCount = 0.0;
    double totalStats = 0.0;
    double drillMaster = 0.0;
    double equipStat1 = 0.0;
    double equipStat2 = 0.0;
    char oper = '+';



    

    
    
    

    cout << "Welcome to Best Hit Calculator for Sword Warriors!" << endl;
    cout << "This calculator only works if you have completed World 5!" << endl << endl;
    cout << "Please enter your Player Level" << endl;

    Calculator c;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            cout << "Player Level Cannot Be 0" << endl;
            continue;
        }
        else
        {
            playerLevel = a - 1;
        }
        cout << "Prophet Level" << endl;
        cin >> b;
        prophetLevel = b;
        cout << "Swordman Level" << endl;
        cin >> g;
        swordsLevel = g;
        
        cout << "Titan Speakerman Level" << endl;
        cout << "If not owned, just put 0" << endl;
        cin >> e;
        titanSlevel = e;
        
        cout << "Ogmarl Level" << endl;
        cout << "If not owned, just put 0" << endl;
        cin >> h;
        ogmarlLevel = h;
        cout << "Snow Queen Level" << endl;
        cout << "If not owned, just put 0" << endl;
        cin >> i;
        snowqueenLevel = i;
        
        cout << "Aura +?% Attack" << endl;
        cout << "If no Aura, or if HP Aura just put 0 (Don't use % symbol)" << endl;
        cin >> l;
        auraPerc = l;
        cout << "Aura Attack Stat" << endl;
        cout << "If no Aura, or if HP Aura just put 0" << endl;
        cin >> m;
        auraLevel = m;
        cout << "What is your best sword's attack?" << endl;
        cin >> n;
        swordLevel = n;
        cout << "What is your Sword's Endless boost?" << endl;
        cout << "If none, just put 0" << endl;
        cin >> o;
        endBoost = o;
        cout << "How many heroes can you equip?" << endl;
        cin >> p;
        if (p > 2)
        {
            cout << "You cannot equip more than Two Heroes!" << endl;
            continue;
        }
        else
        {
            heroCount = p;
        }
        cout << "What is your Drill Master Level?" << endl;
        cin >> q;
        if (q > 13)
        {
            cout << "Invalid Number" << endl;
            continue;
        }
        else
        {
            drillMaster = q;
        }
        if (drillMaster <= 8)

            drillMaster = drillMaster + 2;
        else
        {
            drillMaster = 3 * drillMaster - 14;
        }
        cout << "Drill MAster Multiplier is" << drillMaster << endl;
        if (heroCount == 1)
        {

            cout << "What is the highest Attack Equip Bonus your Hero has?" << endl;
            cin >> equipStat1;
        }
        else
        {
            cout << "What is the highest Attack Equip Bonus your Heroes have?" << endl;
            cin >> equipStat1;
            cout << "What is the second highest Attack your Heroes have?" << endl;
            cin >> equipStat2;
        }

        owned = prophetLevel + swordsLevel + titanSlevel + ogmarlLevel + snowqueenLevel;
        cout << "Owned Total = " << owned << endl;
            totalStats = owned + equipStat1 + equipStat2 + auraLevel + playerLevel;
         
            totalStats = totalStats * drillMaster;
            auraPerc = auraPerc / 100;
            endBoost = endBoost / 100;
            
            double extraPerc = totalStats * auraPerc + totalStats;
            
            double primPerc = swordLevel * auraPerc + swordLevel;
            
            double totalAtk = extraPerc + primPerc;
            
            double dragonBite = 13.33331;
            double bestHit = totalAtk * dragonBite;
            if (endBoost > 0)
            {
                bestHit = bestHit * endBoost + bestHit;
            }

            std::cout << "Your best hit is calculated to be " << setprecision(20) << bestHit << endl;






        


        
        
    }

    return 0;

}
