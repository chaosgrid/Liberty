#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4307f0);
CLANG_FORWARD_PROC_SYMBOL(public_431c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4307c0, internal_4307c0, public_4307c0);
extern "C" NAKED register_t __cdecl internal_4307c0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_667e18
        call public_431c60
/*FIXUP push offset _public_4307f0 @0x4307d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4307f0
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4307c0)
    }
}
