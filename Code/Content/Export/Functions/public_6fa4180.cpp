#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4180);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa41a0 _public_6fa41a0
#define public_6fa41ad _public_6fa41ad
#define public_6fa41af _public_6fa41af
#define public_6fa41c5 _public_6fa41c5
#define public_6fa41ca _public_6fa41ca
#define public_6fa41d4 _public_6fa41d4
#define public_6fa41d9 _public_6fa41d9
#define public_6fa41e4 _public_6fa41e4
#define public_6fa41ee _public_6fa41ee
#define public_6fa4203 _public_6fa4203
#define public_6fa4214 _public_6fa4214
#define public_6fa421c _public_6fa421c
#define public_6fa4221 _public_6fa4221
#define public_6fa4229 _public_6fa4229
#define public_6fa422e _public_6fa422e
#define public_6fa423a _public_6fa423a
#define public_6fa423f _public_6fa423f
#define public_6fa4247 _public_6fa4247
#define public_6fa4251 _public_6fa4251
#define public_6fa4260 _public_6fa4260
#define public_6fa4270 _public_6fa4270
#define public_6fa427b _public_6fa427b
#define public_6fa4280 _public_6fa4280
#define public_6fa4293 _public_6fa4293
#define public_6fa42a7 _public_6fa42a7
#define public_6fa42ac _public_6fa42ac
#define public_6fa42b2 _public_6fa42b2
#define public_6fa42c7 _public_6fa42c7
#define public_6fa42cf _public_6fa42cf
#define public_6fa42d5 _public_6fa42d5
#define public_6fa42db _public_6fa42db
#define public_6fa42f8 _public_6fa42f8

PROC_DECLARE(0x6fa4180, internal_6fa4180, public_6fa4180);
extern "C" NAKED register_t __cdecl internal_6fa4180()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6fa42f8
        push ebx
        push esi
        lea ebx, ss:[ebp+8]
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        lea esp, ss:[esp]
        public_6fa41a0 : nop
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6fa41ad
        add esi, 4
        jmp public_6fa41af
        public_6fa41ad : nop
        xor esi, esi
        public_6fa41af : nop
        lea eax, ds:[ebx-4]
        cmp eax, esi
        je public_6fa42db
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa41c5
        xor edi, edi
        jmp public_6fa41ca
        public_6fa41c5 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6fa41ca : nop
        mov edx, dword ptr ds : [ebx]
        test edx, edx
        jne public_6fa41d4
        xor ecx, ecx
        jmp public_6fa41d9
        public_6fa41d4 : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, edx
        public_6fa41d9 : nop
        cmp edi, ecx
        ja public_6fa4214
        mov edi, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6fa41ee
        public_6fa41e4 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx], cl
        inc edx
        inc eax
        cmp eax, edi
        jne public_6fa41e4
        public_6fa41ee : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa4203
        mov edx, dword ptr ds : [ebx]
        xor esi, esi
        add edx, esi
        mov dword ptr ds : [ebx+4], edx
        jmp public_6fa42db
        public_6fa4203 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx]
        sub esi, eax
        add edx, esi
        mov dword ptr ds : [ebx+4], edx
        jmp public_6fa42db
        public_6fa4214 : nop
        test eax, eax
        jne public_6fa421c
        xor edi, edi
        jmp public_6fa4221
        public_6fa421c : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6fa4221 : nop
        test edx, edx
        jne public_6fa4229
        xor ecx, ecx
        jmp public_6fa422e
        public_6fa4229 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        public_6fa422e : nop
        cmp edi, ecx
        ja public_6fa4293
        test edx, edx
        jne public_6fa423a
        xor ecx, ecx
        jmp public_6fa423f
        public_6fa423a : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, edx
        public_6fa423f : nop
        add ecx, eax
        cmp eax, ecx
        mov edi, edx
        je public_6fa4251
        public_6fa4247 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], dl
        inc edi
        inc eax
        cmp eax, ecx
        jne public_6fa4247
        public_6fa4251 : nop
        mov ebp, dword ptr ds : [esi+8]
        cmp ecx, ebp
        mov ebx, dword ptr ds : [ebx+4]
        mov edi, ecx
        je public_6fa4270
        lea ecx, ds:[ecx]
        public_6fa4260 : nop
        push edi
        push ebx
        call public_6ef8310
        add esp, 8
        inc ebx
        inc edi
        cmp edi, ebp
        jne public_6fa4260
        public_6fa4270 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa427b
        xor esi, esi
        jmp public_6fa4280
        public_6fa427b : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        public_6fa4280 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x18]
        add ecx, esi
        mov dword ptr ds : [eax+4], ecx
        mov ebx, eax
        jmp public_6fa42db
        public_6fa4293 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6fa42a7
        xor eax, eax
        jmp public_6fa42ac
        public_6fa42a7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_6fa42ac : nop
        test eax, eax
        jge public_6fa42b2
        xor eax, eax
        public_6fa42b2 : nop
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ecx
        je public_6fa42d5
        public_6fa42c7 : nop
        test eax, eax
        je public_6fa42cf
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        public_6fa42cf : nop
        inc eax
        inc esi
        cmp esi, ecx
        jne public_6fa42c7
        public_6fa42d5 : nop
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        public_6fa42db : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 0x14
        add ebx, 0x14
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6fa41a0
        pop edi
        pop esi
        pop ebx
        public_6fa42f8 : nop
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6fa4180)
    }
}

#undef public_6fa41a0
#undef public_6fa41ad
#undef public_6fa41af
#undef public_6fa41c5
#undef public_6fa41ca
#undef public_6fa41d4
#undef public_6fa41d9
#undef public_6fa41e4
#undef public_6fa41ee
#undef public_6fa4203
#undef public_6fa4214
#undef public_6fa421c
#undef public_6fa4221
#undef public_6fa4229
#undef public_6fa422e
#undef public_6fa423a
#undef public_6fa423f
#undef public_6fa4247
#undef public_6fa4251
#undef public_6fa4260
#undef public_6fa4270
#undef public_6fa427b
#undef public_6fa4280
#undef public_6fa4293
#undef public_6fa42a7
#undef public_6fa42ac
#undef public_6fa42b2
#undef public_6fa42c7
#undef public_6fa42cf
#undef public_6fa42d5
#undef public_6fa42db
#undef public_6fa42f8
