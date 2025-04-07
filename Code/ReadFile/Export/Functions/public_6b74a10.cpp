#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74a10);
CLANG_FORWARD_PROC_SYMBOL(public_6b764e0);

#define public_6b74aad _public_6b74aad
#define public_6b74ab8 _public_6b74ab8
#define public_6b74aca _public_6b74aca
#define public_6b74b09 _public_6b74b09

PROC_DECLARE(0x6b74a10, internal_6b74a10, public_6b74a10);
extern "C" NAKED register_t __cdecl internal_6b74a10()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        mov dword ptr ss : [esp+4], ecx
        push ebp
        mov ecx, dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [eax+0x20]
        push esi
        push ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        push edx
        mov edx, dword ptr ds : [eax+0x18]
        push ecx
        mov ecx, dword ptr ds : [eax+0x14]
        push edx
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_6b79030]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6b74b09
        push edi
        xor ebx, ebx
        mov ecx, 5
        lea esi, ss:[esp+0x18]
        lea edi, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], ebp
        lea edx, ss:[esp+0x10]
        rep movsd
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        call public_6b764e0
        mov eax, dword ptr ss : [esp+0x34]
        pop edi
        cmp eax, ebx
        je public_6b74ab8
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        je public_6b74aad
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        public_6b74aad : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call dword ptr ds : [public_6b79014]
        public_6b74ab8 : nop
        cmp byte ptr ss : [esp+0x10], bl
        jne public_6b74aca
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x34
        ret 8
        public_6b74aca : nop
        mov esi, dword ptr ss : [esp+0xC]
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x10], ebp
        je public_6b74b09
        push ebx
        push ebx
        push ebx
        push 2
        push ebx
        push ebp
        call dword ptr ds : [public_6b7902c]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x14], eax
        je public_6b74b09
        push ebx
        push ebp
        call dword ptr ds : [public_6b79028]
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push ebx
        push ebx
        push 4
        push ecx
        mov dword ptr ds : [esi+0x1C], eax
        call dword ptr ds : [public_6b79024]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x20], ebx
        public_6b74b09 : nop
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6b74a10)
    }
}

#undef public_6b74aad
#undef public_6b74ab8
#undef public_6b74aca
#undef public_6b74b09
