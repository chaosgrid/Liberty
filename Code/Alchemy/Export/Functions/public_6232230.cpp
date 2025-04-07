#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232230);

PROC_DECLARE(0x6232230, internal_6232230, public_6232230);
extern "C" NAKED register_t __cdecl internal_6232230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6232230)
    }
}
