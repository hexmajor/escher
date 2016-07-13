// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FTL_ARRAYSIZE_H_
#define FTL_ARRAYSIZE_H_

#include <stddef.h>

#ifndef arraysize
template <typename T, size_t N> char (&ArraySizeHelper(T (&array)[N]))[N];
#define arraysize(array) (sizeof(ArraySizeHelper(array)))
#endif

#endif  // FTL_ARRAYSIZE_H_
