#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f535);
CLANG_FORWARD_PROC_SYMBOL(public_6d314c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d32ac7);
CLANG_FORWARD_PROC_SYMBOL(public_6d32d6f);
CLANG_FORWARD_PROC_SYMBOL(public_6d3323d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33247);
CLANG_FORWARD_PROC_SYMBOL(public_6d369f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fb05);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fb17);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fc22);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5cfad);

#define public_6d32dc4 _public_6d32dc4
#define public_6d32dc9 _public_6d32dc9
#define public_6d32e11 _public_6d32e11
#define public_6d32e1c _public_6d32e1c
#define public_6d32f2f _public_6d32f2f
#define public_6d32f6c _public_6d32f6c
#define public_6d32f88 _public_6d32f88
#define public_6d32f9a _public_6d32f9a
#define public_6d32f9e _public_6d32f9e
#define public_6d32fa8 _public_6d32fa8
#define public_6d32faf _public_6d32faf
#define public_6d32fb6 _public_6d32fb6
#define public_6d32fc9 _public_6d32fc9
#define public_6d32fe0 _public_6d32fe0
#define public_6d32ff7 _public_6d32ff7
#define public_6d32ffb _public_6d32ffb
#define public_6d33007 _public_6d33007
#define public_6d33009 _public_6d33009
#define public_6d33013 _public_6d33013
#define public_6d33019 _public_6d33019

