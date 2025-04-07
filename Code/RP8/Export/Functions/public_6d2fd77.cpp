#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f6ee);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fd77);
CLANG_FORWARD_PROC_SYMBOL(public_6d30bc9);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b12);
CLANG_FORWARD_PROC_SYMBOL(public_6d36ba7);
CLANG_FORWARD_PROC_SYMBOL(public_6d36bac);

#define public_6d2fd9b _public_6d2fd9b
#define public_6d2fdae _public_6d2fdae
#define public_6d2fdf2 _public_6d2fdf2
#define public_6d2fe05 _public_6d2fe05
#define public_6d2fe26 _public_6d2fe26
#define public_6d2fe3c _public_6d2fe3c
#define public_6d2fe5d _public_6d2fe5d
#define public_6d2feb4 _public_6d2feb4
#define public_6d2fec1 _public_6d2fec1
#define public_6d2fedb _public_6d2fedb
#define public_6d2fedf _public_6d2fedf
#define public_6d2ff07 _public_6d2ff07
#define public_6d2ff09 _public_6d2ff09
#define public_6d2ff0b _public_6d2ff0b

PROC_DECLARE(0x6d2fd77, internal_6d2fd77, public_6d2fd77);
extern "C" NAKED register_t __cdecl internal_6d2fd77()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x58]
        sub esp, 0x9C
        push esi
        lea ecx, ss:[ebp+0x28]
        call public_6d36b12
        cmp dword ptr ss : [ebp+0x60], 0
        jne public_6d2fd9b
        mov esi, 0x8876086C
        jmp public_6d2ff0b
        public_6d2fd9b : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x6C]
        test ebx, ebx
        push edi
        jne public_6d2fdae
        mov esi, 0x8876086C
        jmp public_6d2ff09
        public_6d2fdae : nop
        mov eax, dword ptr ss : [ebp+0x78]
        and eax, 0xFFFF
        cmp eax, 5
        je public_6d2feb4
        cmp dword ptr ss : [ebp+0x7C], 0
        jne public_6d2feb4
        mov esi, dword ptr ss : [ebp+0x64]
        mov edi, dword ptr ss : [ebp+0x70]
        cmp esi, edi
        je public_6d2fdf2
        test esi, esi
        je public_6d2feb4
        test edi, edi
        je public_6d2feb4
        mov ecx, 0x100
        xor eax, eax
        repe cmpsd
        jne public_6d2feb4
        public_6d2fdf2 : nop
        mov esi, dword ptr ss : [ebp+0x68]
        test esi, esi
        je public_6d2fe05
        lea edi, ss:[ebp+0x48]
        movsd 
        movsd 
        movsd 
        movsd 
        mov edx, dword ptr ss : [ebp+0x50]
        jmp public_6d2fe26
        public_6d2fe05 : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x24]
        and dword ptr ss : [ebp+0x48], 0
        and dword ptr ss : [ebp+0x4C], 0
        mov dword ptr ss : [ebp+0x50], edx
        mov dword ptr ss : [ebp+0x54], eax
        public_6d2fe26 : nop
        mov esi, dword ptr ss : [ebp+0x74]
        test esi, esi
        je public_6d2fe3c
        lea edi, ss:[ebp+0x38]
        movsd 
        movsd 
        movsd 
        movsd 
        mov ecx, dword ptr ss : [ebp+0x44]
        mov eax, dword ptr ss : [ebp+0x40]
        jmp public_6d2fe5d
        public_6d2fe3c : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[ebp+8]
        push ecx
        push ebx
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x24]
        and dword ptr ss : [ebp+0x38], 0
        and dword ptr ss : [ebp+0x3C], 0
        mov edx, dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [ebp+0x40], eax
        mov dword ptr ss : [ebp+0x44], ecx
        public_6d2fe5d : nop
        sub eax, dword ptr ss : [ebp+0x38]
        sub edx, dword ptr ss : [ebp+0x48]
        cmp edx, eax
        jne public_6d2feb4
        mov eax, dword ptr ss : [ebp+0x54]
        sub ecx, dword ptr ss : [ebp+0x3C]
        sub eax, dword ptr ss : [ebp+0x4C]
        cmp eax, ecx
        jne public_6d2feb4
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[ebp+0x6C]
        push ecx
        push ebx
        call dword ptr ds : [eax+0xC]
        push 1
        call public_6d30bc9
        mov eax, dword ptr ss : [ebp+0x6C]
        pop ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x48]
        push edx
        push dword ptr ss : [ebp+0x60]
        lea edx, ss:[ebp+0x38]
        push 1
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x70]
        push 0
        mov esi, eax
        call public_6d30bc9
        mov eax, dword ptr ss : [ebp+0x6C]
        pop ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        test esi, esi
        jge public_6d2ff07
        public_6d2feb4 : nop
        xor eax, eax
        inc eax
        cmp dword ptr ss : [ebp+0x60], ebx
        jne public_6d2fec1
        mov eax, 0x10001
        public_6d2fec1 : nop
        push eax
        push 0
        push dword ptr ss : [ebp+0x74]
        lea eax, ss:[ebp-0x44]
        push dword ptr ss : [ebp+0x70]
        lea ecx, ss:[ebp+0x28]
        push ebx
        push eax
        call public_6d36bac
        test eax, eax
        jge public_6d2fedf
        public_6d2fedb : nop
        mov esi, eax
        jmp public_6d2ff09
        public_6d2fedf : nop
        push dword ptr ss : [ebp+0x7C]
        lea eax, ss:[ebp-0x1C]
        push dword ptr ss : [ebp+0x78]
        push eax
        push dword ptr ss : [ebp+0x70]
        push dword ptr ss : [ebp-0x3C]
        push dword ptr ss : [ebp-0x40]
        push dword ptr ss : [ebp-0x44]
        push dword ptr ss : [ebp+0x68]
        push dword ptr ss : [ebp+0x64]
        push dword ptr ss : [ebp+0x60]
        call public_6d2f6ee
        test eax, eax
        jl public_6d2fedb
        public_6d2ff07 : nop
        xor esi, esi
        public_6d2ff09 : nop
        pop edi
        pop ebx
        public_6d2ff0b : nop
        lea ecx, ss:[ebp+0x28]
        call public_6d36ba7
        mov eax, esi
        pop esi
        add ebp, 0x58
        leave 
        ret 0x20
        UNREACHABLE_TRAP(0x6d2fd77)
    }
}

#undef public_6d2fd9b
#undef public_6d2fdae
#undef public_6d2fdf2
#undef public_6d2fe05
#undef public_6d2fe26
#undef public_6d2fe3c
#undef public_6d2fe5d
#undef public_6d2feb4
#undef public_6d2fec1
#undef public_6d2fedb
#undef public_6d2fedf
#undef public_6d2ff07
#undef public_6d2ff09
#undef public_6d2ff0b
