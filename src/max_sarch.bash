#!/bin/bash
# SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
# SPDX-License-Identifier: BSD-3-Clause

echo a
gcc max_sarch.c -o out
./out > max_sarch.log
cat max_sarch.log | grep -v max | sort -r -k2,2 -n | awk '{print $1}' > sort.dat
rm max_sarch.log out
