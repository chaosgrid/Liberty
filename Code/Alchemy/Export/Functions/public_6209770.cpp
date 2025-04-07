#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209770, internal_6209770, public_6209770);
extern "C" NAKED register_t __cdecl internal_6209770()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+edx*8+4], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6209770)
    }
}
