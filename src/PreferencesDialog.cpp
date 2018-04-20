/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  rotationctrl Plugin
 * Author:   Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2015 by Sean D'Epagnier                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#include "rotationctrl_pi.h"
#include "PreferencesDialog.h"

PreferencesDialog::PreferencesDialog( wxWindow* parent)
    : PreferencesDialogBase( parent )
{
    wxFileConfig *pConf = GetOCPNConfigObject();
    pConf->SetPath ( _T( "/Settings/RotationCtrl" ) );

    m_cbManualRotate->SetValue((bool)pConf->Read( _T ( "ManualRotate" ), 0L));
    m_cbManualTilt->SetValue((bool)pConf->Read( _T ( "ManualTilt" ), 0L));
    m_cbNorthUp->SetValue((bool)pConf->Read( _T ( "NorthUp" ), 1L));
    m_cbSouthUp->SetValue((bool)pConf->Read( _T ( "SouthUp" ), 0L));
    m_cbCourseUp->SetValue((bool)pConf->Read( _T ( "CourseUp" ), 1L));
    m_cbHeadingUp->SetValue((bool)pConf->Read( _T ( "HeadingUp" ), 0L));
    m_cbRouteUp->SetValue((bool)pConf->Read( _T ( "RouteUp" ), 0L));
    m_cbWindUp->SetValue((bool)pConf->Read( _T ( "WindUp" ), 0L));

    m_sUpdateRate->SetValue( pConf->ReadDouble( _T ( "UpdateRate" ), 3.0));
    m_sFilterSeconds->SetValue( pConf->Read( _T ( "FilterSeconds" ), 5L));
    m_sMaxSlewRate->SetValue( pConf->ReadDouble( _T ( "MaxSlewRate" ), 5.0));
    m_sRotationOffset->SetValue( pConf->Read( _T ( "RotationOffset" ), 0L));

    pConf->SetPath ( _T( "/Settings" ) );
    m_cbRotationKeys->SetValue((bool)pConf->Read( _T ( "EnableRotateKeys" ), 0L));
}

PreferencesDialog::~PreferencesDialog()
{
    wxFileConfig *pConf = GetOCPNConfigObject();

    if(!pConf)
       return;

    pConf->SetPath ( _T( "/Settings/RotationCtrl" ) );

    pConf->Write( _T ( "ManualRotate" ), m_cbManualRotate->GetValue());
    pConf->Write( _T ( "ManualTilt" ), m_cbManualTilt->GetValue());
    pConf->Write( _T ( "NorthUp" ), m_cbNorthUp->GetValue());
    pConf->Write( _T ( "SouthUp" ), m_cbSouthUp->GetValue());
    pConf->Write( _T ( "CourseUp" ), m_cbCourseUp->GetValue());
    pConf->Write( _T ( "HeadingUp" ), m_cbHeadingUp->GetValue());
    pConf->Write( _T ( "RouteUp" ), m_cbRouteUp->GetValue());
    pConf->Write( _T ( "WindUp" ), m_cbWindUp->GetValue());

    pConf->Write( _T ( "UpdateRate" ), m_sUpdateRate->GetValue());
    pConf->Write( _T ( "FilterSeconds" ), m_sFilterSeconds->GetValue());
    pConf->Write( _T ( "MaxSlewRate" ), m_sMaxSlewRate->GetValue());
    pConf->Write( _T ( "RotationOffset" ), m_sRotationOffset->GetValue());

    pConf->SetPath ( _T( "/Settings" ) );
    bool brotate = pConf->Read( _T ( "EnableRotateKeys" ),  0L );

    if(brotate != m_cbRotationKeys->GetValue()) {
        wxMessageDialog mdlg(NULL, _("\
Enabling/Disabling rotation via [ ] / keys requires restarting OpenCPN."),
                             _("Rotation Control Information"), wxOK | wxICON_INFORMATION);
        mdlg.ShowModal();
        pConf->SetPath ( _T( "/Settings" ) );
        pConf->Write( _T ( "EnableRotateKeys" ),  !brotate );
    }
}

void PreferencesDialog::OnInformation( wxCommandEvent& event )
{
    wxMessageDialog mdlg(this, _("\
Advanced Control of the Viewport Rotation\n\n\
Set the Update period to a fraction (eg .2) for fast update, (this may use excessive cpu)\n\
Rotation offset allows Course right (90) Course down (180) etc...\n\n\
Route Up, activate a route or waypoint (right click navigate to)\n\
Wind Up requires wind sensor via nmea data.\n\
Heading Up Requires magnetic heading sensor via nmea data.\n"),
                         _("Rotation Control Information"), wxOK | wxICON_INFORMATION);
    mdlg.ShowModal();
}

void PreferencesDialog::OnAboutAuthor( wxCommandEvent& event )
{
    wxLaunchDefaultBrowser(_T(ABOUT_AUTHOR_URL));
}
