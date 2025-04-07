#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d21b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9030);

PROC_DECLARE(0x62d21b0, internal_62d21b0, public_62d21b0);
extern "C" NAKED register_t __cdecl internal_62d21b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x24]
        add ecx, 0x18
        jmp public_62e9030
        UNREACHABLE_TRAP(0x62d21b0)
    }
}
