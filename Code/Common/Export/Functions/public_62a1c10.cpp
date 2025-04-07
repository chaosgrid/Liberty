#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0450);
CLANG_FORWARD_PROC_SYMBOL(public_62a1ac0);

PROC_DECLARE(0x62a1c10, internal_62a1c10, public_62a1c10);
extern "C" NAKED register_t __cdecl internal_62a1c10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_62a1ac0
        mov ecx, esi
        call public_62a0450
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a1c10)
    }
}
