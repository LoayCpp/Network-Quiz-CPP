#pragma once
#include <iostream>
#include"clsUtil.h"
using namespace std;
class clsScreen
{

protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout<<clsUtil::Tabs(5) <<"___________________________________________";
        cout << "\n\n"<< clsUtil::Tabs(7) << Title;
        if (SubTitle != "")
        {
            cout << "\n "<< clsUtil::Tabs(6) << SubTitle;
        }
        cout << "\n"<<clsUtil::Tabs(5) <<"___________________________________________\n\n";
    }


	
};

