#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_50c540);

PROC_DECLARE(0x50c540, internal_50c540, public_50c540);
extern "C" NAKED register_t __cdecl internal_50c540()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5c9efc
        jmp public_429140
        UNREACHABLE_TRAP(0x50c540)
    }
}
