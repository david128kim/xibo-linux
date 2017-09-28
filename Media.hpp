#ifndef MEDIA_HPP
#define MEDIA_HPP

#include <wx/window.h>


class Media : public wxEvtHandler
{
public:
   Media() = default;
   virtual void InitRender(wxWindow* parent, const wxPoint& pos, const wxSize& size) = 0;
   virtual void Hide() = 0;
   virtual void Show() = 0;

};

#endif // MEDIA_HPP
