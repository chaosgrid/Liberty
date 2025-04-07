#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);

PROC_DECLARE(0x6d3731f, internal_6d3731f, public_6d3731f);
extern "C" NAKED register_t __cdecl internal_6d3731f()
{
    __asm
    {
        push dword ptr ds : [ecx+0x104C]
        mov dword ptr ds : [ecx], offset public_6d5f5b8
        call public_6d2f249
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d3731f)
    }
}
