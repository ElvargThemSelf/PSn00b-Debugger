// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "SourceUI.h"
SourceUI::SourceUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _SourceUI();
}

SourceUI::SourceUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _SourceUI();
}

SourceUI::SourceUI()
  : Fl_Double_Window(0, 0, 540, 540, "Source Code") {
  clear_flag(16);
  _SourceUI();
}

void SourceUI::_SourceUI() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fl_Group* o = new Fl_Group(0, 0, 601, 20);
  { sourceFileChoice = new Fl_Choice(28, 0, 512, 20, "File");
    sourceFileChoice->down_box(FL_BORDER_BOX);
    sourceFileChoice->labelsize(12);
    sourceFileChoice->textsize(12);
    Fl_Group::current()->resizable(sourceFileChoice);
  } // Fl_Choice* sourceFileChoice
  o->end();
} // Fl_Group* o
{ sourceBrowser = new Fl_Source_Browser(0, 20, 540, 520);
  sourceBrowser->type(2);
  sourceBrowser->box(FL_NO_BOX);
  sourceBrowser->color(FL_BACKGROUND2_COLOR);
  sourceBrowser->selection_color(FL_SELECTION_COLOR);
  sourceBrowser->labeltype(FL_NORMAL_LABEL);
  sourceBrowser->labelfont(0);
  sourceBrowser->labelsize(14);
  sourceBrowser->labelcolor(FL_FOREGROUND_COLOR);
  sourceBrowser->textfont(4);
  sourceBrowser->textsize(12);
  sourceBrowser->callback((Fl_Callback*)cb_sourceBrowser);
  sourceBrowser->align(Fl_Align(FL_ALIGN_BOTTOM));
  sourceBrowser->when(FL_WHEN_RELEASE_ALWAYS);
  Fl_Group::current()->resizable(sourceBrowser);
} // Fl_Source_Browser* sourceBrowser
xclass("psdebug.source");
end();
}