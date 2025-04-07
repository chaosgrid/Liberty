#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);

#define public_6f95e14 _public_6f95e14
#define public_6f95e1f _public_6f95e1f
#define public_6f95e21 _public_6f95e21
#define public_6f95e40 _public_6f95e40
#define public_6f95e5a _public_6f95e5a
#define public_6f95e5c _public_6f95e5c
#define public_6f95e6b _public_6f95e6b

PROC_DECLARE(0x6f95e00, internal_6f95e00, public_6f95e00);
extern "C" NAKED register_t __cdecl internal_6f95e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_6f95e1f
        mov edx, dword ptr ds : [edi]
        public_6f95e14 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f95e21
        add eax, 4
        cmp eax, ecx
        jne public_6f95e14
        public_6f95e1f : nop
        mov eax, ecx
        public_6f95e21 : nop
        cmp eax, ecx
        jne public_6f95e6b
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f95e5c
        mov ecx, dword ptr ds : [edi]
        lea esp, ss:[esp]
        public_6f95e40 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f95e5a
        add eax, 4
        cmp eax, esi
        jne public_6f95e40
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_6f95e5a : nop
        mov esi, eax
        public_6f95e5c : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_6f95e6b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov byte ptr ds : [ecx+4], 0
        mov eax, ecx
        ret 8
        UNREACHABLE_TRAP(0x6f95e00)
    }
}

#undef public_6f95e14
#undef public_6f95e1f
#undef public_6f95e21
#undef public_6f95e40
#undef public_6f95e5a
#undef public_6f95e5c
#undef public_6f95e6b
