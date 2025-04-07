#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c340, internal_6c2c340, public_6c2c340);
extern "C" NAKED register_t __cdecl internal_6c2c340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c340)
    }
}
