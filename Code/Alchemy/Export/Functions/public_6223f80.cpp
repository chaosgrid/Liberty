#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223f80);

PROC_DECLARE(0x6223f80, internal_6223f80, public_6223f80);
extern "C" NAKED register_t __cdecl internal_6223f80()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6223f80)
    }
}
