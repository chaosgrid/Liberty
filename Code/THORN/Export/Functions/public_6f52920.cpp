#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f512e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);

PROC_DECLARE(0x6f52920, internal_6f52920, public_6f52920);
extern "C" NAKED register_t __cdecl internal_6f52920()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f512e0
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52920)
    }
}
