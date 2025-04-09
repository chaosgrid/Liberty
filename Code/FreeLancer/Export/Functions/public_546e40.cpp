#include "Freelancer-PCH.h"

PROC_DECLARE(0x546e40, internal_546e40, public_546e40);
extern "C" NAKED register_t __cdecl internal_546e40()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xE8], 0
        mov eax, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx-4]
        add ecx, 0xFFFFFFFC
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [esi+0xF4]
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x546e40)
    }
}
