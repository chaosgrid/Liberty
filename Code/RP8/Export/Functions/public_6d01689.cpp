#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01689);
CLANG_FORWARD_PROC_SYMBOL(public_6d07aa8);
CLANG_FORWARD_PROC_SYMBOL(public_6d16030);
CLANG_FORWARD_PROC_SYMBOL(public_6d16e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d16e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a780);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ee90);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d01712 _public_6d01712
#define public_6d01734 _public_6d01734
#define public_6d017e9 _public_6d017e9
#define public_6d017f5 _public_6d017f5
#define public_6d01802 _public_6d01802
#define public_6d0186c _public_6d0186c
#define public_6d01875 _public_6d01875
#define public_6d01889 _public_6d01889
#define public_6d0198f _public_6d0198f
#define public_6d019ab _public_6d019ab
#define public_6d019d8 _public_6d019d8
#define public_6d01a02 _public_6d01a02

PROC_DECLARE(0x6d01689, internal_6d01689, public_6d01689);
extern "C" NAKED register_t __cdecl internal_6d01689()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x78
        mov dword ptr ss : [ebp-0x78], ecx
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [eax], offset public_6d5e2b8
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [ecx+4], offset public_6d5e294
        mov edx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [edx+8], offset public_6d5e284
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [eax+0xC], offset public_6d5e254
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [ecx+0x10], offset public_6d5e220
        mov edx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [edx+0x14], offset public_6d5e200
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [eax+0x18], offset public_6d5e1e0
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [ecx+0x1C], offset public_6d5e1d0
        mov edx, dword ptr ss : [ebp-0x78]
        push edx
        call public_6d07aa8
        mov dword ptr ss : [ebp-0xC], 8
        mov dword ptr ss : [ebp-8], 0x14
        mov eax, dword ptr ss : [ebp-0x78]
        add eax, 0x2B4
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-8]
        imul ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-4]
        add edx, ecx
        mov dword ptr ss : [ebp-4], edx
        public_6d01712 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        sub eax, 1
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jl public_6d01734
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d16030
        jmp public_6d01712
        public_6d01734 : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 0x2A0
        call public_6d16030
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 0x28C
        call public_6d16030
        mov edx, dword ptr ss : [ebp-0x78]
        add edx, 0x278
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        lea ecx, ss:[ebp-0x14]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x28]
        call public_6d16e50
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        call public_6d16e80
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_6d2f249
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 0x198
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x2C], eax
        jmp public_6d017f5
        public_6d017e9 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 0x520
        mov dword ptr ss : [ebp-0x2C], ecx
        public_6d017f5 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ss : [ebp-0x2C]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d01802
        jmp public_6d017e9
        public_6d01802 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, dword ptr ds : [edx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x34], eax
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x78]
        add edx, 0x188
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x3C], eax
        jmp public_6d01875
        public_6d0186c : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x3C], ecx
        public_6d01875 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        cmp edx, dword ptr ss : [ebp-0x40]
        je public_6d01889
        push 0
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d1ee90
        jmp public_6d0186c
        public_6d01889 : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [eax+0xC]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0xC
        idiv ecx
        mov dword ptr ss : [ebp-0x48], eax
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x78]
        add edx, 0x16C
        mov dword ptr ss : [ebp-0x68], edx
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x5C], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        lea ecx, ss:[ebp-0x54]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x68]
        call public_6d16e50
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[ebp-0x58]
        push eax
        mov ecx, dword ptr ss : [ebp-0x68]
        call public_6d1a780
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x60], edx
        mov eax, dword ptr ss : [ebp-0x60]
        push eax
        call public_6d2f249
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x64], ecx
        mov edx, dword ptr ss : [ebp-0x64]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 0x14C
        mov dword ptr ss : [ebp-0x6C], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        cmp dword ptr ds : [edx+4], 0
        je public_6d019ab
        mov eax, dword ptr ss : [ebp-0x6C]
        cmp dword ptr ds : [eax+8], 0
        je public_6d0198f
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d0198f : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+4], 0
        public_6d019ab : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 0x134
        mov dword ptr ss : [ebp-0x70], ecx
        mov edx, dword ptr ss : [ebp-0x70]
        cmp dword ptr ds : [edx], 0
        je public_6d019d8
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [edx], 0
        public_6d019d8 : nop
        mov eax, dword ptr ss : [ebp-0x78]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x74], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        cmp dword ptr ds : [ecx], 0
        je public_6d01a02
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx], 0
        public_6d01a02 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d01689)
    }
}

#undef public_6d01712
#undef public_6d01734
#undef public_6d017e9
#undef public_6d017f5
#undef public_6d01802
#undef public_6d0186c
#undef public_6d01875
#undef public_6d01889
#undef public_6d0198f
#undef public_6d019ab
#undef public_6d019d8
#undef public_6d01a02
