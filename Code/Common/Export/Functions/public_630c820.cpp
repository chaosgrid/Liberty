#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630c820);
CLANG_FORWARD_PROC_SYMBOL(public_630cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630c889 _public_630c889
#define public_630c89d _public_630c89d
#define public_630c8a3 _public_630c8a3
#define public_630c8b1 _public_630c8b1
#define public_630c8f2 _public_630c8f2
#define public_630c90b _public_630c90b
#define public_630c91e _public_630c91e
#define public_630c929 _public_630c929
#define public_630c92c _public_630c92c
#define public_630c931 _public_630c931
#define public_630c95a _public_630c95a
#define public_630c973 _public_630c973
#define public_630c986 _public_630c986
#define public_630c990 _public_630c990
#define public_630c9b3 _public_630c9b3
#define public_630c9cb _public_630c9cb
#define public_630c9de _public_630c9de
#define public_630c9eb _public_630c9eb
#define public_630c9ed _public_630c9ed
#define public_630c9f3 _public_630c9f3
#define public_630ca1c _public_630ca1c
#define public_630ca2f _public_630ca2f
#define public_630ca3a _public_630ca3a
#define public_630ca3d _public_630ca3d
#define public_630ca3f _public_630ca3f
#define public_630ca42 _public_630ca42
#define public_630ca4e _public_630ca4e

PROC_DECLARE(0x630c820, internal_630c820, public_630c820);
extern "C" NAKED register_t __cdecl internal_630c820()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x74
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x70], 0
        mov byte ptr ds : [ebx+0x71], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_630cb70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_630c889
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_630c889
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_630c889
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_630c8a3
        mov dword ptr ds : [eax+8], ebx
        jmp public_630c8a3
        public_630c889 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_630c89d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_630c8a3
        public_630c89d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_630c8a3
        mov dword ptr ds : [eax], ebx
        public_630c8a3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_630ca4e
        public_630c8b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_630ca4e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_630c990
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x70], 0
        jne public_630c8f2
        mov byte ptr ds : [ecx+0x70], 1
        mov byte ptr ds : [edx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_630ca42
        public_630c8f2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_630c931
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_630c90b
        mov dword ptr ds : [edx+4], eax
        public_630c90b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_630c91e
        mov dword ptr ds : [edx+4], ecx
        jmp public_630c92c
        public_630c91e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_630c929
        mov dword ptr ds : [edx], ecx
        jmp public_630c92c
        public_630c929 : nop
        mov dword ptr ds : [edx+8], ecx
        public_630c92c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_630c931 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_630c95a
        mov dword ptr ds : [edi+4], ecx
        public_630c95a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_630c973
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630ca3f
        public_630c973 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_630c986
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630ca3f
        public_630c986 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630ca3f
        public_630c990 : nop
        cmp byte ptr ds : [edx+0x70], 0
        jne public_630c9b3
        mov byte ptr ds : [ecx+0x70], 1
        mov byte ptr ds : [edx+0x70], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x70], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_630ca42
        public_630c9b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_630c9f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_630c9cb
        mov dword ptr ds : [edx+4], eax
        public_630c9cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_630c9de
        mov dword ptr ds : [edx+4], ecx
        jmp public_630c9ed
        public_630c9de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_630c9eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_630c9ed
        public_630c9eb : nop
        mov dword ptr ds : [edx], ecx
        public_630c9ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_630c9f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_630ca1c
        mov dword ptr ds : [edi+4], ecx
        public_630ca1c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_630ca2f
        mov dword ptr ds : [edi+4], edx
        jmp public_630ca3d
        public_630ca2f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_630ca3a
        mov dword ptr ds : [edi], edx
        jmp public_630ca3d
        public_630ca3a : nop
        mov dword ptr ds : [edi+8], edx
        public_630ca3d : nop
        mov dword ptr ds : [edx], ecx
        public_630ca3f : nop
        mov dword ptr ds : [ecx+4], edx
        public_630ca42 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_630c8b1
        public_630ca4e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x70], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x630c820)
    }
}

#undef public_630c889
#undef public_630c89d
#undef public_630c8a3
#undef public_630c8b1
#undef public_630c8f2
#undef public_630c90b
#undef public_630c91e
#undef public_630c929
#undef public_630c92c
#undef public_630c931
#undef public_630c95a
#undef public_630c973
#undef public_630c986
#undef public_630c990
#undef public_630c9b3
#undef public_630c9cb
#undef public_630c9de
#undef public_630c9eb
#undef public_630c9ed
#undef public_630c9f3
#undef public_630ca1c
#undef public_630ca2f
#undef public_630ca3a
#undef public_630ca3d
#undef public_630ca3f
#undef public_630ca42
#undef public_630ca4e
