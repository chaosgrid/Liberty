#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);

PROC_DECLARE(0x62d0ac0, internal_62d0ac0, public_62d0ac0);
extern "C" NAKED register_t __cdecl internal_62d0ac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d20d0
        mov dword ptr ds : [esi+0x44], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62d0ac0)
    }
}
