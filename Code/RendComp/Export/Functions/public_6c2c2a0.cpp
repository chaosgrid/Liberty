#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c2a0, internal_6c2c2a0, public_6c2c2a0);
extern "C" NAKED register_t __cdecl internal_6c2c2a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x18]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c2a0)
    }
}
