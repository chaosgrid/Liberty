#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f57337 _public_6f57337
#define public_6f57342 _public_6f57342
#define public_6f57380 _public_6f57380
#define public_6f57385 _public_6f57385
#define public_6f5738d _public_6f5738d
#define public_6f5739f _public_6f5739f
#define public_6f573a4 _public_6f573a4
#define public_6f573b0 _public_6f573b0
#define public_6f573d0 _public_6f573d0
#define public_6f573e4 _public_6f573e4
#define public_6f57447 _public_6f57447
#define public_6f57486 _public_6f57486
#define public_6f574ab _public_6f574ab
#define public_6f574c2 _public_6f574c2
#define public_6f574d7 _public_6f574d7
#define public_6f574e0 _public_6f574e0
#define public_6f574f4 _public_6f574f4
#define public_6f574f8 _public_6f574f8

PROC_DECLARE(0x6f57310, internal_6f57310, public_6f57310);
extern "C" NAKED register_t __cdecl internal_6f57310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, 0x3FFFFFFF
        push edi
        je public_6f574f8
        mov eax, dword ptr ds : [ecx+0x140]
        mov edx, dword ptr ds : [ecx+0x144]
        cmp eax, edx
        je public_6f57342
        public_6f57337 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f5738d
        add eax, 8
        cmp eax, edx
        jne public_6f57337
        public_6f57342 : nop
        mov eax, dword ptr ds : [ecx+0x144]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], esi
        lea esi, ds:[ecx+0x13C]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0xC], edx
        mov edi, eax
        jae public_6f57447
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f57380
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6f57385
        public_6f57380 : nop
        mov ecx, 1
        public_6f57385 : nop
        test edx, edx
        jne public_6f5739f
        xor eax, eax
        jmp public_6f573a4
        public_6f5738d : nop
        fld dword ptr ss : [esp+0x18]
        pop edi
        fadd dword ptr ds : [eax+4]
        pop esi
        fstp dword ptr ds : [eax+4]
        add esp, 8
        ret 8
        public_6f5739f : nop
        sub eax, edx
        sar eax, 3
        public_6f573a4 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f573b0
        xor eax, eax
        public_6f573b0 : nop
        push ebx
        lea edx, ds:[eax*8]
        push ebp
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x20], eax
        mov ebp, eax
        je public_6f573e4
        nop 
        public_6f573d0 : nop
        push ebx
        push ebp
        call public_6f305b0
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_6f573d0
        public_6f573e4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        add ebp, 8
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x24]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        pop ebp
        pop ebx
        lea ecx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 8
        ret 8
        public_6f57447 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 3
        cmp edx, 1
        jae public_6f574ab
        lea ecx, ds:[edi+8]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+8]
        push edx
        sub ecx, edi
        sar ecx, 3
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f574f4
        public_6f57486 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_6f57486
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_6f574ab : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6f574d7
        public_6f574c2 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f574c2
        public_6f574d7 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f574f4
        public_6f574e0 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6f574e0
        public_6f574f4 : nop
        add dword ptr ds : [esi+8], 8
        public_6f574f8 : nop
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f57310)
    }
}

#undef public_6f57337
#undef public_6f57342
#undef public_6f57380
#undef public_6f57385
#undef public_6f5738d
#undef public_6f5739f
#undef public_6f573a4
#undef public_6f573b0
#undef public_6f573d0
#undef public_6f573e4
#undef public_6f57447
#undef public_6f57486
#undef public_6f574ab
#undef public_6f574c2
#undef public_6f574d7
#undef public_6f574e0
#undef public_6f574f4
#undef public_6f574f8
