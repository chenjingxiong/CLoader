!if 0
Copyright (c) Microsoft Corporation.  All rights reserved.
!endif
!if 0
Use of this sample source code is subject to the terms of the Microsoft
license agreement under which you licensed this sample source code. If
you did not accept the terms of the license agreement, you are not
authorized to use this sample source code. For the terms of the license,
please see the license agreement between you and Microsoft or, if applicable,
see the LICENSE.RTF on your install media or the root of your tools installation.
THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
!endif

wceldr:
!IF "$(_WINCEOSVER)"=="600"
   romimage $(ROMIMAGE_FLAGS) xldr6.bib
   _RELEASEDIR=$(WINCEROOT)\platform\$(_TGTPLAT)\target\$(_TGTCPU)\$(WINCEDEBUG)
!ELSE
    romimage $(ROMIMAGE_FLAGS) xldr.bib
!ENDIF

!IF "$(WINCEREL)"=="1"
    del $(_FLATRELEASEDIR)\wceldrC
    if exist $(_RELEASEDIR)\wceldrC xcopy /Q /I $(_RELEASEDIR)\wceldrC $(_FLATRELEASEDIR)
!ENDIF
