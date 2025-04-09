#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f7b82 _public_4f7b82

PROC_DECLARE(0x4f7b50, internal_4f7b50, public_4f7b50);
extern "C" NAKED register_t __cdecl internal_4f7b50()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f7b82
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f7b82 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x3C]
        xor ecx, ecx
        cmp eax, 3
        setge cl
        pop edi
        mov al, cl
        pop esi
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4f7b50)
    }
}

#undef public_4f7b82
