#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235860);

PROC_DECLARE(0x6235860, internal_6235860, public_6235860);
extern "C" NAKED register_t __cdecl internal_6235860()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x98]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6235860)
    }
}
