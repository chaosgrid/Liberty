#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0e742 _public_6d0e742
#define public_6d0e761 _public_6d0e761
#define public_6d0e7b8 _public_6d0e7b8
#define public_6d0e7d4 _public_6d0e7d4
#define public_6d0e7dc _public_6d0e7dc
#define public_6d0e89a _public_6d0e89a
#define public_6d0e8a6 _public_6d0e8a6
#define public_6d0e8ab _public_6d0e8ab
#define public_6d0e8bd _public_6d0e8bd
#define public_6d0e8c5 _public_6d0e8c5
#define public_6d0e952 _public_6d0e952
#define public_6d0e95b _public_6d0e95b
#define public_6d0e962 _public_6d0e962
#define public_6d0e994 _public_6d0e994
#define public_6d0e99c _public_6d0e99c
#define public_6d0e9bb _public_6d0e9bb
#define public_6d0e9d0 _public_6d0e9d0
#define public_6d0e9db _public_6d0e9db
#define public_6d0e9ed _public_6d0e9ed
#define public_6d0ea02 _public_6d0ea02
#define public_6d0ea05 _public_6d0ea05

PROC_DECLARE(0x6d0e6d4, internal_6d0e6d4, public_6d0e6d4);
extern "C" NAKED register_t __cdecl internal_6d0e6d4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4064
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0e742
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d67b20 @0x6d0e718*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67b20
        push 0xD01
/*FIXUP push offset public_6d67b58 @0x6d0e722*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67b58
/*FIXUP push offset public_6d67ba4 @0x6d0e727*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67ba4
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ea05
        public_6d0e742 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0e761
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0e7b8
        public_6d0e761 : nop
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0xC]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
/*FIXUP push offset public_6d67bc0 @0x6d0e78d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67bc0
        push 0xD09
/*FIXUP push offset public_6d67be8 @0x6d0e797*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67be8
/*FIXUP push offset public_6d67c34 @0x6d0e79c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67c34
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ea05
        public_6d0e7b8 : nop
        mov dword ptr ss : [ebp-0x405C], 0
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0e7d4
        mov dword ptr ss : [ebp-0x3C], 0
        jmp public_6d0e7dc
        public_6d0e7d4 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x3C], ecx
        public_6d0e7dc : nop
        cmp dword ptr ss : [ebp-0x3C], 0
        je public_6d0e8ab
        lea edx, ss:[ebp-0x2C]
        push edx
        mov eax, dword ptr ss : [ebp-0x405C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x40], eax
        cmp dword ptr ss : [ebp-0x40], 0
        jge public_6d0e8a6
        cmp dword ptr ss : [ebp-0x40], 0
        jge public_6d0e89a
        mov ecx, dword ptr ss : [ebp-0x40]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0e821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea edx, ss:[ebp-0x2048]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4054], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x204C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x204C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x204C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x204C], eax
        mov ecx, dword ptr ss : [ebp-0x4054]
        push ecx
        push 0xE3
/*FIXUP push offset public_6d6ae00 @0x6d0e87f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0e884*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x204C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0e89a : nop
        mov byte ptr ss : [ebp-0x405D], 0
        jmp public_6d0e962
        public_6d0e8a6 : nop
        jmp public_6d0e95b
        public_6d0e8ab : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+4], 1
        je public_6d0e8bd
        mov dword ptr ss : [ebp-0x44], 0
        jmp public_6d0e8c5
        public_6d0e8bd : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x44], eax
        public_6d0e8c5 : nop
        cmp dword ptr ss : [ebp-0x44], 0
        je public_6d0e95b
        lea ecx, ss:[ebp-0x2C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x405C]
        push edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        call dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [ebp-0x48], eax
        cmp dword ptr ss : [ebp-0x48], 0
        jge public_6d0e95b
        cmp dword ptr ss : [ebp-0x48], 0
        jge public_6d0e952
        mov eax, dword ptr ss : [ebp-0x48]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0e902*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea ecx, ss:[ebp-0x404C]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4058], eax
        mov edx, dword ptr ss : [ebp-0x4058]
        push edx
        push 0xF0
/*FIXUP push offset public_6d6ae00 @0x6d0e928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0e92d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x4050]
        call public_6d15b80
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0e952 : nop
        mov byte ptr ss : [ebp-0x405D], 0
        jmp public_6d0e962
        public_6d0e95b : nop
        mov byte ptr ss : [ebp-0x405D], 1
        public_6d0e962 : nop
        movzx edx, byte ptr ss : [ebp-0x405D]
        mov dword ptr ss : [ebp-0x30], edx
        cmp dword ptr ss : [ebp-0x30], 0
        jl public_6d0e9ed
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d0e994
        mov dword ptr ss : [ebp-0x34], 0
        jmp public_6d0e99c
        public_6d0e994 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x34], eax
        public_6d0e99c : nop
        cmp dword ptr ss : [ebp-0x34], 0
        je public_6d0e9bb
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call dword ptr ds : [edx+0x34]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx], edx
        jmp public_6d0e9ed
        public_6d0e9bb : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+4], 1
        je public_6d0e9d0
        mov dword ptr ss : [ebp-0x4064], 0
        jmp public_6d0e9db
        public_6d0e9d0 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x4064], edx
        public_6d0e9db : nop
        cmp dword ptr ss : [ebp-0x4064], 0
        je public_6d0e9ed
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax], 6
        public_6d0e9ed : nop
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x30], 0
        setge cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0ea02
        xor eax, eax
        jmp public_6d0ea05
        public_6d0ea02 : nop
        or eax, 0xFFFFFFFF
        public_6d0ea05 : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d0e6d4)
    }
}

#undef public_6d0e742
#undef public_6d0e761
#undef public_6d0e7b8
#undef public_6d0e7d4
#undef public_6d0e7dc
#undef public_6d0e89a
#undef public_6d0e8a6
#undef public_6d0e8ab
#undef public_6d0e8bd
#undef public_6d0e8c5
#undef public_6d0e952
#undef public_6d0e95b
#undef public_6d0e962
#undef public_6d0e994
#undef public_6d0e99c
#undef public_6d0e9bb
#undef public_6d0e9d0
#undef public_6d0e9db
#undef public_6d0e9ed
#undef public_6d0ea02
#undef public_6d0ea05
