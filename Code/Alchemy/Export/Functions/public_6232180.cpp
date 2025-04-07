#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232180);

PROC_DECLARE(0x6232180, internal_6232180, public_6232180);
extern "C" NAKED register_t __cdecl internal_6232180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6232180)
    }
}
