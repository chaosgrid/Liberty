#include "Freelancer-PCH.h"

PROC_DECLARE(0x5471f0, internal_5471f0, public_5471f0);
extern "C" NAKED register_t __cdecl internal_5471f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx-4]
        add ecx, 0xFFFFFFFC
        push esi
        mov esi, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [esi+0xC4]
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5471f0)
    }
}
