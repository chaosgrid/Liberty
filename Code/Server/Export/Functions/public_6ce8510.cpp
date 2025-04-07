#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8510);
CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce8533 _public_6ce8533
#define public_6ce854f _public_6ce854f
#define public_6ce8551 _public_6ce8551
#define public_6ce85c4 _public_6ce85c4
#define public_6ce85c9 _public_6ce85c9
#define public_6ce85d1 _public_6ce85d1
#define public_6ce85d6 _public_6ce85d6
#define public_6ce85e1 _public_6ce85e1
#define public_6ce8600 _public_6ce8600
#define public_6ce8604 _public_6ce8604
#define public_6ce8620 _public_6ce8620
#define public_6ce8683 _public_6ce8683
#define public_6ce869c _public_6ce869c
#define public_6ce86e0 _public_6ce86e0
#define public_6ce86f4 _public_6ce86f4
#define public_6ce86fd _public_6ce86fd
#define public_6ce8715 _public_6ce8715
#define public_6ce872a _public_6ce872a
#define public_6ce8731 _public_6ce8731
#define public_6ce8745 _public_6ce8745
#define public_6ce874e _public_6ce874e

PROC_DECLARE(0x6ce8510, internal_6ce8510, public_6ce8510);
extern "C" NAKED register_t __cdecl internal_6ce8510()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        push edi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64248]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64244]
        mov ebx, dword ptr ss : [esp+0x4C]
        public_6ce8533 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6ce854f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8551
        public_6ce854f : nop
        xor eax, eax
        public_6ce8551 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        test esi, esi
        je public_6ce874e
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6ce8533
        cmp dword ptr ds : [esi+0x14], 0x800
        je public_6ce8533
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        test al, al
        je public_6ce8533
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        test al, al
        je public_6ce8533
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, eax
        sar edx, 5
        cmp edx, 1
        mov ebp, eax
        jae public_6ce869c
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6ce85c4
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_6ce85c9
        public_6ce85c4 : nop
        mov ecx, 1
        public_6ce85c9 : nop
        test edx, edx
        jne public_6ce85d1
        xor eax, eax
        jmp public_6ce85d6
        public_6ce85d1 : nop
        sub eax, edx
        sar eax, 5
        public_6ce85d6 : nop
        lea esi, ds:[eax+ecx]
        test esi, esi
        mov eax, esi
        jge public_6ce85e1
        xor eax, eax
        public_6ce85e1 : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov dword ptr ss : [esp+0x18], eax
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x4C], eax
        je public_6ce8620
        jmp public_6ce8604
        public_6ce8600 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        public_6ce8604 : nop
        push eax
        push edi
        call public_6ced210
        mov eax, dword ptr ss : [esp+0x54]
        add eax, 0x20
        add esp, 8
        add edi, 0x20
        cmp eax, ebp
        mov dword ptr ss : [esp+0x4C], eax
        jne public_6ce8600
        public_6ce8620 : nop
        lea eax, ss:[esp+0x28]
        push eax
        push 1
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6d64240]
        mov ecx, dword ptr ds : [ebx+8]
        add edi, 0x20
        push edi
        push ecx
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d6423c]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64238]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+4]
        shl esi, 5
        add esi, edx
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6ce8683
        xor ecx, ecx
        inc ecx
        shl ecx, 5
        add ecx, edx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], edx
        jmp public_6ce8533
        public_6ce8683 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        inc ecx
        shl ecx, 5
        add ecx, edx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], edx
        jmp public_6ce8533
        public_6ce869c : nop
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        cmp edx, 1
        jae public_6ce86fd
        lea ecx, ss:[ebp+0x20]
        push ecx
        push eax
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d6423c]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        lea edx, ss:[esp+0x28]
        push edx
        sub ecx, ebp
        sar ecx, 5
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64240]
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6ce86f4
        lea ecx, ds:[ecx]
        public_6ce86e0 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        rep movsd
        jne public_6ce86e0
        public_6ce86f4 : nop
        add dword ptr ds : [ebx+8], 0x20
        jmp public_6ce8533
        public_6ce86fd : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d6423c]
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6ce872a
        public_6ce8715 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6ce8715
        public_6ce872a : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_6ce8745
        public_6ce8731 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        rep movsd
        jne public_6ce8731
        public_6ce8745 : nop
        add dword ptr ds : [ebx+8], 0x20
        jmp public_6ce8533
        public_6ce874e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6ce8510)
    }
}

#undef public_6ce8533
#undef public_6ce854f
#undef public_6ce8551
#undef public_6ce85c4
#undef public_6ce85c9
#undef public_6ce85d1
#undef public_6ce85d6
#undef public_6ce85e1
#undef public_6ce8600
#undef public_6ce8604
#undef public_6ce8620
#undef public_6ce8683
#undef public_6ce869c
#undef public_6ce86e0
#undef public_6ce86f4
#undef public_6ce86fd
#undef public_6ce8715
#undef public_6ce872a
#undef public_6ce8731
#undef public_6ce8745
#undef public_6ce874e
