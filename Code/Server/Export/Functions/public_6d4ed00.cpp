#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ed00);

PROC_DECLARE(0x6d4ed00, internal_6d4ed00, public_6d4ed00);
extern "C" NAKED register_t __cdecl internal_6d4ed00()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x268]
        ret 
        UNREACHABLE_TRAP(0x6d4ed00)
    }
}
