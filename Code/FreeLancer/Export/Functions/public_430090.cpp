#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430090);
CLANG_FORWARD_PROC_SYMBOL(public_430670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_430102 _public_430102
#define public_430116 _public_430116
#define public_43011c _public_43011c
#define public_430130 _public_430130
#define public_430180 _public_430180
#define public_430199 _public_430199
#define public_4301ac _public_4301ac
#define public_4301b7 _public_4301b7
#define public_4301ba _public_4301ba
#define public_4301bf _public_4301bf
#define public_4301ee _public_4301ee
#define public_430207 _public_430207
#define public_43021a _public_43021a
#define public_430224 _public_430224
#define public_430253 _public_430253
#define public_43026b _public_43026b
#define public_43027e _public_43027e
#define public_43028b _public_43028b
#define public_43028d _public_43028d
#define public_430293 _public_430293
#define public_4302c2 _public_4302c2
#define public_4302d5 _public_4302d5
#define public_4302e0 _public_4302e0
#define public_4302e3 _public_4302e3
#define public_4302e5 _public_4302e5
#define public_4302e8 _public_4302e8
#define public_4302f4 _public_4302f4

PROC_DECLARE(0x430090, internal_430090, public_430090);
extern "C" NAKED register_t __cdecl internal_430090()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x94
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x90], 0
        mov byte ptr ds : [ebx+0x91], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_430670
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_430102
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_430102
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_430102
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_43011c
        mov dword ptr ds : [eax+8], ebx
        jmp public_43011c
        public_430102 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_430116
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_43011c
        public_430116 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_43011c
        mov dword ptr ds : [eax], ebx
        public_43011c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4302f4
        lea ebx, ds:[ebx]
        public_430130 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_4302f4
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_430224
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x90], 0
        jne public_430180
        mov byte ptr ds : [ecx+0x90], 1
        mov byte ptr ds : [edx+0x90], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4302e8
        public_430180 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4301bf
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_430199
        mov dword ptr ds : [edx+4], eax
        public_430199 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4301ac
        mov dword ptr ds : [edx+4], ecx
        jmp public_4301ba
        public_4301ac : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4301b7
        mov dword ptr ds : [edx], ecx
        jmp public_4301ba
        public_4301b7 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4301ba : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4301bf : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_4301ee
        mov dword ptr ds : [edi+4], ecx
        public_4301ee : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_430207
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4302e5
        public_430207 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_43021a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4302e5
        public_43021a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4302e5
        public_430224 : nop
        cmp byte ptr ds : [edx+0x90], 0
        jne public_430253
        mov byte ptr ds : [ecx+0x90], 1
        mov byte ptr ds : [edx+0x90], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x90], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4302e8
        public_430253 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_430293
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_43026b
        mov dword ptr ds : [edx+4], eax
        public_43026b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_43027e
        mov dword ptr ds : [edx+4], ecx
        jmp public_43028d
        public_43027e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_43028b
        mov dword ptr ds : [edx+8], ecx
        jmp public_43028d
        public_43028b : nop
        mov dword ptr ds : [edx], ecx
        public_43028d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_430293 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4302c2
        mov dword ptr ds : [edi+4], ecx
        public_4302c2 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4302d5
        mov dword ptr ds : [edi+4], edx
        jmp public_4302e3
        public_4302d5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4302e0
        mov dword ptr ds : [edi], edx
        jmp public_4302e3
        public_4302e0 : nop
        mov dword ptr ds : [edi+8], edx
        public_4302e3 : nop
        mov dword ptr ds : [edx], ecx
        public_4302e5 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4302e8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_430130
        public_4302f4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x90], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x430090)
    }
}

#undef public_430102
#undef public_430116
#undef public_43011c
#undef public_430130
#undef public_430180
#undef public_430199
#undef public_4301ac
#undef public_4301b7
#undef public_4301ba
#undef public_4301bf
#undef public_4301ee
#undef public_430207
#undef public_43021a
#undef public_430224
#undef public_430253
#undef public_43026b
#undef public_43027e
#undef public_43028b
#undef public_43028d
#undef public_430293
#undef public_4302c2
#undef public_4302d5
#undef public_4302e0
#undef public_4302e3
#undef public_4302e5
#undef public_4302e8
#undef public_4302f4
