#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290060);
CLANG_FORWARD_PROC_SYMBOL(public_62905a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62900c9 _public_62900c9
#define public_62900dd _public_62900dd
#define public_62900e3 _public_62900e3
#define public_62900f1 _public_62900f1
#define public_6290132 _public_6290132
#define public_629014b _public_629014b
#define public_629015e _public_629015e
#define public_6290169 _public_6290169
#define public_629016c _public_629016c
#define public_6290171 _public_6290171
#define public_629019a _public_629019a
#define public_62901b3 _public_62901b3
#define public_62901c6 _public_62901c6
#define public_62901d0 _public_62901d0
#define public_62901f3 _public_62901f3
#define public_629020b _public_629020b
#define public_629021e _public_629021e
#define public_629022b _public_629022b
#define public_629022d _public_629022d
#define public_6290233 _public_6290233
#define public_629025c _public_629025c
#define public_629026f _public_629026f
#define public_629027a _public_629027a
#define public_629027d _public_629027d
#define public_629027f _public_629027f
#define public_6290282 _public_6290282
#define public_629028e _public_629028e

PROC_DECLARE(0x6290060, internal_6290060, public_6290060);
extern "C" NAKED register_t __cdecl internal_6290060()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x58
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x54], 0
        mov byte ptr ds : [ebx+0x55], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62905a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62900c9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62900c9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_62900c9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62900e3
        mov dword ptr ds : [eax+8], ebx
        jmp public_62900e3
        public_62900c9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62900dd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62900e3
        public_62900dd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62900e3
        mov dword ptr ds : [eax], ebx
        public_62900e3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_629028e
        public_62900f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_629028e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62901d0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x54], 0
        jne public_6290132
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6290282
        public_6290132 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6290171
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_629014b
        mov dword ptr ds : [edx+4], eax
        public_629014b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_629015e
        mov dword ptr ds : [edx+4], ecx
        jmp public_629016c
        public_629015e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6290169
        mov dword ptr ds : [edx], ecx
        jmp public_629016c
        public_6290169 : nop
        mov dword ptr ds : [edx+8], ecx
        public_629016c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6290171 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_629019a
        mov dword ptr ds : [edi+4], ecx
        public_629019a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62901b3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_629027f
        public_62901b3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62901c6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_629027f
        public_62901c6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_629027f
        public_62901d0 : nop
        cmp byte ptr ds : [edx+0x54], 0
        jne public_62901f3
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6290282
        public_62901f3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6290233
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_629020b
        mov dword ptr ds : [edx+4], eax
        public_629020b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_629021e
        mov dword ptr ds : [edx+4], ecx
        jmp public_629022d
        public_629021e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_629022b
        mov dword ptr ds : [edx+8], ecx
        jmp public_629022d
        public_629022b : nop
        mov dword ptr ds : [edx], ecx
        public_629022d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6290233 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_629025c
        mov dword ptr ds : [edi+4], ecx
        public_629025c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_629026f
        mov dword ptr ds : [edi+4], edx
        jmp public_629027d
        public_629026f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_629027a
        mov dword ptr ds : [edi], edx
        jmp public_629027d
        public_629027a : nop
        mov dword ptr ds : [edi+8], edx
        public_629027d : nop
        mov dword ptr ds : [edx], ecx
        public_629027f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6290282 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62900f1
        public_629028e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6290060)
    }
}

#undef public_62900c9
#undef public_62900dd
#undef public_62900e3
#undef public_62900f1
#undef public_6290132
#undef public_629014b
#undef public_629015e
#undef public_6290169
#undef public_629016c
#undef public_6290171
#undef public_629019a
#undef public_62901b3
#undef public_62901c6
#undef public_62901d0
#undef public_62901f3
#undef public_629020b
#undef public_629021e
#undef public_629022b
#undef public_629022d
#undef public_6290233
#undef public_629025c
#undef public_629026f
#undef public_629027a
#undef public_629027d
#undef public_629027f
#undef public_6290282
#undef public_629028e
