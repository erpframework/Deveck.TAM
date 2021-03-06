/* $Id: symbian_sound_aps.h 2174 2008-07-24 15:30:44Z nanang $ */
/* 
 * Copyright (C) 2003-2008 Benny Prijono <benny@prijono.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */
#ifndef __PJMEDIA_SYMBIAN_SOUND_APS_H__
#define __PJMEDIA_SYMBIAN_SOUND_APS_H__


/**
 * @file symbian_sound_aps.h
 * @brief Sound device wrapper using Audio Proxy Server on 
 * Symbian S60 3rd edition.
 */
#include <pjmedia/types.h>

PJ_BEGIN_DECL

/**
 * Activate/deactivate loudspeaker, when loudspeaker is inactive, audio
 * will be routed to earpiece.
 *
 * @param stream	The sound device stream, the stream should be started 
 *			before calling this function. This param can be NULL
 *			to set the behaviour of next opened stream.
 * @param active	Specify PJ_TRUE to activate loudspeaker, and PJ_FALSE
 *			otherwise.
 *
 * @return		PJ_SUCCESS on success.
 */
PJ_DECL(pj_status_t) pjmedia_snd_aps_activate_loudspeaker(
						pjmedia_snd_stream *stream,
						pj_bool_t active);


PJ_END_DECL


#endif	/* __PJMEDIA_SYMBIAN_SOUND_APS_H__ */
