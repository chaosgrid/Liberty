#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x40e9c0, internal_40e9c0, public_40e9c0);
extern "C" NAKED register_t __cdecl internal_40e9c0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6164b0
        call public_4c5a10
/*FIXUP push offset _public_40e9f0 @0x40e9d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40e9f0
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x40e9c0)
    }
}
