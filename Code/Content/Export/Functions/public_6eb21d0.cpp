#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2400);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2570);
CLANG_FORWARD_PROC_SYMBOL(public_6eb25a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb21ff _public_6eb21ff
#define public_6eb2207 _public_6eb2207
#define public_6eb2212 _public_6eb2212
#define public_6eb221a _public_6eb221a
#define public_6eb223e _public_6eb223e
#define public_6eb2293 _public_6eb2293
#define public_6eb22ac _public_6eb22ac
#define public_6eb22d2 _public_6eb22d2
#define public_6eb22d5 _public_6eb22d5
#define public_6eb22f6 _public_6eb22f6
#define public_6eb230e _public_6eb230e
#define public_6eb2321 _public_6eb2321
#define public_6eb237d _public_6eb237d
#define public_6eb2390 _public_6eb2390
#define public_6eb23bd _public_6eb23bd

PROC_DECLARE(0x6eb21d0, internal_6eb21d0, public_6eb21d0);
extern "C" NAKED register_t __cdecl internal_6eb21d0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi]
        mov ebp, ecx
        add edi, 4
        lea esi, ss:[ebp+4]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], eax
        je public_6eb22d5
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_6eb21ff
        xor ecx, ecx
        jmp public_6eb2207
        public_6eb21ff : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebx
        sar ecx, 2
        public_6eb2207 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6eb2212
        xor eax, eax
        jmp public_6eb221a
        public_6eb2212 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6eb221a : nop
        cmp ecx, eax
        ja public_6eb223e
        mov ecx, dword ptr ds : [edi+8]
        push edx
        push ecx
        push ebx
        call public_6f6a640
        add esp, 0xC
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6eb22d2
        public_6eb223e : nop
        mov ecx, edi
        call public_6fa3db0
        mov ecx, esi
        mov ebx, eax
        call public_6eb6b30
        cmp ebx, eax
        ja public_6eb2293
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        lea ebp, ds:[ebx+eax*4]
        push ebp
        push ebx
        call public_6f6a640
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x10]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb22d5
        public_6eb2293 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6eb22ac
        xor eax, eax
        public_6eb22ac : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        public_6eb22d2 : nop
        mov dword ptr ds : [esi+8], eax
        public_6eb22d5 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [ebp+0x18]
        lea ebx, ss:[ebp+0x14]
        push edx
        push eax
        mov ecx, ebx
        call public_6eb25a0
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6eb22f6
        xor edi, edi
        jmp public_6eb230e
        public_6eb22f6 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov edi, edx
        public_6eb230e : nop
        mov ecx, ebx
        call public_6eb2570
        cmp eax, edi
        jae public_6eb237d
        test edi, edi
        mov eax, edi
        jge public_6eb2321
        xor eax, eax
        public_6eb2321 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push eax
        push ecx
        mov ecx, ebx
        call public_6eb2400
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+edi*4]
        lea eax, ds:[esi+edx*8]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6eb23d0
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        mov esi, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [ebx+8], edx
        public_6eb237d : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ds : [esi+0x18]
        cmp ebp, dword ptr ds : [eax+0x1C]
        je public_6eb23bd
        lea esp, ss:[esp]
        public_6eb2390 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, 0xA
        mov esi, ebp
        lea edi, ss:[esp+0x14]
        rep movsd
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        call public_6eaed70
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax+0x1C]
        add ebp, 0x28
        cmp ebp, ecx
        jne public_6eb2390
        public_6eb23bd : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6eb21d0)
    }
}

#undef public_6eb21ff
#undef public_6eb2207
#undef public_6eb2212
#undef public_6eb221a
#undef public_6eb223e
#undef public_6eb2293
#undef public_6eb22ac
#undef public_6eb22d2
#undef public_6eb22d5
#undef public_6eb22f6
#undef public_6eb230e
#undef public_6eb2321
#undef public_6eb237d
#undef public_6eb2390
#undef public_6eb23bd
