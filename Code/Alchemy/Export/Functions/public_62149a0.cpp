#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62149a0);

PROC_DECLARE(0x62149a0, internal_62149a0, public_62149a0);
extern "C" NAKED register_t __cdecl internal_62149a0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62149a0)
    }
}
