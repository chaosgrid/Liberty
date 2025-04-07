#include "Alchemy-PCH.h"

PROC_DECLARE(0x62090f0, internal_62090f0, public_62090f0);
extern "C" NAKED register_t __cdecl internal_62090f0()
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
        UNREACHABLE_TRAP(0x62090f0)
    }
}
