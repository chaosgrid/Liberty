#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_40df40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40d2de _public_40d2de
#define public_40d2e6 _public_40d2e6
#define public_40d2f1 _public_40d2f1
#define public_40d2f9 _public_40d2f9
#define public_40d306 _public_40d306
#define public_40d31a _public_40d31a
#define public_40d336 _public_40d336
#define public_40d347 _public_40d347
#define public_40d351 _public_40d351
#define public_40d359 _public_40d359
#define public_40d361 _public_40d361
#define public_40d369 _public_40d369
#define public_40d371 _public_40d371
#define public_40d381 _public_40d381
#define public_40d389 _public_40d389
#define public_40d390 _public_40d390
#define public_40d3a4 _public_40d3a4
#define public_40d3b0 _public_40d3b0
#define public_40d3c4 _public_40d3c4
#define public_40d3e2 _public_40d3e2
#define public_40d3ff _public_40d3ff
#define public_40d413 _public_40d413
#define public_40d41b _public_40d41b
#define public_40d421 _public_40d421
#define public_40d440 _public_40d440
#define public_40d454 _public_40d454

PROC_DECLARE(0x40d2c0, internal_40d2c0, public_40d2c0);
extern "C" NAKED register_t __cdecl internal_40d2c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_40d347
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_40d2de
        xor esi, esi
        jmp public_40d2e6
        public_40d2de : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_40d2e6 : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_40d2f1
        xor ecx, ecx
        jmp public_40d2f9
        public_40d2f1 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 3
        public_40d2f9 : nop
        cmp esi, ecx
        ja public_40d351
        mov esi, dword ptr ss : [ebp+8]
        cmp eax, esi
        mov ecx, edx
        je public_40d31a
        public_40d306 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_40d306
        public_40d31a : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_40d336
        mov eax, dword ptr ds : [edi+4]
        xor ebp, ebp
        lea ecx, ds:[eax+ebp*8]
        mov dword ptr ds : [edi+8], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_40d336 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ds : [edi+4]
        sar ebp, 3
        lea ecx, ds:[eax+ebp*8]
        mov dword ptr ds : [edi+8], ecx
        public_40d347 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_40d351 : nop
        test eax, eax
        jne public_40d359
        xor esi, esi
        jmp public_40d361
        public_40d359 : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_40d361 : nop
        test edx, edx
        jne public_40d369
        xor ecx, ecx
        jmp public_40d371
        public_40d369 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, edx
        sar ecx, 3
        public_40d371 : nop
        cmp esi, ecx
        ja public_40d3ff
        test edx, edx
        jne public_40d381
        xor ecx, ecx
        jmp public_40d389
        public_40d381 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, edx
        sar ecx, 3
        public_40d389 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_40d3a4
        public_40d390 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_40d390
        public_40d3a4 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov edi, dword ptr ds : [edi+8]
        mov esi, ecx
        je public_40d3c4
        public_40d3b0 : nop
        push esi
        push edi
        call public_40df40
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_40d3b0
        public_40d3c4 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_40d3e2
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        xor ebp, ebp
        pop esi
        lea ecx, ds:[edx+ebp*8]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_40d3e2 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        sar ebp, 3
        pop esi
        lea ecx, ds:[edx+ebp*8]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_40d3ff : nop
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_40d413
        xor eax, eax
        jmp public_40d41b
        public_40d413 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_40d41b : nop
        test eax, eax
        jge public_40d421
        xor eax, eax
        public_40d421 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov dword ptr ds : [edi+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_40d454
        public_40d440 : nop
        push esi
        push edi
        call public_40df40
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_40d440
        public_40d454 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40d2c0)
    }
}

#undef public_40d2de
#undef public_40d2e6
#undef public_40d2f1
#undef public_40d2f9
#undef public_40d306
#undef public_40d31a
#undef public_40d336
#undef public_40d347
#undef public_40d351
#undef public_40d359
#undef public_40d361
#undef public_40d369
#undef public_40d371
#undef public_40d381
#undef public_40d389
#undef public_40d390
#undef public_40d3a4
#undef public_40d3b0
#undef public_40d3c4
#undef public_40d3e2
#undef public_40d3ff
#undef public_40d413
#undef public_40d41b
#undef public_40d421
#undef public_40d440
#undef public_40d454
