#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b720);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);

PROC_DECLARE(0x6d1b720, internal_6d1b720, public_6d1b720);
extern "C" NAKED register_t __cdecl internal_6d1b720()
{
    __asm
    {
        sub esp, 0xC
/*FIXUP push offset public_6d68a58 @0x6d1b723*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d1b732*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea eax, ss:[esp+4]
        push eax
        call public_6d601a2
        UNREACHABLE_TRAP(0x6d1b720)
    }
}
