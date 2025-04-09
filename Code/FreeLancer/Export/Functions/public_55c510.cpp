#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55b4a0);

#define public_55c58b _public_55c58b

PROC_DECLARE(0x55c510, internal_55c510, public_55c510);
extern "C" NAKED register_t __cdecl internal_55c510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x30
        push ebx
        push eax
        mov ebx, ecx
        call public_55b4a0
        cmp dword ptr ds : [ebx+0x37C], 0xFFFFFFFF
        je public_55c58b
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55c58b
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ds : [ebx+0x37C]
        mov ecx, 0xC
        lea edi, ss:[esp+0x10]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        public_55c58b : nop
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x55c510)
    }
}

#undef public_55c58b
