#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_63341a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6334216 _public_6334216
#define public_633422a _public_633422a
#define public_6334230 _public_6334230
#define public_6334240 _public_6334240
#define public_6334281 _public_6334281
#define public_633429a _public_633429a
#define public_63342ad _public_63342ad
#define public_63342b8 _public_63342b8
#define public_63342bb _public_63342bb
#define public_63342c0 _public_63342c0
#define public_63342e9 _public_63342e9
#define public_6334302 _public_6334302
#define public_6334315 _public_6334315
#define public_633431f _public_633431f
#define public_6334342 _public_6334342
#define public_633435a _public_633435a
#define public_633436d _public_633436d
#define public_633437a _public_633437a
#define public_633437c _public_633437c
#define public_6334382 _public_6334382
#define public_63343ab _public_63343ab
#define public_63343be _public_63343be
#define public_63343c9 _public_63343c9
#define public_63343cc _public_63343cc
#define public_63343ce _public_63343ce
#define public_63343d1 _public_63343d1
#define public_63343dd _public_63343dd

PROC_DECLARE(0x63341a0, internal_63341a0, public_63341a0);
extern "C" NAKED register_t __cdecl internal_63341a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6391d9c
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
        call public_62bee40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6334216
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6334216
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push edx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jl public_6334216
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6334230
        mov dword ptr ds : [eax+8], ebx
        jmp public_6334230
        public_6334216 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_633422a
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], ebx
        jmp public_6334230
        public_633422a : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6334230
        mov dword ptr ds : [eax], ebx
        public_6334230 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63343dd
        mov edi, edi
        public_6334240 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_63343dd
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_633431f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6334281
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63343d1
        public_6334281 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63342c0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_633429a
        mov dword ptr ds : [edx+4], eax
        public_633429a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63342ad
        mov dword ptr ds : [edx+4], ecx
        jmp public_63342bb
        public_63342ad : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_63342b8
        mov dword ptr ds : [edx], ecx
        jmp public_63342bb
        public_63342b8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63342bb : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63342c0 : nop
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
        je public_63342e9
        mov dword ptr ds : [edi+4], ecx
        public_63342e9 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6334302
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63343ce
        public_6334302 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6334315
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63343ce
        public_6334315 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63343ce
        public_633431f : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6334342
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63343d1
        public_6334342 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6334382
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_633435a
        mov dword ptr ds : [edx+4], eax
        public_633435a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_633436d
        mov dword ptr ds : [edx+4], ecx
        jmp public_633437c
        public_633436d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_633437a
        mov dword ptr ds : [edx+8], ecx
        jmp public_633437c
        public_633437a : nop
        mov dword ptr ds : [edx], ecx
        public_633437c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6334382 : nop
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
        je public_63343ab
        mov dword ptr ds : [edi+4], ecx
        public_63343ab : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63343be
        mov dword ptr ds : [edi+4], edx
        jmp public_63343cc
        public_63343be : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63343c9
        mov dword ptr ds : [edi], edx
        jmp public_63343cc
        public_63343c9 : nop
        mov dword ptr ds : [edi+8], edx
        public_63343cc : nop
        mov dword ptr ds : [edx], ecx
        public_63343ce : nop
        mov dword ptr ds : [ecx+4], edx
        public_63343d1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6334240
        public_63343dd : nop
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
        UNREACHABLE_TRAP(0x63341a0)
    }
}

#undef public_6334216
#undef public_633422a
#undef public_6334230
#undef public_6334240
#undef public_6334281
#undef public_633429a
#undef public_63342ad
#undef public_63342b8
#undef public_63342bb
#undef public_63342c0
#undef public_63342e9
#undef public_6334302
#undef public_6334315
#undef public_633431f
#undef public_6334342
#undef public_633435a
#undef public_633436d
#undef public_633437a
#undef public_633437c
#undef public_6334382
#undef public_63343ab
#undef public_63343be
#undef public_63343c9
#undef public_63343cc
#undef public_63343ce
#undef public_63343d1
#undef public_63343dd
