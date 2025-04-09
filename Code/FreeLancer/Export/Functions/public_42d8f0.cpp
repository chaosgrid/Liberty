#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d920);
CLANG_FORWARD_PROC_SYMBOL(public_42ea30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x42d8f0, internal_42d8f0, public_42d8f0);
extern "C" NAKED register_t __cdecl internal_42d8f0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_667df0
        call public_42ea30
/*FIXUP push offset _public_42d920 @0x42d905*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42d920
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42d8f0)
    }
}
