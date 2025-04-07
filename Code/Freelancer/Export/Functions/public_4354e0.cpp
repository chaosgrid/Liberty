#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435100);
CLANG_FORWARD_PROC_SYMBOL(public_4354e0);

PROC_DECLARE(0x4354e0, internal_4354e0, public_4354e0);
extern "C" NAKED register_t __cdecl internal_4354e0()
{
    __asm
    {
        call dword ptr ds : [public_5c60e4]
        push eax
        mov ecx, offset public_668660
        call public_435100
        ret 
        UNREACHABLE_TRAP(0x4354e0)
    }
}
