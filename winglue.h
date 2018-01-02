/*
 * FAKu, vanity FakeCoin address generator
 * Copyright (C) 2011 samr7
 * Copyright (C) 2018 Scyne
 *
 * FAKu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * FAKu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with FAKu.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__VG_WINGLUE_H__)
#define __VG_WINGLUE_H__

#include <windows.h>
#include <tchar.h>
#include <time.h>

#define INLINE
#define snprintf _snprintf

struct timezone;

extern int gettimeofday(struct timeval *tv, struct timezone *tz);
extern void timeradd(struct timeval *a, struct timeval *b,
		     struct timeval *result);
extern void timersub(struct timeval *a, struct timeval *b,
		     struct timeval *result);

extern TCHAR *optarg;
extern int optind;

extern int getopt(int argc, TCHAR *argv[], TCHAR *optstring);

extern int count_processors(void);

#define PRSIZET "I"

static inline char *
strtok_r(char *strToken, const char *strDelimit, char **context) {
	return strtok_s(strToken, strDelimit, context);
}

#endif /* !defined (__VG_WINGLUE_H__) */
