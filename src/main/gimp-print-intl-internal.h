/*
 * "$Id$"
 *
 *   I18N header file for the gimp-print.
 *
 *   Copyright 1997-2000 Michael Sweet (mike@easysw.com),
 *	Robert Krawitz (rlk@alum.mit.edu) and Michael Natterer (mitch@gimp.org)
 *
 *   This program is free software; you can redistribute it and/or modify it
 *   under the terms of the GNU General Public License as published by the Free
 *   Software Foundation; either version 2 of the License, or (at your option)
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *   for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __GIMP_PRINT_INTL_INTERNAL_H__
#define __GIMP_PRINT_INTL_INTERNAL_H__

#ifdef INCLUDE_LOCALE_H
INCLUDE_LOCALE_H
#else
#include <locale.h>
#endif

#if defined ENABLE_NLS && !defined DISABLE_NLS
#    include <libintl.h>
#    define _(String) dgettext ("gimp-print", String)
#    undef gettext
#    define gettext(String) dgettext ("gimp-print", String)
#    ifdef gettext_noop
#        define N_(String) gettext_noop (String)
#    else
#        define N_(String) (String)
#    endif
#else /* ifndef ENABLE_NLS */
/* Stubs that do something close enough.  */
#    define textdomain(String) (String)
#    define gettext(String) (String)
#    define dgettext(Domain,Message) (Message)
#    define dcgettext(Domain,Message,Type) (Message)
#    define bindtextdomain(Domain,Directory) (Domain)
#    define _(String) (String)
#    define N_(String) (String)

#endif

#endif /* __GIMP_PRINT_INTL_INTERNAL_H__ */
