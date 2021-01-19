// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "app.h"
//Declare the application class
class MyApp : public wxApp
{
public:
    //Called on application startup
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);

//DECLARE_APP(MyApp);
bool MyApp::OnInit()
{
    // Create the main application window
    AppFrame* frame = new AppFrame(NULL);

    // Show it
    frame->Show(true);

    // Start the event loop
    return true;
}
