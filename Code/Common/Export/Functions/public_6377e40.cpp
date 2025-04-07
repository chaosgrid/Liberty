#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e40);

PROC_DECLARE(0x6377e40, internal_6377e40, public_6377e40);
extern "C" NAKED register_t __cdecl internal_6377e40()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a5918
        jmp public_63522f0
        UNREACHABLE_TRAP(0x6377e40)
    }
}
