#pragma once
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software Foundation,
 *  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/**
 * $Id$
 *
 * @file unlang/subrequest_priv.h
 *
 * @copyright 2019 The FreeRADIUS server project
 */
#ifdef __cplusplus
extern "C" {
#endif
void	unlang_subrequest_free(REQUEST **child);

void	unlang_subrequest_push_again(rlm_rcode_t *out, REQUEST *child, REQUEST *parent,
				     unlang_t *instruction, rlm_rcode_t default_rcode, bool top_frame);

void	unlang_subrequest_push(rlm_rcode_t *out, REQUEST **child, REQUEST *parent,
			       CONF_SECTION *server_cs, unlang_t *instruction, fr_dict_t const *namespace,
			       rlm_rcode_t default_rcode,
			       bool top_frame);

#ifdef __cplusplus
}
#endif
