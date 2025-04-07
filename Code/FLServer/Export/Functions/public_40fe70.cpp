#include "FLServer-PCH.h"

PROC_DECLARE(0x40fe70, internal_40fe70, public_40fe70);
extern "C" NAKED register_t __cdecl internal_40fe70()
{
    __asm
    {
        sub esp, 0x400
        push esi
        push edi
        lea eax, ss:[esp+8]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x40C]
        push eax
        push ecx
        call dword ptr ds : [public_41b090]
        mov eax, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [public_41bbe8]
        add esp, 8
        lea edx, ss:[esp+8]
        push edx
        push 0
        push 0x180
        push eax
        call edi
        mov ecx, dword ptr ss : [esp+0x410]
        mov edx, dword ptr ds : [esi+0x24]
        push ecx
        push eax
        push 0x19A
        push edx
        call edi
        pop edi
        pop esi
        add esp, 0x400
        ret 8
        UNREACHABLE_TRAP(0x40fe70)
    }
}
