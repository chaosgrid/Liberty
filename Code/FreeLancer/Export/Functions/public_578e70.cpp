#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578e70);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);

PROC_DECLARE(0x578e70, internal_578e70, public_578e70);
extern "C" NAKED register_t __cdecl internal_578e70()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5e44a4
        mov dword ptr ds : [ecx+0x7C], offset public_5e4498
        jmp public_59fa50
        UNREACHABLE_TRAP(0x578e70)
    }
}
