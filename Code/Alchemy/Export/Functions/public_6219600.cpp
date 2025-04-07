#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219600);

PROC_DECLARE(0x6219600, internal_6219600, public_6219600);
extern "C" NAKED register_t __cdecl internal_6219600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6219600)
    }
}
