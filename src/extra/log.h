/*
 *  Copyright (C) 2017 Eduardo Perdices <eperdices at gsyc dot es>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SD_SLAM_LOG_H_
#define SD_SLAM_LOG_H_

#include <cstdlib>

#ifdef ANDROID
# include <android/log.h>
# define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, "SD-SLAM", __VA_ARGS__)
# define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "SD-SLAM", __VA_ARGS__)
#else
# include <stdio.h>
# define LOGD(...) printf("[DEBUG] "); printf(__VA_ARGS__); printf("\n");
# define LOGE(...) printf("[ERROR] "); printf(__VA_ARGS__); printf("\n");
#endif // ANDROID

#endif  // SD_SLAM_LOG_H_




