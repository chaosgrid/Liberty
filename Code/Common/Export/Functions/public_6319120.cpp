#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319120);
CLANG_FORWARD_PROC_SYMBOL(public_631a090);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6319189 _public_6319189
#define public_631919d _public_631919d
#define public_63191a3 _public_63191a3
#define public_63191b1 _public_63191b1
#define public_63191f2 _public_63191f2
#define public_631920b _public_631920b
#define public_631921e _public_631921e
#define public_6319229 _public_6319229
#define public_631922c _public_631922c
#define public_6319231 _public_6319231
#define public_631925a _public_631925a
#define public_6319273 _public_6319273
#define public_6319286 _public_6319286
#define public_6319290 _public_6319290
#define public_63192b3 _public_63192b3
#define public_63192cb _public_63192cb
#define public_63192de _public_63192de
#define public_63192eb _public_63192eb
#define public_63192ed _public_63192ed
#define public_63192f3 _public_63192f3
#define public_631931c _public_631931c
#define public_631932f _public_631932f
#define public_631933a _public_631933a
#define public_631933d _public_631933d
#define public_631933f _public_631933f
#define public_6319342 _public_6319342
#define public_631934e _public_631934e

PROC_DECLARE(0x6319120, internal_6319120, public_6319120);
extern "C" NAKED register_t __cdecl internal_6319120()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x64
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x60], 0
        mov byte ptr ds : [ebx+0x61], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_631a090
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6319189
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6319189
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6319189
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_63191a3
        mov dword ptr ds : [eax+8], ebx
        jmp public_63191a3
        public_6319189 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_631919d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_63191a3
        public_631919d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_63191a3
        mov dword ptr ds : [eax], ebx
        public_63191a3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_631934e
        public_63191b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_631934e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6319290
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x60], 0
        jne public_63191f2
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6319342
        public_63191f2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6319231
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_631920b
        mov dword ptr ds : [edx+4], eax
        public_631920b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631921e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631922c
        public_631921e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6319229
        mov dword ptr ds : [edx], ecx
        jmp public_631922c
        public_6319229 : nop
        mov dword ptr ds : [edx+8], ecx
        public_631922c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6319231 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_631925a
        mov dword ptr ds : [edi+4], ecx
        public_631925a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6319273
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631933f
        public_6319273 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6319286
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631933f
        public_6319286 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631933f
        public_6319290 : nop
        cmp byte ptr ds : [edx+0x60], 0
        jne public_63192b3
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x60], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6319342
        public_63192b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_63192f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_63192cb
        mov dword ptr ds : [edx+4], eax
        public_63192cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63192de
        mov dword ptr ds : [edx+4], ecx
        jmp public_63192ed
        public_63192de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_63192eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_63192ed
        public_63192eb : nop
        mov dword ptr ds : [edx], ecx
        public_63192ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_63192f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_631931c
        mov dword ptr ds : [edi+4], ecx
        public_631931c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_631932f
        mov dword ptr ds : [edi+4], edx
        jmp public_631933d
        public_631932f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_631933a
        mov dword ptr ds : [edi], edx
        jmp public_631933d
        public_631933a : nop
        mov dword ptr ds : [edi+8], edx
        public_631933d : nop
        mov dword ptr ds : [edx], ecx
        public_631933f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6319342 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_63191b1
        public_631934e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x60], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6319120)
    }
}

#undef public_6319189
#undef public_631919d
#undef public_63191a3
#undef public_63191b1
#undef public_63191f2
#undef public_631920b
#undef public_631921e
#undef public_6319229
#undef public_631922c
#undef public_6319231
#undef public_631925a
#undef public_6319273
#undef public_6319286
#undef public_6319290
#undef public_63192b3
#undef public_63192cb
#undef public_63192de
#undef public_63192eb
#undef public_63192ed
#undef public_63192f3
#undef public_631931c
#undef public_631932f
#undef public_631933a
#undef public_631933d
#undef public_631933f
#undef public_6319342
#undef public_631934e
