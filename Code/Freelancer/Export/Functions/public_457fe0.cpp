#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_457fe0);

#define public_4580d6 _public_4580d6
#define public_458150 _public_458150

PROC_DECLARE(0x457fe0, internal_457fe0, public_457fe0);
extern "C" NAKED register_t __cdecl internal_457fe0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x78]
        cmp dword ptr ds : [eax+ebp*4], 0xFFFFFFFF
        push esi
        jne public_458150
        mov ecx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edx+ebp*4], eax
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        mov dword ptr ss : [esp+0x80], ecx
        call dword ptr ds : [public_5c629c]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_458150
        mov ecx, esi
        call dword ptr ds : [public_5c6298]
        test al, al
        je public_458150
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [esi+0x84]
        push 0
        lea edx, ds:[ebx+0x10]
        push edx
        mov edx, dword ptr ds : [public_5c6dd8]
        add ecx, 0x20
        push ecx
        mov ecx, dword ptr ds : [edx]
        push 0
        push 0
        push ecx
        push eax
        call public_41c540
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edx+ebp*4], eax
        mov esi, dword ptr ds : [esi+0x80]
        add esp, 0x1C
        test esi, esi
        je public_4580d6
        mov dword ptr ss : [esp+0xC], esi
        push esi
        mov esi, dword ptr ds : [public_5c6d14]
        call esi
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
        push ebp
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c620c]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call esi
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+ebp*4]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push ecx
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        call dword ptr ds : [public_5c61c0]
        push eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0x18]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x6C
        ret 8
        public_4580d6 : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [public_5c6214]
        push edi
        push ebp
        mov dword ptr ss : [esp+0x24], 0
        call esi
        add eax, 4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx]
        push ebp
        mov dword ptr ss : [esp+0x3C], edx
        call esi
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        add esi, 0x10
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+ebp*4]
        lea edx, ss:[esp+0x20]
        push edx
        push ecx
        mov ecx, dword ptr ds : [ebx]
        push ebp
        call dword ptr ds : [public_5c61c0]
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [esi+0xBC]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x6C
        ret 8
        public_458150 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x457fe0)
    }
}

#undef public_4580d6
#undef public_458150
