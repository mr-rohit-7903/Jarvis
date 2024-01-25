#include<iostream>
#include<conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main(){

    int a, l=0;

    do{
        // Main Screen
        cout<<"Hello Rohit, I am JARVIS your personal assistant. How can I assist you today ?\n\n";

        HINSTANCE open_aud0 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Hello.vbs", NULL, NULL, SW_SHOWNORMAL);

        cout<<"1. Open Browser\n";
        cout<<"2. Open Youtube\n";
        cout<<"3. Open Whatsapp\n";
        cout<<"4. Open File Manager\n";
        cout<<"5. Open VS Code\n";
        cout<<"6. Open Notepad\n";
        cout<<"7. Open CSS Projects\n";
        cout<<"8. Open Netflix\n";
        cout<<"9. Open Anydesk\n";
        cout<<"10. Sambit ko gali do\n";
        cout<<"11. Open Project JARVIS \n\n";

        cout<<"Please Enter: ";
        cin>>a;

        // Open Browser
        if(a==1){
            HINSTANCE open_App1 = ShellExecute(NULL, "open", "C:\\Program Files\\BraveSoftware\\Brave-Browser\\Application\\brave.exe" , NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud1 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Browser.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Youtube
        else if(a==2){
            HINSTANCE open_App2 = ShellExecute(NULL, "open", "https:\\www.youtube.com", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud2 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\youtube.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Whatsapp
        else if(a==3){
            HINSTANCE open_App3 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\WhatsApp.lnk", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud3 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\whatsapp.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open File Manager
        else if(a==4){
            HINSTANCE open_App4 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\Downloads", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud4 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\File manager.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open VS Code
        else if(a==5){
            HINSTANCE open_App5 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud5 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\VS Code.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Notepad
        else if(a==6){
            HINSTANCE open_App6 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\NotePad.lnk", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud6 = ShellExecute(NULL, "open","C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Notepad.vbs" , NULL, NULL, SW_SHOWNORMAL);
        }

        // Open CSS Projects
        else if(a==7){
            HINSTANCE open_App7 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\Web Development Workshop\\CSS Projects", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud7 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Css projects.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Netflix
        else if(a==8){
            HINSTANCE open_App8 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\Netflix.lnk", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud8 = ShellExecute(NULL, "open","C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Netflix.vbs" , NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Anydesk
        else if(a==9){
            HINSTANCE open_App9 = ShellExecute(NULL, "open", "C:\\Users\\Public\\Desktop\\AnyDesk.lnk", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud9 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\AnyDesk.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Sambit ko gali de rahe hai
        else if(a==10){
            HINSTANCE open_gali1 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\sambit\\lode.vbs", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_gali2 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\sambit\\sambit.vbs", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_gali3 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\sambit\\bhosda.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        // Open Project JARVIS
        else if(a==11){
            HINSTANCE open_App10 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis", NULL, NULL, SW_SHOWNORMAL);
            HINSTANCE open_Aud10 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Project Jarvis.vbs", NULL, NULL, SW_SHOWNORMAL);
        }

        else{
            HINSTANCE open_Aud10 = ShellExecute(NULL, "open", "C:\\Users\\ROHIT BEJ\\OneDrive\\Desktop\\C++ Projects\\Jarvis\\audio pack\\Not found.vbs", NULL, NULL, SW_SHOWNORMAL);
            l=1;
            system("cls"); 
        }

    }while(l==1);

}   
