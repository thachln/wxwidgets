///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/scrolwin.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class AppFrame
///////////////////////////////////////////////////////////////////////////////
class AppFrame : public wxFrame
{
private:

protected:
	wxStatusBar* m_statusBar1;
	wxMenuBar* m_menubar1;
	wxMenu* m_menu1;
	wxMenu* m_menu2;
	wxScrolledWindow* m_scrolledWindow1;

public:

	AppFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Phát triển bằng wxFormBuilder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~AppFrame();

};

