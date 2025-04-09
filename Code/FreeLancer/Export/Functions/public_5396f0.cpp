#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5396f0, internal_5396f0, public_5396f0);
extern "C" NAKED register_t __cdecl internal_5396f0()
{
    __asm
    {
        push esi
        push 1
        mov esi, ecx
        call dword ptr ds : [public_5c69dc]
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        push eax
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c6a0c]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c67e8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5396f0)
    }
}
