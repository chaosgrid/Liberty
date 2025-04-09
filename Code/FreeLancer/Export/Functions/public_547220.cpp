#include "Freelancer-PCH.h"

PROC_DECLARE(0x547220, internal_547220, public_547220);
extern "C" NAKED register_t __cdecl internal_547220()
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
        call dword ptr ds : [esi+0xC8]
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547220)
    }
}
