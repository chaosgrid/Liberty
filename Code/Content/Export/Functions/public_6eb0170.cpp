#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb0170);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb01e2 _public_6eb01e2
#define public_6eb01f6 _public_6eb01f6
#define public_6eb01fc _public_6eb01fc
#define public_6eb0210 _public_6eb0210
#define public_6eb0260 _public_6eb0260
#define public_6eb0279 _public_6eb0279
#define public_6eb028c _public_6eb028c
#define public_6eb0297 _public_6eb0297
#define public_6eb029a _public_6eb029a
#define public_6eb029f _public_6eb029f
#define public_6eb02ce _public_6eb02ce
#define public_6eb02e7 _public_6eb02e7
#define public_6eb02fa _public_6eb02fa
#define public_6eb0304 _public_6eb0304
#define public_6eb0333 _public_6eb0333
#define public_6eb034b _public_6eb034b
#define public_6eb035e _public_6eb035e
#define public_6eb036b _public_6eb036b
#define public_6eb036d _public_6eb036d
#define public_6eb0373 _public_6eb0373
#define public_6eb03a2 _public_6eb03a2
#define public_6eb03b5 _public_6eb03b5
#define public_6eb03c0 _public_6eb03c0
#define public_6eb03c3 _public_6eb03c3
#define public_6eb03c5 _public_6eb03c5
#define public_6eb03c8 _public_6eb03c8
#define public_6eb03d4 _public_6eb03d4

PROC_DECLARE(0x6eb0170, internal_6eb0170, public_6eb0170);
extern "C" NAKED register_t __cdecl internal_6eb0170()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xA8
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xA4], 0
        mov byte ptr ds : [ebx+0xA5], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eb1960
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eb01e2
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eb01e2
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eb01e2
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eb01fc
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb01fc
        public_6eb01e2 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eb01f6
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eb01fc
        public_6eb01f6 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eb01fc
        mov dword ptr ds : [eax], ebx
        public_6eb01fc : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eb03d4
        lea ebx, ds:[ebx]
        public_6eb0210 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xA4]
        test dl, dl
        jne public_6eb03d4
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eb0304
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xA4], 0
        jne public_6eb0260
        mov byte ptr ds : [ecx+0xA4], 1
        mov byte ptr ds : [edx+0xA4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eb03c8
        public_6eb0260 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb029f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb0279
        mov dword ptr ds : [edx+4], eax
        public_6eb0279 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb028c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb029a
        public_6eb028c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eb0297
        mov dword ptr ds : [edx], ecx
        jmp public_6eb029a
        public_6eb0297 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb029a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb029f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb02ce
        mov dword ptr ds : [edi+4], ecx
        public_6eb02ce : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb02e7
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb03c5
        public_6eb02e7 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb02fa
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb03c5
        public_6eb02fa : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb03c5
        public_6eb0304 : nop
        cmp byte ptr ds : [edx+0xA4], 0
        jne public_6eb0333
        mov byte ptr ds : [ecx+0xA4], 1
        mov byte ptr ds : [edx+0xA4], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xA4], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eb03c8
        public_6eb0333 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eb0373
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb034b
        mov dword ptr ds : [edx+4], eax
        public_6eb034b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb035e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb036d
        public_6eb035e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eb036b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb036d
        public_6eb036b : nop
        mov dword ptr ds : [edx], ecx
        public_6eb036d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb0373 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb03a2
        mov dword ptr ds : [edi+4], ecx
        public_6eb03a2 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb03b5
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb03c3
        public_6eb03b5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb03c0
        mov dword ptr ds : [edi], edx
        jmp public_6eb03c3
        public_6eb03c0 : nop
        mov dword ptr ds : [edi+8], edx
        public_6eb03c3 : nop
        mov dword ptr ds : [edx], ecx
        public_6eb03c5 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb03c8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb0210
        public_6eb03d4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xA4], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6eb0170)
    }
}

#undef public_6eb01e2
#undef public_6eb01f6
#undef public_6eb01fc
#undef public_6eb0210
#undef public_6eb0260
#undef public_6eb0279
#undef public_6eb028c
#undef public_6eb0297
#undef public_6eb029a
#undef public_6eb029f
#undef public_6eb02ce
#undef public_6eb02e7
#undef public_6eb02fa
#undef public_6eb0304
#undef public_6eb0333
#undef public_6eb034b
#undef public_6eb035e
#undef public_6eb036b
#undef public_6eb036d
#undef public_6eb0373
#undef public_6eb03a2
#undef public_6eb03b5
#undef public_6eb03c0
#undef public_6eb03c3
#undef public_6eb03c5
#undef public_6eb03c8
#undef public_6eb03d4
