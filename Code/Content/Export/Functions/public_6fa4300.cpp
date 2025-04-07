#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4300);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa4320 _public_6fa4320
#define public_6fa4342 _public_6fa4342
#define public_6fa4344 _public_6fa4344
#define public_6fa435a _public_6fa435a
#define public_6fa435f _public_6fa435f
#define public_6fa4369 _public_6fa4369
#define public_6fa436e _public_6fa436e
#define public_6fa4380 _public_6fa4380
#define public_6fa438a _public_6fa438a
#define public_6fa439f _public_6fa439f
#define public_6fa43b0 _public_6fa43b0
#define public_6fa43b8 _public_6fa43b8
#define public_6fa43bd _public_6fa43bd
#define public_6fa43c5 _public_6fa43c5
#define public_6fa43ca _public_6fa43ca
#define public_6fa43d6 _public_6fa43d6
#define public_6fa43db _public_6fa43db
#define public_6fa43e3 _public_6fa43e3
#define public_6fa43ed _public_6fa43ed
#define public_6fa4400 _public_6fa4400
#define public_6fa4410 _public_6fa4410
#define public_6fa441b _public_6fa441b
#define public_6fa4420 _public_6fa4420
#define public_6fa4433 _public_6fa4433
#define public_6fa4447 _public_6fa4447
#define public_6fa444c _public_6fa444c
#define public_6fa4452 _public_6fa4452
#define public_6fa4467 _public_6fa4467
#define public_6fa446f _public_6fa446f
#define public_6fa4475 _public_6fa4475
#define public_6fa447b _public_6fa447b
#define public_6fa448c _public_6fa448c

PROC_DECLARE(0x6fa4300, internal_6fa4300, public_6fa4300);
extern "C" NAKED register_t __cdecl internal_6fa4300()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov eax, dword ptr ss : [esp+0x14]
        je public_6fa448c
        push ebx
        push esi
        push edi
        lea ebx, ds:[eax+8]
        lea esp, ss:[esp]
        public_6fa4320 : nop
        mov edx, dword ptr ss : [esp+0x20]
        sub ebp, 0x14
        sub edx, 0x14
        sub ebx, 0x14
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x10], ebx
        je public_6fa4342
        lea esi, ss:[ebp+4]
        jmp public_6fa4344
        public_6fa4342 : nop
        xor esi, esi
        public_6fa4344 : nop
        lea ecx, ds:[ebx-4]
        cmp ecx, esi
        je public_6fa447b
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa435a
        xor edi, edi
        jmp public_6fa435f
        public_6fa435a : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6fa435f : nop
        mov edx, dword ptr ds : [ebx]
        test edx, edx
        jne public_6fa4369
        xor ecx, ecx
        jmp public_6fa436e
        public_6fa4369 : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, edx
        public_6fa436e : nop
        cmp edi, ecx
        ja public_6fa43b0
        mov edi, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6fa438a
        lea esp, ss:[esp]
        public_6fa4380 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx], cl
        inc edx
        inc eax
        cmp eax, edi
        jne public_6fa4380
        public_6fa438a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa439f
        mov edx, dword ptr ds : [ebx]
        xor esi, esi
        add edx, esi
        mov dword ptr ds : [ebx+4], edx
        jmp public_6fa447b
        public_6fa439f : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx]
        sub esi, eax
        add edx, esi
        mov dword ptr ds : [ebx+4], edx
        jmp public_6fa447b
        public_6fa43b0 : nop
        test eax, eax
        jne public_6fa43b8
        xor edi, edi
        jmp public_6fa43bd
        public_6fa43b8 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6fa43bd : nop
        test edx, edx
        jne public_6fa43c5
        xor ecx, ecx
        jmp public_6fa43ca
        public_6fa43c5 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        public_6fa43ca : nop
        cmp edi, ecx
        ja public_6fa4433
        test edx, edx
        jne public_6fa43d6
        xor ecx, ecx
        jmp public_6fa43db
        public_6fa43d6 : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, edx
        public_6fa43db : nop
        add ecx, eax
        cmp eax, ecx
        mov edi, edx
        je public_6fa43ed
        public_6fa43e3 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], dl
        inc edi
        inc eax
        cmp eax, ecx
        jne public_6fa43e3
        public_6fa43ed : nop
        mov ebp, dword ptr ds : [esi+8]
        cmp ecx, ebp
        mov ebx, dword ptr ds : [ebx+4]
        mov edi, ecx
        je public_6fa4410
        lea esp, ss:[esp]
        public_6fa4400 : nop
        push edi
        push ebx
        call public_6ef8310
        add esp, 8
        inc ebx
        inc edi
        cmp edi, ebp
        jne public_6fa4400
        public_6fa4410 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa441b
        xor esi, esi
        jmp public_6fa4420
        public_6fa441b : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        public_6fa4420 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x1C]
        add ecx, esi
        mov dword ptr ds : [eax+4], ecx
        mov ebx, eax
        jmp public_6fa447b
        public_6fa4433 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6fa4447
        xor eax, eax
        jmp public_6fa444c
        public_6fa4447 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_6fa444c : nop
        test eax, eax
        jge public_6fa4452
        xor eax, eax
        public_6fa4452 : nop
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ecx
        je public_6fa4475
        public_6fa4467 : nop
        test eax, eax
        je public_6fa446f
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        public_6fa446f : nop
        inc eax
        inc esi
        cmp esi, ecx
        jne public_6fa4467
        public_6fa4475 : nop
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        public_6fa447b : nop
        cmp dword ptr ss : [esp+0x18], ebp
        jne public_6fa4320
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        public_6fa448c : nop
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6fa4300)
    }
}

#undef public_6fa4320
#undef public_6fa4342
#undef public_6fa4344
#undef public_6fa435a
#undef public_6fa435f
#undef public_6fa4369
#undef public_6fa436e
#undef public_6fa4380
#undef public_6fa438a
#undef public_6fa439f
#undef public_6fa43b0
#undef public_6fa43b8
#undef public_6fa43bd
#undef public_6fa43c5
#undef public_6fa43ca
#undef public_6fa43d6
#undef public_6fa43db
#undef public_6fa43e3
#undef public_6fa43ed
#undef public_6fa4400
#undef public_6fa4410
#undef public_6fa441b
#undef public_6fa4420
#undef public_6fa4433
#undef public_6fa4447
#undef public_6fa444c
#undef public_6fa4452
#undef public_6fa4467
#undef public_6fa446f
#undef public_6fa4475
#undef public_6fa447b
#undef public_6fa448c
