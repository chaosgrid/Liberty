#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_583c30);
CLANG_FORWARD_PROC_SYMBOL(public_59bff0);

PROC_DECLARE(0x59bff0, internal_59bff0, public_59bff0);
extern "C" NAKED register_t __cdecl internal_59bff0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5e59a4
        mov dword ptr ds : [ecx+0x7C], offset public_5e5998
        jmp public_583c30
        UNREACHABLE_TRAP(0x59bff0)
    }
}
