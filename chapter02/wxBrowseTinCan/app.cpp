///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "app.h"

///////////////////////////////////////////////////////////////////////////

AppFrame::AppFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	m_statusBar1 = this->CreateStatusBar(1, wxSTB_SIZEGRIP, wxID_ANY);
	m_menubar1 = new wxMenuBar(0);
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("&Quit")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem1);

	m_menubar1->Append(m_menu1, wxT("File"));

	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem(m_menu2, wxID_ANY, wxString(wxT("&About")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem2);

	m_menubar1->Append(m_menu2, wxT("Help"));

	this->SetMenuBar(m_menubar1);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	m_scrolledWindow1 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
	m_scrolledWindow1->SetScrollRate(5, 5);
	bSizer1->Add(m_scrolledWindow1, 1, wxEXPAND | wxALL, 5);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);
}

AppFrame::~AppFrame()
{
}
