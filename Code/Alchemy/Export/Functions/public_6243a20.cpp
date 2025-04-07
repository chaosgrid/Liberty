#include "Alchemy-PCH.h"

PROC_DECLARE(0x6243a20, internal_6243a20, public_6243a20);
extern "C" NAKED register_t __cdecl internal_6243a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        shr ecx, 8
        and ecx, 0xF
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xC]
        shr ecx, 4
        and ecx, 0xF
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        and eax, 0xF
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6243a20)
    }
}
