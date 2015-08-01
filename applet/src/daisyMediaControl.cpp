/*
*   Media Controller: daisy
*   Description: a daisy for plasma
*   Copyright (C) 2009 by Lechio <Alessandros1pt@yahoo.com.br>
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as
*   published by the Free Software Foundation; either version 3, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details
*
*   You should have received a copy of the GNU General Public
*   License along with this program; if not, write to the
*   Free Software Foundation, Inc.,
*   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/









//-----------------------------------------------------------------------------
// Get the player commands
QStringList daisy::getPlayerComs()
{
  QStringList m_player_coms;
  
  if ( m_player == QString("Amarok 1.x") )
  {
    m_player_coms<<
    QString("dcop --no-user-time amarok player playPause")<<
    QString("dcop --no-user-time amarok player stop")<<
    QString("dcop --no-user-time amarok player prev")<<
    QString("dcop --no-user-time amarok player next")<<
    QString("dcop --no-user-time amarok player seekRelative -15")<<
    QString("amarok -m")<<
    QString("dcop --no-user-time amarok player seekRelative 15")<<
    QString("dcop --no-user-time amarok player mute")<<
    QString("dcop --no-user-time amarok player play")<<
    QString("dcop --no-user-time amarok player volumeUp")<<
    QString("dcop --no-user-time amarok player volumeDown");
  }
  
  else if ( m_player == QString("Amarok 2.x") )
  {
    m_player_coms<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Pause")<< 
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Stop")<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Prev")<< 
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Next")<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.SeekRelative -15")<<
    QString("qdbus org.mpris.amarok /amarok/MainWindow org.kde.amarok.MainWindow.showHide")<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.SeekRelative 15")<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Mute")<<
    QString("qdbus org.mpris.amarok /Player org.freedesktop.MediaPlayer.Play")<<
    QString("false")<<
    QString("false");
  }
  
  else if ( m_player == QString("juK") )
  {
    m_player_coms <<
    QString("qdbus org.kde.juk /Player pause")<<
    QString("qdbus org.kde.juk /Player stop")<<
    QString("qdbus org.kde.juk /Player back")<<
    QString("qdbus org.kde.juk /Player forward")<<
    QString("qdbus org.kde.juk /Player seekBack")<<
    QString("qdbus org.kde.juk /juk/MainWindow_1 com.trolltech.Qt.QWidget.show && qdbus org.kde.juk /juk/MainWindow_1 com.trolltech.Qt.QWidget.raise")<<
    QString("qdbus org.kde.juk /Player seekForward")<< 
    QString("qdbus org.kde.juk /Player mute")<<
    QString("qdbus org.kde.juk /Player play")<<
    QString("false")<<
    QString("false");
  }
  
  else if ( m_player == QString("XMMS") )
  {
    m_player_coms<<
    QString("xmms --pause")<<
    QString("xmms --stop")<<
    QString("xmms --rew")<<
    QString("xmms --fwd")<<
    QString("false")<<
    QString("xmms -m")<<
    QString("false")<<
    QString("mute")<<
    QString("xmms --play")<<
    QString("false")<<
    QString("false");
  }
  
  return m_player_coms;
}














