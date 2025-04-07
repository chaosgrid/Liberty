#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295710);
CLANG_FORWARD_PROC_SYMBOL(public_629b210);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_629b23b _public_629b23b
#define public_629b24f _public_629b24f
#define public_629b254 _public_629b254
#define public_629b26a _public_629b26a
#define public_629b27e _public_629b27e
#define public_629b281 _public_629b281
#define public_629b2a1 _public_629b2a1

PROC_DECLARE(0x629b210, internal_629b210, public_629b210);
extern "C" NAKED register_t __cdecl internal_629b210()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test dword ptr ss : [ebp+0x14], 0xC10003
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        je public_629b254
        mov esi, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [esi+4]
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_629b23b
        mov edi, eax
        public_629b23b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_629b24f
        mov dword ptr ds : [eax], ebp
        public_629b24f : nop
        inc dword ptr ds : [ebx+0x18]
        jmp public_629b281
        public_629b254 : nop
        mov esi, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_629b26a
        mov edi, eax
        public_629b26a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_629b27e
        mov dword ptr ds : [eax], ebp
        public_629b27e : nop
        inc dword ptr ds : [ebx+0xC]
        public_629b281 : nop
        cmp dword ptr ss : [ebp+0x14], 0x10000
        jne public_629b2a1
        mov ecx, ebp
        call public_6295710
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629b2a1
        inc dword ptr ds : [ebx+0x1C]
        public_629b2a1 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629b210)
    }
}

#undef public_629b23b
#undef public_629b24f
#undef public_629b254
#undef public_629b26a
#undef public_629b27e
#undef public_629b281
#undef public_629b2a1
