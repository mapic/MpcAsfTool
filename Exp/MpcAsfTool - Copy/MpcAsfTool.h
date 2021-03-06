#ifndef MPCASFTOOL_H
#define MPCASFTOOL_H

//(*Headers(MpcAsfTool)
#include <wx/scrolwin.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/clrpicker.h>
//*)

#include "WorkManager.hpp"

class MpcAsfTool: public wxFrame
{
	public:

		MpcAsfTool(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MpcAsfTool();

	private:

		//(*Declarations(MpcAsfTool)
		wxStaticText* StaticText10;
		wxSpinCtrl* SpinCtrl_ShadowAlpha;
		wxStaticText* StaticText22;
		wxStaticText* StaticText9;
		wxSpinCtrl* SpinCtrl_ShadowX;
		wxStaticText* StaticText20;
		wxStaticText* StaticText_Frame_Sum;
		wxStaticLine* StaticLine8;
		wxScrolledWindow* ScrolledWindow_BmpShow;
		wxButton* Button_UnDelete;
		wxSlider* Slider_Interval;
		wxCheckBox* CheckBox_LockFrame;
		wxStaticLine* StaticLine10;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxStaticLine* StaticLine6;
		wxRadioButton* RadioButton_AsfShadow;
		wxStaticText* StaticText14;
		wxRadioButton* RadioButton_MpcShadow;
		wxStaticText* StaticText6;
		wxStaticLine* StaticLine9;
		wxSpinCtrl* SpinCtrl_SunX;
		wxStaticText* StaticText19;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxStaticText* StaticText18;
		wxSlider* Slider_Frame;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxButton* Button_DeleteCurrentFrame;
		wxStaticLine* StaticLine7;
		wxButton* Button_AddFrames;
		wxStaticText* StaticText21;
		wxStaticLine* StaticLine4;
		wxStaticLine* StaticLine2;
		wxStaticText* StaticText23;
		wxColourPickerCtrl* ColourPickerCtrl_BaseColor;
		wxCheckBox* CheckBox_ShowShd;
		wxStaticText* StaticText5;
		wxMenuBar* MenuBar_MpcAsfTool;
		wxStaticText* StaticText7;
		wxSpinCtrl* SpinCtrl_SunY;
		wxSpinCtrl* SpinCtrl_Bottom;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine1;
		wxSpinCtrl* SpinCtrl_AlphaMask;
		wxSpinCtrl* SpinCtrl_ShadowY;
		wxStaticBitmap* StaticBitmap_Show;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxStaticText* StaticText_Interval;
		wxRadioButton* RadioButton_NoShadow;
		wxScrolledWindow* ScrolledWindow_Setting;
		wxSpinCtrl* SpinCtrl_GlobalHeight;
		wxStaticText* StaticText_CurrentFile;
		wxSpinCtrl* SpinCtrl_Frame_Goto;
		wxStaticText* StaticText17;
		wxStaticText* StaticText4;
		wxSpinCtrl* SpinCtrl_GlobalWidth;
		wxStaticText* StaticText_Frame_Cur;
		wxSpinCtrl* SpinCtrl_Left;
		wxStaticText* StaticText16;
		wxStaticLine* StaticLine5;
		wxSpinCtrl* SpinCtrl_Direction;
		//*)

	protected:

		//(*Identifiers(MpcAsfTool)
		static const long ID_STATICTEXT27;
		static const long ID_STATICBITMAP1;
		static const long ID_SCROLLEDWINDOW2;
		static const long ID_STATICTEXT19;
		static const long ID_STATICTEXT20;
		static const long ID_SLIDER_FRAME;
		static const long ID_STATICTEXT21;
		static const long ID_STATICTEXT24;
		static const long ID_SPINCTRL11;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT7;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_SPINCTRL12;
		static const long ID_STATICTEXT5;
		static const long ID_SPINCTRL4;
		static const long ID_STATICTEXT4;
		static const long ID_SLIDER1;
		static const long ID_STATICTEXT6;
		static const long ID_STATICLINE3;
		static const long ID_STATICTEXT8;
		static const long ID_STATICLINE4;
		static const long ID_CHECKBOX1;
		static const long ID_STATICLINE5;
		static const long ID_STATICTEXT9;
		static const long ID_STATICLINE6;
		static const long ID_STATICTEXT10;
		static const long ID_SPINCTRL3;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT25;
		static const long ID_STATICLINE9;
		static const long ID_STATICTEXT18;
		static const long ID_STATICLINE10;
		static const long ID_RADIOBUTTON3;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_CHECKBOX2;
		static const long ID_STATICTEXT11;
		static const long ID_SPINCTRL5;
		static const long ID_STATICTEXT12;
		static const long ID_SPINCTRL6;
		static const long ID_STATICTEXT14;
		static const long ID_SPINCTRL7;
		static const long ID_STATICTEXT15;
		static const long ID_SPINCTRL8;
		static const long ID_STATICTEXT23;
		static const long ID_SPINCTRL10;
		static const long ID_STATICTEXT26;
		static const long ID_STATICLINE7;
		static const long ID_STATICTEXT16;
		static const long ID_STATICLINE8;
		static const long ID_STATICTEXT17;
		static const long ID_COLOURPICKERCTRL1;
		static const long ID_STATICTEXT22;
		static const long ID_SPINCTRL9;
		static const long ID_SCROLLEDWINDOW1;
		static const long ID_PANEL1;
		//*)

	public:

		//(*Handlers(MpcAsfTool)
		void OnButton1Click(wxCommandEvent& event);
		void OnColourPickerCtrl1ColourChanged(wxColourPickerEvent& event);
		void OnSlider_FrameCmdScroll(wxScrollEvent& event);
		void OnSpinCtrl_Frame_GotoChange(wxSpinEvent& event);
		void OnButton_DeleteCurrentFrameClick(wxCommandEvent& event);
		void OnButton_UnDeleteClick(wxCommandEvent& event);
		void OnSpinCtrl_GlobalWidthChange(wxSpinEvent& event);
		void OnSpinCtrl_GlobalHeightChange(wxSpinEvent& event);
		void OnSpinCtrl_DirectionChange(wxSpinEvent& event);
		void OnSpinCtrl_BottomChange(wxSpinEvent& event);
		void OnSlider_IntervalCmdScroll(wxScrollEvent& event);
		void OnCheckBox_ShowShdClick(wxCommandEvent& event);
		void OnSpinCtrl_LeftChange(wxSpinEvent& event);
		void OnRadioButton_NoShadowSelect(wxCommandEvent& event);
		void OnRadioButton_MpcShadowSelect(wxCommandEvent& event);
		void OnRadioButton_AsfShadowSelect(wxCommandEvent& event);
		void OnCheckBox_LockFrameClick(wxCommandEvent& event);
		void OnSpinCtrl_SunXChange(wxSpinEvent& event);
		void OnSpinCtrl_SunYChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowXChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowYChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowAlphaChange(wxSpinEvent& event);
		void OnSpinCtrl_AlphaMaskChange(wxSpinEvent& event);
		//*)

		DECLARE_EVENT_TABLE()

    public:
		void OnSize(wxSizeEvent& event);
		void OnClose(wxCloseEvent &event);
		void OnNew(wxCommandEvent &event);
		void OnFileOpen(wxCommandEvent &event);
		void OnFileSave(wxCommandEvent &event);
		void OnFileSaveAs(wxCommandEvent &event);
		void OnExportToGif(wxCommandEvent &event);
		void OnExportToPng(wxCommandEvent &event);
		void OnExit(wxCommandEvent &event);
		void OnHelp(wxCommandEvent &event);
		void OnAbout(wxCommandEvent &event);

    private:
        void ReNew();
		void InitFromManager();
		bool ChangeSaved();
		void SetStateChange(bool StateChange = true);
        bool SaveFile(bool CurentFile = true);
        void RefreshBmpShow();
        void RefreshFrameSlide();
        void SetLockState();

        enum EvtID
        {
            ID_EXPORT_TO_GIF = 10000,
            ID_EXPORT_TO_PNG
        };

        WorkManager manager;
		//unsigned long deletedframesum;
		bool ischanged;
		wxString currentfile;
		int currentframeindex;
};

#endif
