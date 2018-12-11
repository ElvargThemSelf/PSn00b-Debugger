// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "SettingsUI.h"

void SettingsUI::cb_Cancel_i(Fl_Button*, void*) {
  hide();
}
void SettingsUI::cb_Cancel(Fl_Button* o, void* v) {
  ((SettingsUI*)(o->parent()))->cb_Cancel_i(o,v);
}
SettingsUI::SettingsUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _SettingsUI();
}

SettingsUI::SettingsUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _SettingsUI();
}

SettingsUI::SettingsUI()
  : Fl_Double_Window(0, 0, 400, 250, "Debugger Settings") {
  clear_flag(16);
  _SettingsUI();
}

void SettingsUI::_SettingsUI() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fl_Button* o = new Fl_Button(257, 220, 64, 20, "Ok");
  o->tooltip("cb_SettingsOk");
  o->labelsize(12);
  o->callback((Fl_Callback*)cb_SettingsOkay);
} // Fl_Button* o
{ Fl_Button* o = new Fl_Button(326, 220, 64, 20, "Cancel");
  o->labelsize(12);
  o->callback((Fl_Callback*)cb_Cancel);
} // Fl_Button* o
{ Fl_Tabs* o = new Fl_Tabs(10, 10, 385, 200);
  { Fl_Group* o = new Fl_Group(10, 30, 380, 180, "General");
    o->labelsize(12);
    { loadSymbolsCheck = new Fl_Check_Button(20, 40, 365, 15, "Always load symbols file when selecting PS-EXE");
      loadSymbolsCheck->tooltip("Loads a symbols file if available without asking.");
      loadSymbolsCheck->down_box(FL_DOWN_BOX);
      loadSymbolsCheck->labelsize(12);
    } // Fl_Check_Button* loadSymbolsCheck
    { autoMinimizeCheck = new Fl_Check_Button(20, 60, 365, 15, "Auto minimize child windows");
      autoMinimizeCheck->tooltip("Minimize child windows when main window is minimized.");
      autoMinimizeCheck->down_box(FL_DOWN_BOX);
      autoMinimizeCheck->labelsize(12);
    } // Fl_Check_Button* autoMinimizeCheck
    { symDissCheck = new Fl_Check_Button(20, 80, 365, 15, "Show Symbol names in disassembler");
      symDissCheck->down_box(FL_DOWN_BOX);
      symDissCheck->labelsize(12);
    } // Fl_Check_Button* symDissCheck
    { symMemCheck = new Fl_Check_Button(20, 100, 365, 15, "Show Symbol names in memory browser");
      symMemCheck->down_box(FL_DOWN_BOX);
      symMemCheck->labelsize(12);
    } // Fl_Check_Button* symMemCheck
    o->end();
  } // Fl_Group* o
  { Fl_Group* o = new Fl_Group(10, 30, 380, 180, "Comms");
    o->labelsize(12);
    o->hide();
    { Fl_Group* o = new Fl_Group(20, 55, 365, 40, "Communication");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { serialChoice = new Fl_Input_Choice(90, 64, 285, 21, "Serial Port");
        serialChoice->labelsize(12);
        serialChoice->textsize(12);
      } // Fl_Input_Choice* serialChoice
      o->end();
    } // Fl_Group* o
    o->end();
  } // Fl_Group* o
  { Fl_Group* o = new Fl_Group(10, 30, 385, 180, "Debugging");
    o->labelsize(12);
    o->hide();
    { bpcBreakToggle = new Fl_Check_Button(20, 40, 365, 15, "Pause program on entrypoint");
      bpcBreakToggle->tooltip("Pauses the program at its entrypoint.");
      bpcBreakToggle->down_box(FL_DOWN_BOX);
      bpcBreakToggle->labelsize(12);
    } // Fl_Check_Button* bpcBreakToggle
    { ramExpEnable = new Fl_Check_Button(20, 60, 215, 15, "Allow RAM expansion browsing");
      ramExpEnable->tooltip("Allow browsing the contents of expansion region 3 starting at 0x1FA00000 whic\
h was intented for a RAM expansion cartridge on the Parallel I/O port. Memory \
registers on the console side may have to be configured first.");
      ramExpEnable->down_box(FL_DOWN_BOX);
      ramExpEnable->labelsize(12);
      ramExpEnable->callback((Fl_Callback*)cb_SettingsExpToggle);
    } // Fl_Check_Button* ramExpEnable
    { ramExpSize = new Fl_Value_Input(326, 60, 59, 15, "RAM Size (KB)");
      ramExpSize->tooltip("Specifies the size of the installed RAM expansion.");
      ramExpSize->labelsize(12);
      ramExpSize->textsize(12);
      ramExpSize->deactivate();
    } // Fl_Value_Input* ramExpSize
    { ram8mbEnable = new Fl_Check_Button(20, 80, 365, 15, "Allow 8MB RAM browsing");
      ram8mbEnable->tooltip("Allow browsing up to 8MB of RAM instead of 2MB for targets with 8MB of DRAM p\
resent. If only 2MB is present anything beyond 2MB mirrors the first 2MB.");
      ram8mbEnable->down_box(FL_DOWN_BOX);
      ram8mbEnable->labelsize(12);
    } // Fl_Check_Button* ram8mbEnable
    { Fl_Group* o = new Fl_Group(21, 155, 364, 40, "Debug Patch File (for LITELOAD 1.1 or newer)");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { patchFileToggle = new Fl_Light_Button(30, 165, 63, 20, "Enable");
        patchFileToggle->labelsize(12);
        patchFileToggle->callback((Fl_Callback*)cb_SettingsPatchToggle);
      } // Fl_Light_Button* patchFileToggle
      { patchGroup = new Fl_Group(95, 164, 279, 21);
        patchGroup->deactivate();
        { patchFileInput = new Fl_Input(102, 164, 239, 21);
          patchFileInput->labelsize(12);
          patchFileInput->textsize(12);
        } // Fl_Input* patchFileInput
        { Fl_Button* o = new Fl_Button(349, 165, 25, 20, "...");
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_SettingsBrowsePatch);
        } // Fl_Button* o
        patchGroup->end();
      } // Fl_Group* patchGroup
      o->end();
    } // Fl_Group* o
    o->end();
  } // Fl_Group* o
  o->end();
} // Fl_Tabs* o
set_modal();
xclass("psdebug.settings");
end();
}
