// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "MessageUI.h"

Fl_Menu_Item MessageUI::menu_[] = {
 {"Clear", 0,  (Fl_Callback*)cb_MessageClear, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0}
};
MessageUI::MessageUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _MessageUI();
}

MessageUI::MessageUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _MessageUI();
}

MessageUI::MessageUI()
  : Fl_Double_Window(0, 0, 400, 250, "Message Window") {
  clear_flag(16);
  _MessageUI();
}

void MessageUI::_MessageUI() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 400, 20);
  o->labelsize(12);
  o->textsize(12);
  o->menu(menu_);
} // Fl_Menu_Bar* o
{ logDisplay = new Fl_Text_Display(0, 20, 400, 230);
  logDisplay->labelsize(12);
  logDisplay->textfont(4);
  logDisplay->textsize(12);
  Fl_Group::current()->resizable(logDisplay);
} // Fl_Text_Display* logDisplay
xclass("psdebug.mwin");
end();
}

void MessageUI::init_text() {
  text = new Fl_Text_Buffer;
  logDisplay->buffer( text );
}
