#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f58d70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f58b69 _public_6f58b69
#define public_6f58b7d _public_6f58b7d
#define public_6f58b83 _public_6f58b83
#define public_6f58b91 _public_6f58b91
#define public_6f58bd2 _public_6f58bd2
#define public_6f58beb _public_6f58beb
#define public_6f58bfe _public_6f58bfe
#define public_6f58c09 _public_6f58c09
#define public_6f58c0c _public_6f58c0c
#define public_6f58c11 _public_6f58c11
#define public_6f58c3a _public_6f58c3a
#define public_6f58c53 _public_6f58c53
#define public_6f58c66 _public_6f58c66
#define public_6f58c70 _public_6f58c70
#define public_6f58c93 _public_6f58c93
#define public_6f58cab _public_6f58cab
#define public_6f58cbe _public_6f58cbe
#define public_6f58ccb _public_6f58ccb
#define public_6f58ccd _public_6f58ccd
#define public_6f58cd3 _public_6f58cd3
#define public_6f58cfc _public_6f58cfc
#define public_6f58d0f _public_6f58d0f
#define public_6f58d1a _public_6f58d1a
#define public_6f58d1d _public_6f58d1d
#define public_6f58d1f _public_6f58d1f
#define public_6f58d22 _public_6f58d22
#define public_6f58d2e _public_6f58d2e

PROC_DECLARE(0x6f58b00, internal_6f58b00, public_6f58b00);
extern "C" NAKED register_t __cdecl internal_6f58b00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f58d70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f58b69
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f58b69
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f58b69
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f58b83
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f58b83
        public_6f58b69 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f58b7d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f58b83
        public_6f58b7d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f58b83
        mov dword ptr ds : [eax], ebx
        public_6f58b83 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f58d2e
        public_6f58b91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f58d2e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f58c70
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f58bd2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f58d22
        public_6f58bd2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f58c11
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f58beb
        mov dword ptr ds : [edx+4], eax
        public_6f58beb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f58bfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f58c0c
        public_6f58bfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f58c09
        mov dword ptr ds : [edx], ecx
        jmp public_6f58c0c
        public_6f58c09 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f58c0c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f58c11 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f58c3a
        mov dword ptr ds : [edi+4], ecx
        public_6f58c3a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f58c53
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f58d1f
        public_6f58c53 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f58c66
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f58d1f
        public_6f58c66 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f58d1f
        public_6f58c70 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f58c93
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f58d22
        public_6f58c93 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f58cd3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f58cab
        mov dword ptr ds : [edx+4], eax
        public_6f58cab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f58cbe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f58ccd
        public_6f58cbe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f58ccb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f58ccd
        public_6f58ccb : nop
        mov dword ptr ds : [edx], ecx
        public_6f58ccd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f58cd3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f58cfc
        mov dword ptr ds : [edi+4], ecx
        public_6f58cfc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f58d0f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f58d1d
        public_6f58d0f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f58d1a
        mov dword ptr ds : [edi], edx
        jmp public_6f58d1d
        public_6f58d1a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f58d1d : nop
        mov dword ptr ds : [edx], ecx
        public_6f58d1f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f58d22 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f58b91
        public_6f58d2e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f58b00)
    }
}

#undef public_6f58b69
#undef public_6f58b7d
#undef public_6f58b83
#undef public_6f58b91
#undef public_6f58bd2
#undef public_6f58beb
#undef public_6f58bfe
#undef public_6f58c09
#undef public_6f58c0c
#undef public_6f58c11
#undef public_6f58c3a
#undef public_6f58c53
#undef public_6f58c66
#undef public_6f58c70
#undef public_6f58c93
#undef public_6f58cab
#undef public_6f58cbe
#undef public_6f58ccb
#undef public_6f58ccd
#undef public_6f58cd3
#undef public_6f58cfc
#undef public_6f58d0f
#undef public_6f58d1a
#undef public_6f58d1d
#undef public_6f58d1f
#undef public_6f58d22
#undef public_6f58d2e
