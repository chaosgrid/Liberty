#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227240);

PROC_DECLARE(0x6227240, internal_6227240, public_6227240);
extern "C" NAKED register_t __cdecl internal_6227240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6227240)
    }
}
