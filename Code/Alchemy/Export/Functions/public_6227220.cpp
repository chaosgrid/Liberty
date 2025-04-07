#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227220);

PROC_DECLARE(0x6227220, internal_6227220, public_6227220);
extern "C" NAKED register_t __cdecl internal_6227220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6227220)
    }
}
