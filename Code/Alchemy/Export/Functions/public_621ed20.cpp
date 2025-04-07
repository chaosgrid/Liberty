#include "Alchemy-PCH.h"

PROC_DECLARE(0x621ed20, internal_621ed20, public_621ed20);
extern "C" NAKED register_t __cdecl internal_621ed20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 0x34
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621ed20)
    }
}
