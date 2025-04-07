#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c2e0, internal_6c2c2e0, public_6c2c2e0);
extern "C" NAKED register_t __cdecl internal_6c2c2e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x20], ecx
        or dword ptr ds : [eax+8], 2
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c2e0)
    }
}
