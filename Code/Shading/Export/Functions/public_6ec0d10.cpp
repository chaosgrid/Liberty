#include "Shading-PCH.h"

PROC_DECLARE(0x6ec0d10, internal_6ec0d10, public_6ec0d10);
extern "C" NAKED register_t __cdecl internal_6ec0d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+edx*4+0x10], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ec0d10)
    }
}
