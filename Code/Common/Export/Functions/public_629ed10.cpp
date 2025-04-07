#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629ed10);

PROC_DECLARE(0x629ed10, internal_629ed10, public_629ed10);
extern "C" NAKED register_t __cdecl internal_629ed10()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_639c49c
        jmp public_629adb0
        UNREACHABLE_TRAP(0x629ed10)
    }
}
