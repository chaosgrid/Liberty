#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_59bf80);

PROC_DECLARE(0x59bf80, internal_59bf80, public_59bf80);
extern "C" NAKED register_t __cdecl internal_59bf80()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5e58d4
        mov dword ptr ds : [ecx+0x7C], offset public_5e58c8
        jmp public_57b260
        UNREACHABLE_TRAP(0x59bf80)
    }
}
