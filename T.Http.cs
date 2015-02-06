﻿/* #FH  //z 2015-02-06 00:11:57 L.328'85683 BG57IV3@BYH T1841274924.K.F3726084626----+----+----+
+  0.FileInfo: +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
        File : E:\MyDoc\GitHub\ZNginx\T.Http.cs.F3726084626-+----+----+----+----+----+----+----+
       Motto : No one can make you feel inferior without your consent.+----+----+----+----+----+
       Motto : The death of fear is in doing what you fear to do.+----+----+----+----+----+----+
       Motto : It's hard to beat a person who never gives up.----+----+----+----+----+----+----+
       Motto : Take what you do seriously. Not yourself.----+----+----+----+----+----+----+----+
       Motto : Life begins where your comfort zone ends.----+----+----+----+----+----+----+----+
       Motto : To know and not do, is not yet to know.-+----+----+----+----+----+----+----+----+
       Motto : The more you do , the more you can do.--+----+----+----+----+----+----+----+----+
       Motto : Do what you do best, better.--+----+----+----+----+----+----+----+----+----+----+
       Motto : Get Your Hands Dirty.----+----+----+----+----+----+----+----+----+----+----+----+
      Author : 126.org@gmail.com (R) Kaizen (->30,T5,M&M,W)-+----+----+----+----+----+----+----+

+  1.ID & Desc: ----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  2.Req & Repro: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  3.Folder & File: +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  4.Cause & Solution: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  5.Todo & Done: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  6.Commit: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  7.Issue: ---+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  8.Summary: -+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  9.Misc: ----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

***********************************************************************************************/

#region 02-06 00:11 R#.0    @Ver.Info
       Zey_S : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
		R#
       Zey_E : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
       Zcl_S : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
       Zcl_E : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     Zndex_S : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
      L62, 1:R#.1    @simple http server
     Zndex_E : //z 2015-02-06 10:46:54 L.328'47586 T1513782386.K ~10  +----+----+----+----+----+
     TimeCnt : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     Reg.Cnt : //z 2015-02-06 00:11:59 L.328'85681 T1841274926.K ~1   +----+----+----+----+----+
     #1   R+ : //z 2015-02-06 00:11:59 L.328'85681 T1841274926.K ~1     V+.2    L+.62   
     File.Op : //z 2015-02-06 10:46:53 L.328'47587 T1513782385.K ~1   +----+----+----+----+----+
     #1   O+ : //z 2015-02-06 10:46:53 L.328'47587 T1513782385.K ~1     V+.11   L+.1    
     Version : //z 2015-02-06 10:46:54 L.328'47586 T1513782386.K ~11    R+.1    L+.72   --+----+
     #0   R+ : //z 2015-02-06 00:11:59 L.328'85681 T1841274926.K ~2     R+.1    L+.63   V+.2    
     K   Ter : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K  Mers : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K Kersi : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     KVersio : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K Versi : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K  Vers : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K   Ver : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K    Ve : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     K     V : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
     KaizenZ : //z 2015-02-06 00:11:57 L.328'85683 T1841274924.K ~0   +----+----+----+----+----+
#endregion //z 2015-02-06 00:11:57 L.328'85683 BG57IV3@BYH T1841274924.K.F3726084626-+----+----+

#region 02-06 00:11 R#.1    @simple http server
01. 
http://beej.us/guide/bgnet/
https://github.com/fekberg/GoHttp
http://en.wikipedia.org/wiki/Comparison_of_web_server_software
http://www.adp-gmbh.ch/win/misc/webserver.html
http://www.webtoolkit.eu/wt
https://code.google.com/p/mongoosecpp/
#endregion //z 2015-02-06 00:11:59 L.328'85681 BG57IV3@BYH T1841274926.K.F3726084626-+----+----+
