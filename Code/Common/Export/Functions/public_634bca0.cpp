#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bc50);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);

PROC_DECLARE(0x634bca0, internal_634bca0, public_634bca0);
extern "C" NAKED register_t __cdecl internal_634bca0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_639c3fc
        jmp public_634bc50
        UNREACHABLE_TRAP(0x634bca0)
    }
}
