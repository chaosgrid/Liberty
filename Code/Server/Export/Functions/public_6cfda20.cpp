#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfda20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cfda8e _public_6cfda8e
#define public_6cfdaa2 _public_6cfdaa2
#define public_6cfdaa8 _public_6cfdaa8
#define public_6cfdab6 _public_6cfdab6
#define public_6cfdada _public_6cfdada
#define public_6cfdaf7 _public_6cfdaf7
#define public_6cfdb10 _public_6cfdb10
#define public_6cfdb23 _public_6cfdb23
#define public_6cfdb2e _public_6cfdb2e
#define public_6cfdb31 _public_6cfdb31
#define public_6cfdb36 _public_6cfdb36
#define public_6cfdb5f _public_6cfdb5f
#define public_6cfdb78 _public_6cfdb78
#define public_6cfdb8b _public_6cfdb8b
#define public_6cfdb95 _public_6cfdb95
#define public_6cfdbb7 _public_6cfdbb7
#define public_6cfdbca _public_6cfdbca
#define public_6cfdbd7 _public_6cfdbd7
#define public_6cfdbd9 _public_6cfdbd9
#define public_6cfdbdf _public_6cfdbdf
#define public_6cfdc08 _public_6cfdc08
#define public_6cfdc1b _public_6cfdc1b
#define public_6cfdc26 _public_6cfdc26
#define public_6cfdc29 _public_6cfdc29
#define public_6cfdc2b _public_6cfdc2b
#define public_6cfdc2e _public_6cfdc2e
#define public_6cfdc3a _public_6cfdc3a

PROC_DECLARE(0x6cfda20, internal_6cfda20, public_6cfda20);
extern "C" NAKED register_t __cdecl internal_6cfda20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d5c880
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6cfda8e
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6cfda8e
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6cfda8e
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6cfdaa8
        mov dword ptr ds : [eax+8], ebx
        jmp public_6cfdaa8
        public_6cfda8e : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6cfdaa2
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_6cfdaa8
        public_6cfdaa2 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6cfdaa8
        mov dword ptr ds : [eax], ebx
        public_6cfdaa8 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov eax, ebx
        je public_6cfdc3a
        public_6cfdab6 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6cfdc3a
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6cfdb95
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6cfdaf7
        public_6cfdada : nop
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6cfdc2e
        public_6cfdaf7 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6cfdb36
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cfdb10
        mov dword ptr ds : [edx+4], eax
        public_6cfdb10 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cfdb23
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cfdb31
        public_6cfdb23 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6cfdb2e
        mov dword ptr ds : [edx], ecx
        jmp public_6cfdb31
        public_6cfdb2e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6cfdb31 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cfdb36 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cfdb5f
        mov dword ptr ds : [edi+4], ecx
        public_6cfdb5f : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cfdb78
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdc2b
        public_6cfdb78 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6cfdb8b
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdc2b
        public_6cfdb8b : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdc2b
        public_6cfdb95 : nop
        cmp byte ptr ds : [edx+0x14], 0
        je public_6cfdada
        cmp eax, dword ptr ds : [ecx]
        jne public_6cfdbdf
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cfdbb7
        mov dword ptr ds : [edx+4], eax
        public_6cfdbb7 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cfdbca
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cfdbd9
        public_6cfdbca : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6cfdbd7
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdbd9
        public_6cfdbd7 : nop
        mov dword ptr ds : [edx], ecx
        public_6cfdbd9 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cfdbdf : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cfdc08
        mov dword ptr ds : [edi+4], ecx
        public_6cfdc08 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cfdc1b
        mov dword ptr ds : [edi+4], edx
        jmp public_6cfdc29
        public_6cfdc1b : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6cfdc26
        mov dword ptr ds : [edi], edx
        jmp public_6cfdc29
        public_6cfdc26 : nop
        mov dword ptr ds : [edi+8], edx
        public_6cfdc29 : nop
        mov dword ptr ds : [edx], ecx
        public_6cfdc2b : nop
        mov dword ptr ds : [ecx+4], edx
        public_6cfdc2e : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6cfdab6
        public_6cfdc3a : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6cfda20)
    }
}

#undef public_6cfda8e
#undef public_6cfdaa2
#undef public_6cfdaa8
#undef public_6cfdab6
#undef public_6cfdada
#undef public_6cfdaf7
#undef public_6cfdb10
#undef public_6cfdb23
#undef public_6cfdb2e
#undef public_6cfdb31
#undef public_6cfdb36
#undef public_6cfdb5f
#undef public_6cfdb78
#undef public_6cfdb8b
#undef public_6cfdb95
#undef public_6cfdbb7
#undef public_6cfdbca
#undef public_6cfdbd7
#undef public_6cfdbd9
#undef public_6cfdbdf
#undef public_6cfdc08
#undef public_6cfdc1b
#undef public_6cfdc26
#undef public_6cfdc29
#undef public_6cfdc2b
#undef public_6cfdc2e
#undef public_6cfdc3a
