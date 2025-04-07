#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202930);

PROC_DECLARE(0x6202930, internal_6202930, public_6202930);
extern "C" NAKED register_t __cdecl internal_6202930()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6202930)
    }
}
