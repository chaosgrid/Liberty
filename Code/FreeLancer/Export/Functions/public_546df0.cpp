#include "Freelancer-PCH.h"

PROC_DECLARE(0x546df0, internal_546df0, public_546df0);
extern "C" NAKED register_t __cdecl internal_546df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0xE8], eax
        mov edx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        push esi
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx-4]
        add ecx, 0xFFFFFFFC
        push edx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        call dword ptr ds : [esi+0xF0]
        xor eax, eax
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x546df0)
    }
}
