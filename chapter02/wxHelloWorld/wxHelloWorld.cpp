// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
//Declare the application class
class MyApp : public wxApp
{
public:
    //Called on application startup
    virtual bool OnInit();
};

//	Declare our main frame class
class MyFrame : public wxFrame
{
public:
    MyFrame();
private:
    // Event handlers
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};
enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(MyApp);

//DECLARE_APP(MyApp);
bool MyApp::OnInit()
{
    // Create the main application window
    MyFrame* frame = new MyFrame();

    // Show it
    frame->Show(true);

    // Start the event loop
    return true;
}
MyFrame::MyFrame()
    : wxFrame(NULL, wxID_ANY, _T("Trải nghiệm ứng dụng với wxWidget"))
{
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, wxT("&Hello...\tCtrl-H"),
        wxT("Explanation in status bar for this menu item"));
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}
void MyFrame::OnExit(wxCommandEvent& event)
{
    // Destroy the frame
    Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox(_T("Đây là ứng dụng dùng wxWidgets"),
        wxT("Giới thiệu"), wxOK | wxICON_INFORMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}