PROC_DECLARE(0x6d32d6f, internal_6d32d6f, public_6d32d6f);
extern "C" NAKED register_t __cdecl internal_6d32d6f()
{
    __asm
    {
        mov eax, public_6d5cfad
        call public_6d5cd8c
        sub esp, 0xC8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[ebp-0x3C]
        mov dword ptr ss : [ebp-0x20], esi
        call public_6d3fb05
        mov edi, dword ptr ss : [ebp+0xC]
        and dword ptr ss : [ebp-4], 0
        test edi, edi
        je public_6d32dc4
        jle public_6d32faf
        cmp edi, 3
        jle public_6d32fa8
        cmp edi, 4
        je public_6d32f9e
        cmp edi, 5
        je public_6d32fa8
        cmp edi, 6
        jne public_6d32faf
        public_6d32dc4 : nop
        mov ebx, offset public_6d6c3d0
        public_6d32dc9 : nop
        push dword ptr ds : [esi]
        call public_6d2f49c
        push eax
        push dword ptr ds : [esi+8]
        push ebx
        call public_6d2f535
        mov ebx, eax
        add esp, 0x10
        test ebx, ebx
        mov dword ptr ss : [ebp-0x1C], ebx
        je public_6d32fa8
        cmp ebx, dword ptr ds : [esi]
        je public_6d32f88
        lea ecx, ss:[ebp-0x2C]
        call public_6d3323d
        push ebx
        mov byte ptr ss : [ebp-4], 1
        call public_6d2f49c
        mov eax, dword ptr ds : [eax+8]
        shr eax, 3
        pop ecx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0x14], esi
        public_6d32e11 : nop
        mov ebx, dword ptr ss : [ebp-0x14]
        test ebx, ebx
        je public_6d32f6c
        public_6d32e1c : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        imul ecx, dword ptr ds : [ebx+0xC]
        imul ecx, eax
        imul ecx, dword ptr ds : [ebx+0x10]
        push ecx
        call public_6d2f2a0
        test eax, eax
        pop ecx
        mov dword ptr ss : [ebp-0x18], eax
        je public_6d32fb6
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp-0xD4], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-0xD0], eax
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp-0xCC], eax
        mov eax, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp-0xC8], eax
        push 6
        pop ecx
        lea edx, ds:[ebx+0x18]
        mov esi, edx
        push 6
        xor eax, eax
        lea edi, ss:[ebp-0xC4]
        rep movsd
        pop ecx
        mov esi, edx
        xor edx, edx
        inc edx
        lea edi, ss:[ebp-0xAC]
        rep movsd
        mov dword ptr ss : [ebp-0x90], eax
        mov dword ptr ss : [ebp-0x94], edx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x8C], ecx
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x88], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x84], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        imul ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x80], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        imul ecx, dword ptr ss : [ebp-0x10]
        imul ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp-0x7C], ecx
        mov dword ptr ss : [ebp-0x78], eax
        mov dword ptr ss : [ebp-0x74], eax
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp-0x70], ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp-0x6C], ecx
        mov dword ptr ss : [ebp-0x68], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        push 6
        mov dword ptr ss : [ebp-0x64], ecx
        pop ecx
        lea esi, ss:[ebp-0x78]
        lea edi, ss:[ebp-0x60]
        rep movsd
        mov dword ptr ss : [ebp-0x44], eax
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x40], eax
        push 0x80001
        lea eax, ss:[ebp-0xD4]
        push eax
        lea eax, ss:[ebp-0x88]
        push eax
        lea ecx, ss:[ebp-0x2C]
        call public_6d369f8
        mov esi, eax
        test esi, esi
        jl public_6d32fc9
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6d32f2f
        cmp dword ptr ds : [ebx+0x38], 0
        je public_6d32f2f
        push eax
        call public_6d2f249
        and dword ptr ds : [ebx+4], 0
        pop ecx
        public_6d32f2f : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ebx+4], eax
        push 6
        lea edi, ds:[ebx+0x18]
        pop ecx
        lea esi, ss:[ebp-0x60]
        rep movsd
        mov eax, dword ptr ss : [ebp-0x80]
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ss : [ebp-0x7C]
        mov dword ptr ds : [ebx+0x34], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ebx+0x38], 1
        mov ebx, dword ptr ds : [ebx+0x4C]
        test ebx, ebx
        jne public_6d32e1c
        mov edi, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp-0x20]
        public_6d32f6c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [ecx+0x50]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x14], ecx
        jne public_6d32e11
        and byte ptr ss : [ebp-4], cl
        lea ecx, ss:[ebp-0x2C]
        call public_6d33247
        public_6d32f88 : nop
        push dword ptr ss : [ebp+0x10]
        lea ecx, ss:[ebp-0x3C]
        push dword ptr ss : [ebp+8]
        call public_6d3fb17
        test eax, eax
        jge public_6d32fe0
        public_6d32f9a : nop
        mov esi, eax
        jmp public_6d33019
        public_6d32f9e : nop
        mov ebx, offset public_6d6c3e8
        jmp public_6d32dc9
        public_6d32fa8 : nop
        mov esi, 0x88760B59
        jmp public_6d33019
        public_6d32faf : nop
        mov esi, 0x8876086C
        jmp public_6d33019
        public_6d32fb6 : nop
        and byte ptr ss : [ebp-4], 0
        lea ecx, ss:[ebp-0x2C]
        call public_6d33247
        mov esi, 0x8007000E
        jmp public_6d33019
        public_6d32fc9 : nop
        push dword ptr ss : [ebp-0x18]
        call public_6d2f249
        and byte ptr ss : [ebp-4], 0
        pop ecx
        lea ecx, ss:[ebp-0x2C]
        call public_6d33247
        jmp public_6d33019
        public_6d32fe0 : nop
        mov eax, edi
        sub eax, 0
        je public_6d33007
        sub eax, 4
        je public_6d32ffb
        dec eax
        dec eax
        je public_6d32ff7
        mov eax, 0x80004001
        jmp public_6d32f9a
        public_6d32ff7 : nop
        push 0
        jmp public_6d33009
        public_6d32ffb : nop
        push dword ptr ss : [ebp-0x3C]
        mov ecx, esi
        call public_6d32ac7
        jmp public_6d33013
        public_6d33007 : nop
        push 1
        public_6d33009 : nop
        push dword ptr ss : [ebp-0x3C]
        mov ecx, esi
        call public_6d314c0
        public_6d33013 : nop
        test eax, eax
        jl public_6d32f9a
        xor esi, esi
        public_6d33019 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        lea ecx, ss:[ebp-0x3C]
        call public_6d3fc22
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d32d6f)
    }
}

#undef public_6d32dc4
#undef public_6d32dc9
#undef public_6d32e11
#undef public_6d32e1c
#undef public_6d32f2f
#undef public_6d32f6c
#undef public_6d32f88
#undef public_6d32f9a
#undef public_6d32f9e
#undef public_6d32fa8
#undef public_6d32faf
#undef public_6d32fb6
#undef public_6d32fc9
#undef public_6d32fe0
#undef public_6d32ff7
#undef public_6d32ffb
#undef public_6d33007
#undef public_6d33009
#undef public_6d33013
#undef public_6d33019
