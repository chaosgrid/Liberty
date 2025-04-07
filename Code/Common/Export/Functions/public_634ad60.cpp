#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ad60);
CLANG_FORWARD_PROC_SYMBOL(public_635d440);

PROC_DECLARE(0x634ad60, internal_634ad60, public_634ad60);
extern "C" NAKED register_t __cdecl internal_634ad60()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_639c2dc
        jmp public_635d440
        UNREACHABLE_TRAP(0x634ad60)
    }
}
