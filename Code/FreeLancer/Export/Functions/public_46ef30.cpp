#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ef60);
CLANG_FORWARD_PROC_SYMBOL(public_4706b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x46ef30, internal_46ef30, public_46ef30);
extern "C" NAKED register_t __cdecl internal_46ef30()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_66da90
        call public_4706b0
/*FIXUP push offset _public_46ef60 @0x46ef45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_46ef60
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46ef30)
    }
}
