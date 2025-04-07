#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da3210);
CLANG_FORWARD_PROC_SYMBOL(public_6da3590);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da3283 _public_6da3283
#define public_6da3297 _public_6da3297
#define public_6da329d _public_6da329d
#define public_6da32b0 _public_6da32b0
#define public_6da32f1 _public_6da32f1
#define public_6da330a _public_6da330a
#define public_6da331d _public_6da331d
#define public_6da3328 _public_6da3328
#define public_6da332b _public_6da332b
#define public_6da3330 _public_6da3330
#define public_6da3359 _public_6da3359
#define public_6da3372 _public_6da3372
#define public_6da3385 _public_6da3385
#define public_6da338f _public_6da338f
#define public_6da33b2 _public_6da33b2
#define public_6da33ca _public_6da33ca
#define public_6da33dd _public_6da33dd
#define public_6da33ea _public_6da33ea
#define public_6da33ec _public_6da33ec
#define public_6da33f2 _public_6da33f2
#define public_6da341b _public_6da341b
#define public_6da342e _public_6da342e
#define public_6da3439 _public_6da3439
#define public_6da343c _public_6da343c
#define public_6da343e _public_6da343e
#define public_6da3441 _public_6da3441
#define public_6da344d _public_6da344d

PROC_DECLARE(0x6da3210, internal_6da3210, public_6da3210);
extern "C" NAKED register_t __cdecl internal_6da3210()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6db1f8a
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
        call public_6da3590
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6da3283
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6da3283
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        jne public_6da3283
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6da329d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6da329d
        public_6da3283 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6da3297
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6da329d
        public_6da3297 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6da329d
        mov dword ptr ds : [eax], ebx
        public_6da329d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6da344d
        nop 
        lea esp, ss:[esp]
        public_6da32b0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6da344d
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6da338f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6da32f1
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6da3441
        public_6da32f1 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6da3330
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6da330a
        mov dword ptr ds : [edx+4], eax
        public_6da330a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6da331d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da332b
        public_6da331d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6da3328
        mov dword ptr ds : [edx], ecx
        jmp public_6da332b
        public_6da3328 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da332b : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6da3330 : nop
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
        je public_6da3359
        mov dword ptr ds : [edi+4], ecx
        public_6da3359 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6da3372
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da343e
        public_6da3372 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da3385
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da343e
        public_6da3385 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da343e
        public_6da338f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6da33b2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6da3441
        public_6da33b2 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6da33f2
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6da33ca
        mov dword ptr ds : [edx+4], eax
        public_6da33ca : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6da33dd
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da33ec
        public_6da33dd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6da33ea
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da33ec
        public_6da33ea : nop
        mov dword ptr ds : [edx], ecx
        public_6da33ec : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6da33f2 : nop
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
        je public_6da341b
        mov dword ptr ds : [edi+4], ecx
        public_6da341b : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6da342e
        mov dword ptr ds : [edi+4], edx
        jmp public_6da343c
        public_6da342e : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6da3439
        mov dword ptr ds : [edi], edx
        jmp public_6da343c
        public_6da3439 : nop
        mov dword ptr ds : [edi+8], edx
        public_6da343c : nop
        mov dword ptr ds : [edx], ecx
        public_6da343e : nop
        mov dword ptr ds : [ecx+4], edx
        public_6da3441 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6da32b0
        public_6da344d : nop
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
        UNREACHABLE_TRAP(0x6da3210)
    }
}

#undef public_6da3283
#undef public_6da3297
#undef public_6da329d
#undef public_6da32b0
#undef public_6da32f1
#undef public_6da330a
#undef public_6da331d
#undef public_6da3328
#undef public_6da332b
#undef public_6da3330
#undef public_6da3359
#undef public_6da3372
#undef public_6da3385
#undef public_6da338f
#undef public_6da33b2
#undef public_6da33ca
#undef public_6da33dd
#undef public_6da33ea
#undef public_6da33ec
#undef public_6da33f2
#undef public_6da341b
#undef public_6da342e
#undef public_6da3439
#undef public_6da343c
#undef public_6da343e
#undef public_6da3441
#undef public_6da344d
