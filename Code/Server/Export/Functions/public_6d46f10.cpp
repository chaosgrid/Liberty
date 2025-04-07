#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d59db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d46f4d _public_6d46f4d
#define public_6d46f85 _public_6d46f85
#define public_6d46f8a _public_6d46f8a
#define public_6d46f92 _public_6d46f92
#define public_6d46f97 _public_6d46f97
#define public_6d46fa3 _public_6d46fa3
#define public_6d46fc2 _public_6d46fc2
#define public_6d46fd6 _public_6d46fd6
#define public_6d4703d _public_6d4703d
#define public_6d47059 _public_6d47059
#define public_6d47098 _public_6d47098
#define public_6d470ba _public_6d470ba
#define public_6d470d0 _public_6d470d0
#define public_6d470e5 _public_6d470e5
#define public_6d470f0 _public_6d470f0
#define public_6d47104 _public_6d47104

PROC_DECLARE(0x6d46f10, internal_6d46f10, public_6d46f10);
extern "C" NAKED register_t __cdecl internal_6d46f10()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+8]
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6d64890]
        fld dword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_6d64f00]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_6d46f4d
        mov dword ptr ss : [esp+0x10], 0x3F733333
        public_6d46f4d : nop
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x2C8]
        mov ecx, dword ptr ds : [esi+0x2CC]
        add esi, 0x2C0
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        mov edi, eax
        jae public_6d47059
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6d46f85
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6d46f8a
        public_6d46f85 : nop
        mov ecx, 1
        public_6d46f8a : nop
        test edx, edx
        jne public_6d46f92
        xor eax, eax
        jmp public_6d46f97
        public_6d46f92 : nop
        sub eax, edx
        sar eax, 3
        public_6d46f97 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_6d46fa3
        xor eax, eax
        public_6d46fa3 : nop
        push ebx
        lea edx, ds:[eax*8]
        push ebp
        push edx
        call public_6d60012
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x20], eax
        mov ebx, eax
        je public_6d46fd6
        public_6d46fc2 : nop
        push ebp
        push ebx
        call public_6d5c880
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, edi
        jne public_6d46fc2
        public_6d46fd6 : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6d59de0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 8
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6d59db0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6d28880
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        lea ecx, ds:[edx+eax*8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6d4703d
        xor ecx, ecx
        lea eax, ds:[edx+ecx*8+8]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_6d4703d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        lea eax, ds:[edx+ecx*8+8]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_6d47059 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_6d470ba
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6d59db0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0xC]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6d59de0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6d47104
        public_6d47098 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_6d47098
        add dword ptr ds : [esi+8], 8
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_6d470ba : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6d59db0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6d470e5
        nop 
        public_6d470d0 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6d470d0
        public_6d470e5 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d47104
        mov edi, edi
        public_6d470f0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6d470f0
        public_6d47104 : nop
        add dword ptr ds : [esi+8], 8
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d46f10)
    }
}

#undef public_6d46f4d
#undef public_6d46f85
#undef public_6d46f8a
#undef public_6d46f92
#undef public_6d46f97
#undef public_6d46fa3
#undef public_6d46fc2
#undef public_6d46fd6
#undef public_6d4703d
#undef public_6d47059
#undef public_6d47098
#undef public_6d470ba
#undef public_6d470d0
#undef public_6d470e5
#undef public_6d470f0
#undef public_6d47104
