#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1000);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb47a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb47f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6620);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7b40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8590);
CLANG_FORWARD_PROC_SYMBOL(public_6eb85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9210);
CLANG_FORWARD_PROC_SYMBOL(public_6eba3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebac50);
CLANG_FORWARD_PROC_SYMBOL(public_6ebc210);
CLANG_FORWARD_PROC_SYMBOL(public_6ebc260);
CLANG_FORWARD_PROC_SYMBOL(public_6ebcdc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd050);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd140);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd190);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd230);
CLANG_FORWARD_PROC_SYMBOL(public_6ebd280);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec83f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbd20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdf00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece150);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf440);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf840);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf860);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa60);

#define public_6ecf4c0 _public_6ecf4c0
#define public_6ecf4c9 _public_6ecf4c9
#define public_6ecf501 _public_6ecf501
#define public_6ecf51d _public_6ecf51d
#define public_6ecf557 _public_6ecf557
#define public_6ecf560 _public_6ecf560
#define public_6ecf577 _public_6ecf577
#define public_6ecf5c7 _public_6ecf5c7
#define public_6ecf5d0 _public_6ecf5d0
#define public_6ecf5e7 _public_6ecf5e7
#define public_6ecf620 _public_6ecf620
#define public_6ecf634 _public_6ecf634
#define public_6ecf64a _public_6ecf64a

PROC_DECLARE(0x6ecf440, internal_6ecf440, public_6ecf440);
extern "C" NAKED register_t __cdecl internal_6ecf440()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        call public_6ecbd20
        call public_6ec83f0
        call public_6ec6cf0
        call public_6eb3dc0
        call public_6ebd140
        call public_6ebd280
        call public_6ebd0a0
        call public_6ebd1e0
        call public_6eb5c20
        call public_6ebd050
        call public_6ebd190
        call public_6ebd0f0
        call public_6ebd230
        call public_6eb8590
        call public_6eb85e0
        call public_6ecf670
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        or ebp, 0xFFFFFFFF
        test eax, eax
        je public_6ecf4c0
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 2
        ja public_6ecf51d
        test eax, eax
        je public_6ecf4c0
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 2
        ja public_6ecf4c9
        public_6ecf4c0 : nop
        push 8
        mov ecx, esi
        call public_6ecf7a0
        public_6ecf4c9 : nop
        mov ecx, esi
        mov byte ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], ebp
        call public_6ecfa60
        cmp eax, 3
        mov ecx, esi
        jae public_6ecf501
        push edi
        mov edi, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        call public_6ecfa60
        mov ecx, 3
        sub ecx, eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ecdf00
        pop edi
        jmp public_6ecf51d
        public_6ecf501 : nop
        call public_6ecfa60
        cmp eax, 3
        jbe public_6ecf51d
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        add eax, 0x18
        push eax
        mov ecx, esi
        call public_6ece150
        public_6ecf51d : nop
        mov esi, dword ptr ds : [esi+4]
        add esi, 0x10
        mov ebx, 1
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi], bl
        call public_6ecf670
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ecf557
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebx
        ja public_6ecf577
        test eax, eax
        je public_6ecf557
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebx
        ja public_6ecf560
        public_6ecf557 : nop
        push 7
        mov ecx, esi
        call public_6ecf7a0
        public_6ecf560 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push 2
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], ebp
        call public_6ecf860
        public_6ecf577 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax], bl
        call public_6eb1000
        call public_6ebc210
        call public_6ebc260
        call public_6ebcdc0
        call public_6eba3b0
        call public_6ecf670
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ecf5c7
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 3
        ja public_6ecf5e7
        test eax, eax
        je public_6ecf5c7
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 3
        ja public_6ecf5d0
        public_6ecf5c7 : nop
        push 9
        mov ecx, esi
        call public_6ecf7a0
        public_6ecf5d0 : nop
        lea edx, ss:[esp+0xC]
        push edx
        push 4
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], ebp
        call public_6ecf860
        public_6ecf5e7 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x18
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax], bl
        call public_6eb7b40
        call public_6eb6620
        call public_6ebac50
        call public_6eb9210
        call public_6ecf670
        mov esi, eax
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6ecf620
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        ja public_6ecf64a
        public_6ecf620 : nop
        mov ecx, esi
        call public_6ecf840
        test eax, eax
        ja public_6ecf634
        push 6
        mov ecx, esi
        call public_6ecf7a0
        public_6ecf634 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], ebp
        call public_6ecf860
        public_6ecf64a : nop
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi], bl
        call public_6eb47a0
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        jmp public_6eb47f0
        UNREACHABLE_TRAP(0x6ecf440)
    }
}

#undef public_6ecf4c0
#undef public_6ecf4c9
#undef public_6ecf501
#undef public_6ecf51d
#undef public_6ecf557
#undef public_6ecf560
#undef public_6ecf577
#undef public_6ecf5c7
#undef public_6ecf5d0
#undef public_6ecf5e7
#undef public_6ecf620
#undef public_6ecf634
#undef public_6ecf64a
