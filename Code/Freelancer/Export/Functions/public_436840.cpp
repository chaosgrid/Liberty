#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436840);
CLANG_FORWARD_PROC_SYMBOL(public_436ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4368a9 _public_4368a9
#define public_4368bd _public_4368bd
#define public_4368c3 _public_4368c3
#define public_4368d1 _public_4368d1
#define public_436912 _public_436912
#define public_43692b _public_43692b
#define public_43693e _public_43693e
#define public_436949 _public_436949
#define public_43694c _public_43694c
#define public_436951 _public_436951
#define public_43697a _public_43697a
#define public_436993 _public_436993
#define public_4369a6 _public_4369a6
#define public_4369b0 _public_4369b0
#define public_4369d3 _public_4369d3
#define public_4369eb _public_4369eb
#define public_4369fe _public_4369fe
#define public_436a0b _public_436a0b
#define public_436a0d _public_436a0d
#define public_436a13 _public_436a13
#define public_436a3c _public_436a3c
#define public_436a4f _public_436a4f
#define public_436a5a _public_436a5a
#define public_436a5d _public_436a5d
#define public_436a5f _public_436a5f
#define public_436a62 _public_436a62
#define public_436a6e _public_436a6e

PROC_DECLARE(0x436840, internal_436840, public_436840);
extern "C" NAKED register_t __cdecl internal_436840()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_436ea0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4368a9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4368a9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4368a9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4368c3
        mov dword ptr ds : [eax+8], ebx
        jmp public_4368c3
        public_4368a9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4368bd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4368c3
        public_4368bd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4368c3
        mov dword ptr ds : [eax], ebx
        public_4368c3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_436a6e
        public_4368d1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_436a6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4369b0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_436912
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_436a62
        public_436912 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_436951
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_43692b
        mov dword ptr ds : [edx+4], eax
        public_43692b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_43693e
        mov dword ptr ds : [edx+4], ecx
        jmp public_43694c
        public_43693e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_436949
        mov dword ptr ds : [edx], ecx
        jmp public_43694c
        public_436949 : nop
        mov dword ptr ds : [edx+8], ecx
        public_43694c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_436951 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_43697a
        mov dword ptr ds : [edi+4], ecx
        public_43697a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_436993
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_436a5f
        public_436993 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4369a6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_436a5f
        public_4369a6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_436a5f
        public_4369b0 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_4369d3
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_436a62
        public_4369d3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_436a13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4369eb
        mov dword ptr ds : [edx+4], eax
        public_4369eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4369fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_436a0d
        public_4369fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_436a0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_436a0d
        public_436a0b : nop
        mov dword ptr ds : [edx], ecx
        public_436a0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_436a13 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_436a3c
        mov dword ptr ds : [edi+4], ecx
        public_436a3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_436a4f
        mov dword ptr ds : [edi+4], edx
        jmp public_436a5d
        public_436a4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_436a5a
        mov dword ptr ds : [edi], edx
        jmp public_436a5d
        public_436a5a : nop
        mov dword ptr ds : [edi+8], edx
        public_436a5d : nop
        mov dword ptr ds : [edx], ecx
        public_436a5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_436a62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4368d1
        public_436a6e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x436840)
    }
}

#undef public_4368a9
#undef public_4368bd
#undef public_4368c3
#undef public_4368d1
#undef public_436912
#undef public_43692b
#undef public_43693e
#undef public_436949
#undef public_43694c
#undef public_436951
#undef public_43697a
#undef public_436993
#undef public_4369a6
#undef public_4369b0
#undef public_4369d3
#undef public_4369eb
#undef public_4369fe
#undef public_436a0b
#undef public_436a0d
#undef public_436a13
#undef public_436a3c
#undef public_436a4f
#undef public_436a5a
#undef public_436a5d
#undef public_436a5f
#undef public_436a62
#undef public_436a6e
