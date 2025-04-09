#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469000);

PROC_DECLARE(0x469000, internal_469000, public_469000);
extern "C" NAKED register_t __cdecl internal_469000()
{
    __asm
    {
        mov ecx, offset public_66d424
        jmp dword ptr ds : [public_5c62c4]
        UNREACHABLE_TRAP(0x469000)
    }
}
