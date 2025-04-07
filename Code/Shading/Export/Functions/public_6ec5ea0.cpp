#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec5f09 _public_6ec5f09
#define public_6ec5f1d _public_6ec5f1d
#define public_6ec5f23 _public_6ec5f23
#define public_6ec5f31 _public_6ec5f31
#define public_6ec5f72 _public_6ec5f72
#define public_6ec5f8b _public_6ec5f8b
#define public_6ec5f9e _public_6ec5f9e
#define public_6ec5fa9 _public_6ec5fa9
#define public_6ec5fac _public_6ec5fac
#define public_6ec5fb1 _public_6ec5fb1
#define public_6ec5fda _public_6ec5fda
#define public_6ec5ff3 _public_6ec5ff3
#define public_6ec6006 _public_6ec6006
#define public_6ec6010 _public_6ec6010
#define public_6ec6033 _public_6ec6033
#define public_6ec604b _public_6ec604b
#define public_6ec605e _public_6ec605e
#define public_6ec606b _public_6ec606b
#define public_6ec606d _public_6ec606d
#define public_6ec6073 _public_6ec6073
#define public_6ec609c _public_6ec609c
#define public_6ec60af _public_6ec60af
#define public_6ec60ba _public_6ec60ba
#define public_6ec60bd _public_6ec60bd
#define public_6ec60bf _public_6ec60bf
#define public_6ec60c2 _public_6ec60c2
#define public_6ec60ce _public_6ec60ce

PROC_DECLARE(0x6ec5ea0, internal_6ec5ea0, public_6ec5ea0);
extern "C" NAKED register_t __cdecl internal_6ec5ea0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6ed0c5c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ecf230
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ec5f09
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ec5f09
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6ec5f09
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ec5f23
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec5f23
        public_6ec5f09 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec5f1d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ec5f23
        public_6ec5f1d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ec5f23
        mov dword ptr ds : [eax], ebx
        public_6ec5f23 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ec60ce
        public_6ec5f31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ec60ce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ec6010
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6ec5f72
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ec60c2
        public_6ec5f72 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec5fb1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec5f8b
        mov dword ptr ds : [edx+4], eax
        public_6ec5f8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec5f9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec5fac
        public_6ec5f9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ec5fa9
        mov dword ptr ds : [edx], ecx
        jmp public_6ec5fac
        public_6ec5fa9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec5fac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec5fb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec5fda
        mov dword ptr ds : [edi+4], ecx
        public_6ec5fda : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec5ff3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec60bf
        public_6ec5ff3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec6006
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec60bf
        public_6ec6006 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec60bf
        public_6ec6010 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6ec6033
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ec60c2
        public_6ec6033 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec6073
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec604b
        mov dword ptr ds : [edx+4], eax
        public_6ec604b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec605e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec606d
        public_6ec605e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ec606b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec606d
        public_6ec606b : nop
        mov dword ptr ds : [edx], ecx
        public_6ec606d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec6073 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec609c
        mov dword ptr ds : [edi+4], ecx
        public_6ec609c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec60af
        mov dword ptr ds : [edi+4], edx
        jmp public_6ec60bd
        public_6ec60af : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ec60ba
        mov dword ptr ds : [edi], edx
        jmp public_6ec60bd
        public_6ec60ba : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec60bd : nop
        mov dword ptr ds : [edx], ecx
        public_6ec60bf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec60c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec5f31
        public_6ec60ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec5ea0)
    }
}

#undef public_6ec5f09
#undef public_6ec5f1d
#undef public_6ec5f23
#undef public_6ec5f31
#undef public_6ec5f72
#undef public_6ec5f8b
#undef public_6ec5f9e
#undef public_6ec5fa9
#undef public_6ec5fac
#undef public_6ec5fb1
#undef public_6ec5fda
#undef public_6ec5ff3
#undef public_6ec6006
#undef public_6ec6010
#undef public_6ec6033
#undef public_6ec604b
#undef public_6ec605e
#undef public_6ec606b
#undef public_6ec606d
#undef public_6ec6073
#undef public_6ec609c
#undef public_6ec60af
#undef public_6ec60ba
#undef public_6ec60bd
#undef public_6ec60bf
#undef public_6ec60c2
#undef public_6ec60ce
