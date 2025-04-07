#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);

PROC_DECLARE(0x62c8790, internal_62c8790, public_62c8790);
extern "C" NAKED register_t __cdecl internal_62c8790()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d20d0
        mov dword ptr ds : [esi+0x2C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62c8790)
    }
}
