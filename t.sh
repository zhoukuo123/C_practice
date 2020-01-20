#!/bin/bashcd /usr/share/man/zh_CN/for k in *docd $kfor i in *.gzdo j=`echo${i%.gz}` gunzip $i iconv -f gb18030 -t utf8 $j >tmp mv tmp $j gzip $jdonecd..done
