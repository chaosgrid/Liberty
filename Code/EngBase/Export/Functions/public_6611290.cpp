#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611290);

#define public_661132e _public_661132e

PROC_DECLARE(0x6611290, internal_6611290, public_6611290);
extern "C" NAKED register_t __cdecl internal_6611290()
{
    __asm
    {
        sub esp, 0x34
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], offset public_662a030
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], 0x80000000
        push edx
        push esi
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [ecx+0x7C]
        mov ebp, dword ptr ss : [esp+0x4C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_661132e
        mov eax, dword ptr ds : [esi]
        push ebx
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_662903c]
        add esp, 4
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi]
        push 0
        push edx
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        pop ebx
        public_661132e : nop
        mov ecx, dword ptr ss : [ebp]
        push ecx
        call dword ptr ds : [public_662900c]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6611290)
    }
}

#undef public_661132e
