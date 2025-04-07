#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5f80);

PROC_DECLARE(0x6ea5f80, internal_6ea5f80, public_6ea5f80);
extern "C" NAKED register_t __cdecl internal_6ea5f80()
{
    __asm
    {
        mov dword ptr ds : [ecx+4], offset public_6fb4270
        mov dword ptr ds : [ecx], offset public_6fb385c
        ret 
        UNREACHABLE_TRAP(0x6ea5f80)
    }
}
