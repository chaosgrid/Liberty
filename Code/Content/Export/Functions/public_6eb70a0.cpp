#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70a0);

PROC_DECLARE(0x6eb70a0, internal_6eb70a0, public_6eb70a0);
extern "C" NAKED register_t __cdecl internal_6eb70a0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        mov edi, eax
        rep movsd
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 0xC
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6eb70a0)
    }
}
