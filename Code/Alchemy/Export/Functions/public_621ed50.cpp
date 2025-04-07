#include "Alchemy-PCH.h"

PROC_DECLARE(0x621ed50, internal_621ed50, public_621ed50);
extern "C" NAKED register_t __cdecl internal_621ed50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 0x34
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621ed50)
    }
}
