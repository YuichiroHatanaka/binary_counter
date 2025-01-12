#!/bin/bash
# SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
# SPDX-License-Identifier: BSD-3-Clause

path=../tsudanuma/16/

echo a
mkdir -p ../$path
gcc max_sarch.c -o out
./out > "$path"max_sarch.log
cat "$path"max_sarch.log | grep -v max | sort -r -k2,2 -n | awk '{print $1}' > "$path"sort.dat
rm out
