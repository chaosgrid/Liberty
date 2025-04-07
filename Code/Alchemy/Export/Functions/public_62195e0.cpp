#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62195e0);

PROC_DECLARE(0x62195e0, internal_62195e0, public_62195e0);
extern "C" NAKED register_t __cdecl internal_62195e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        inc ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62195e0)
    }
}
