///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 20 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "RotationCtrlUI.h"

///////////////////////////////////////////////////////////////////////////

PreferencesDialogBase::PreferencesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Toolbar Icons") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer241;
	fgSizer241 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer241->SetFlexibleDirection( wxBOTH );
	fgSizer241->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbManualRotate = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Manual Rotate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbManualRotate->SetValue(true); 
	fgSizer241->Add( m_cbManualRotate, 0, wxALL, 5 );
	
	m_cbManualTilt = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Manual Tilt"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbManualTilt, 0, wxALL, 5 );
	
	m_cbNorthUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("North Up"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbNorthUp, 0, wxALL, 5 );
	
	m_cbSouthUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("South Up"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbSouthUp, 0, wxALL, 5 );
	
	m_cbCourseUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Course Up  (from GPS)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbCourseUp, 0, wxALL, 5 );
	
	m_cbHeadingUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Heading Up (NMEA)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbHeadingUp, 0, wxALL, 5 );
	
	m_cbRouteUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Route Up (to active waypoint)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbRouteUp, 0, wxALL, 5 );
	
	m_cbWindUp = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, _("Wind Up (NMEA)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_cbWindUp, 0, wxALL, 5 );
	
	
	sbSizer41->Add( fgSizer241, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizer41, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Dynamic Filter Settings") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText28 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Update Rate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer6->Add( m_staticText28, 0, wxALL, 5 );
	
	m_sUpdateRate = new wxSpinCtrlDouble( sbSizer4->GetStaticBox(), wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0.05, 60, 5.000000, 0.05 );
	fgSizer6->Add( m_sUpdateRate, 0, wxALL, 5 );
	
	m_staticText29 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer6->Add( m_staticText29, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Filter Over"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer6->Add( m_staticText30, 0, wxALL, 5 );
	
	m_sFilterSeconds = new wxSpinCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 10 );
	fgSizer6->Add( m_sFilterSeconds, 0, wxALL, 5 );
	
	m_staticText31 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	fgSizer6->Add( m_staticText31, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Max Slew Rate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer6->Add( m_staticText7, 0, wxALL, 5 );
	
	m_sMaxSlewRate = new wxSpinCtrlDouble( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0.25, 30, 1, 0.25 );
	fgSizer6->Add( m_sMaxSlewRate, 0, wxALL, 5 );
	
	m_staticText8 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Degrees per frame"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer6->Add( m_staticText8, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Rotation Offset"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer6->Add( m_staticText5, 0, wxALL, 5 );
	
	m_sRotationOffset = new wxSpinCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 359, 0 );
	fgSizer6->Add( m_sRotationOffset, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer6->Add( m_staticText6, 0, wxALL, 5 );
	
	
	sbSizer4->Add( fgSizer6, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizer4, 1, wxEXPAND, 5 );
	
	m_cbRotationKeys = new wxCheckBox( this, wxID_ANY, _("Enable Rotation via [ ] / Keys"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_cbRotationKeys, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer11->AddGrowableCol( 1 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer15;
	fgSizer15 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer15->SetFlexibleDirection( wxBOTH );
	fgSizer15->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button6 = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer15->Add( m_button6, 0, wxALL, 5 );
	
	m_button7 = new wxButton( this, wxID_ANY, _("About Author"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer15->Add( m_button7, 0, wxALL, 5 );
	
	
	fgSizer11->Add( fgSizer15, 1, wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1->Realize();
	
	fgSizer11->Add( m_sdbSizer1, 0, wxALIGN_RIGHT|wxBOTTOM|wxEXPAND|wxTOP, 5 );
	
	
	fgSizer4->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer4 );
	this->Layout();
	fgSizer4->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_cbManualRotate->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbManualTilt->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbNorthUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbSouthUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbCourseUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbHeadingUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbRouteUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbWindUp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_sFilterSeconds->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_sRotationOffset->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbRotationKeys->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigureKeys ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnAboutAuthor ), NULL, this );
}

PreferencesDialogBase::~PreferencesDialogBase()
{
	// Disconnect Events
	m_cbManualRotate->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbManualTilt->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbNorthUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbSouthUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbCourseUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbHeadingUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbRouteUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbWindUp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_sFilterSeconds->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_sRotationOffset->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( PreferencesDialogBase::OnConfigure ), NULL, this );
	m_cbRotationKeys->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnConfigureKeys ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnAboutAuthor ), NULL, this );
	
}
