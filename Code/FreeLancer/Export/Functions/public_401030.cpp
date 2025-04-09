#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401060);
CLANG_FORWARD_PROC_SYMBOL(public_4706b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x401030, internal_401030, public_401030);
extern "C" NAKED register_t __cdecl internal_401030()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_616440
        call public_4706b0
/*FIXUP push offset _public_401060 @0x401045*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401060
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x401030)
    }
}
