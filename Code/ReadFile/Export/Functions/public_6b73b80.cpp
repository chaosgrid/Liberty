#include "ReadFile-PCH.h"


#define public_6b73ba2 _public_6b73ba2
#define public_6b73ba8 _public_6b73ba8
#define public_6b73bd8 _public_6b73bd8
#define public_6b73bea _public_6b73bea
#define public_6b73c22 _public_6b73c22
#define public_6b73c2c _public_6b73c2c
#define public_6b73c2f _public_6b73c2f
#define public_6b73c3f _public_6b73c3f
#define public_6b73c45 _public_6b73c45
#define public_6b73c53 _public_6b73c53
#define public_6b73c57 _public_6b73c57
#define public_6b73c61 _public_6b73c61

PROC_DECLARE(0x6b73b80, internal_6b73b80, public_6b73b80);
extern "C" NAKED register_t __cdecl internal_6b73b80()
{
    __asm
    {
        sub esp, 0x104
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x114]
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b73ba2
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b73ba8
        public_6b73ba2 : nop
        mov esi, dword ptr ds : [edi+0x238]
        public_6b73ba8 : nop
        test esi, esi
        je public_6b73c57
        mov edx, dword ptr ds : [edi+0x22C]
        test edx, edx
        je public_6b73bea
        mov ecx, dword ptr ss : [esp+0x118]
        cmp dword ptr ds : [ecx], 0x34
        jne public_6b73bd8
        mov eax, dword ptr ds : [ecx+0x30]
        mov ebx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx+0xC]
        push edx
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x24]
        jmp public_6b73c53
        public_6b73bd8 : nop
        mov ebx, dword ptr ds : [esi]
        or eax, 0xFFFFFFFF
        push eax
        mov eax, dword ptr ds : [ecx+0xC]
        push edx
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x24]
        jmp public_6b73c53
        public_6b73bea : nop
        mov ebx, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [edi]
        push 0x104
        lea eax, ss:[esp+0x10]
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xA4]
        test eax, eax
        jne public_6b73c22
        mov dword ptr ds : [edi+0x1C], 0xA1
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x104
        ret 8
        public_6b73c22 : nop
        cmp dword ptr ds : [ebx], 0x34
        jne public_6b73c2c
        mov ebx, dword ptr ds : [ebx+0x30]
        jmp public_6b73c2f
        public_6b73c2c : nop
        or ebx, 0xFFFFFFFF
        public_6b73c2f : nop
        mov ecx, dword ptr ds : [edi+0x238]
        test ecx, ecx
        je public_6b73c3f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        jmp public_6b73c45
        public_6b73c3f : nop
        mov eax, dword ptr ds : [edi+0x23C]
        public_6b73c45 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b73c53 : nop
        test eax, eax
        jne public_6b73c61
        public_6b73c57 : nop
        mov dword ptr ds : [edi+0x1C], 2
        or eax, 0xFFFFFFFF
        public_6b73c61 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x104
        ret 8
        UNREACHABLE_TRAP(0x6b73b80)
    }
}

#undef public_6b73ba2
#undef public_6b73ba8
#undef public_6b73bd8
#undef public_6b73bea
#undef public_6b73c22
#undef public_6b73c2c
#undef public_6b73c2f
#undef public_6b73c3f
#undef public_6b73c45
#undef public_6b73c53
#undef public_6b73c57
#undef public_6b73c61
