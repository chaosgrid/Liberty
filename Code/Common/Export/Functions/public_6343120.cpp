#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6343120);

PROC_DECLARE(0x6343120, internal_6343120, public_6343120);
extern "C" NAKED register_t __cdecl internal_6343120()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a53dc
        jmp public_6342fd0
        UNREACHABLE_TRAP(0x6343120)
    }
}
