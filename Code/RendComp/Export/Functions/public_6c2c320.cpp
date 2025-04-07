#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c320, internal_6c2c320, public_6c2c320);
extern "C" NAKED register_t __cdecl internal_6c2c320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        or ecx, 2
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c320)
    }
}
