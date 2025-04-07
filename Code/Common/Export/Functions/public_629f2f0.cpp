#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);

PROC_DECLARE(0x629f2f0, internal_629f2f0, public_629f2f0);
extern "C" NAKED register_t __cdecl internal_629f2f0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_639ca04
        jmp public_629adb0
        UNREACHABLE_TRAP(0x629f2f0)
    }
}
