#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17080);

PROC_DECLARE(0x6d17080, internal_6d17080, public_6d17080);
extern "C" NAKED register_t __cdecl internal_6d17080()
{
    __asm
    {
        add ecx, 0xC
        jmp dword ptr ds : [public_6d647ac]
        UNREACHABLE_TRAP(0x6d17080)
    }
}
