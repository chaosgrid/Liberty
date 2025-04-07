#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e50);

PROC_DECLARE(0x6377e50, internal_6377e50, public_6377e50);
extern "C" NAKED register_t __cdecl internal_6377e50()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a590c
        jmp public_63522f0
        UNREACHABLE_TRAP(0x6377e50)
    }
}
