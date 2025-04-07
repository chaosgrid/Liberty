#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f48ba0);

#define public_6f48be7 _public_6f48be7

PROC_DECLARE(0x6f48ba0, internal_6f48ba0, public_6f48ba0);
extern "C" NAKED register_t __cdecl internal_6f48ba0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ds : [esi+0xD8], eax
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+0x14]
        push 0x100B
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f24070
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test eax, eax
        jne public_6f48be7
        mov eax, dword ptr ds : [esi+0xC]
        public_6f48be7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        push eax
        mov eax, dword ptr ds : [esi+0xD8]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3534]
        add esp, 0x14
        pop esi
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6f48ba0)
    }
}

#undef public_6f48be7
