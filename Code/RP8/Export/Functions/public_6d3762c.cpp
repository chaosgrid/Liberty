#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);
CLANG_FORWARD_PROC_SYMBOL(public_6d3762c);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d0eb);

#define public_6d3766e _public_6d3766e
#define public_6d37676 _public_6d37676
#define public_6d37689 _public_6d37689
#define public_6d3769b _public_6d3769b
#define public_6d3769c _public_6d3769c

PROC_DECLARE(0x6d3762c, internal_6d3762c, public_6d3762c);
extern "C" NAKED register_t __cdecl internal_6d3762c()
{
    __asm
    {
        mov eax, public_6d5d0eb
        call public_6d5cd8c
        push ecx
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ds : [esi], offset public_6d5f5d0
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [esi+0x10BC], 0
        je public_6d3769c
        mov eax, dword ptr ds : [esi+0x10C0]
        test eax, eax
        je public_6d3769c
        push ebx
        mov ebx, dword ptr ds : [esi+0x109C]
        cmp ebx, dword ptr ds : [esi+0x10A0]
        mov dword ptr ss : [ebp-0x10], eax
        jae public_6d3769b
        push edi
        public_6d3766e : nop
        mov edi, dword ptr ds : [esi+0x1090]
        jmp public_6d37689
        public_6d37676 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push dword ptr ds : [eax+4]
        call public_6d2f249
        add dword ptr ss : [ebp-0x10], 8
        pop ecx
        add edi, 4
        public_6d37689 : nop
        cmp edi, dword ptr ds : [esi+0x1098]
        jb public_6d37676
        inc ebx
        cmp ebx, dword ptr ds : [esi+0x10A0]
        jb public_6d3766e
        pop edi
        public_6d3769b : nop
        pop ebx
        public_6d3769c : nop
        push dword ptr ds : [esi+0x10B8]
        call public_6d2f249
        push dword ptr ds : [esi+0x10C0]
        call public_6d2f249
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        pop ecx
        pop ecx
        mov ecx, esi
        call public_6d3731f
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3762c)
    }
}

#undef public_6d3766e
#undef public_6d37676
#undef public_6d37689
#undef public_6d3769b
#undef public_6d3769c
