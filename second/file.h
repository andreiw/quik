/*
 * FS support.
 *
 * Copyright (C) 2013 Andrei Warkentin <andrey.warkentin@gmail.com>
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
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef QUIK_FS_H
#define QUIK_FS_H

quik_err_t length_file(char *device,
                       int partno,
                       char *filename,
                       length_t *len);

quik_err_t load_file(char *device,
                     int partno,
                     char *filename,
                     void *buffer,
                     void *limit,
                     length_t *len);

#endif /* QUIK_FS_H */
