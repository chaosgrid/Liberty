#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a140);

#define public_55c617 _public_55c617
#define public_55c67e _public_55c67e

PROC_DECLARE(0x55c5a0, internal_55c5a0, public_55c5a0);
extern "C" NAKED register_t __cdecl internal_55c5a0()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebx
        mov byte ptr ds : [ebx+0x328], 1
        call dword ptr ds : [eax+0xA0]
        mov edx, dword ptr ss : [esp+0x64]
        push eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_51a140
        lea edx, ds:[ebx+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0x18]
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x84]
        add esp, 0xC
        cmp ecx, 0xFFFFFFFF
        je public_55c617
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax]
        push edx
        push ecx
        push eax
        call dword ptr ds : [esi+0x94]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        public_55c617 : nop
        cmp dword ptr ds : [ebx+0x37C], 0xFFFFFFFF
        je public_55c67e
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55c67e
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [ebx+0x37C]
        mov ecx, 0xC
        lea edi, ss:[esp+0x34]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55c67e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x55c5a0)
    }
}

#undef public_55c617
#undef public_55c67e
