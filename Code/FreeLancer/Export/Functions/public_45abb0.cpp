#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45abb0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);

PROC_DECLARE(0x45abb0, internal_45abb0, public_45abb0);
extern "C" NAKED register_t __cdecl internal_45abb0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5ce85c
        mov dword ptr ds : [ecx+0x7C], offset public_5ce850
        mov dword ptr ds : [public_66d398], 0
        jmp public_59fa50
        UNREACHABLE_TRAP(0x45abb0)
    }
}
