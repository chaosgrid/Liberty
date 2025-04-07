#include "Alchemy-PCH.h"

PROC_DECLARE(0x62439f0, internal_62439f0, public_62439f0);
extern "C" NAKED register_t __cdecl internal_62439f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        shl eax, 4
        or eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        shl eax, 4
        or eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x62439f0)
    }
}
