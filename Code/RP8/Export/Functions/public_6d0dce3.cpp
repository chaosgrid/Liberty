#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d0dd51 _public_6d0dd51
#define public_6d0dd67 _public_6d0dd67
#define public_6d0dd7c _public_6d0dd7c
#define public_6d0dd87 _public_6d0dd87
#define public_6d0de26 _public_6d0de26
#define public_6d0de32 _public_6d0de32
#define public_6d0de37 _public_6d0de37
#define public_6d0dee3 _public_6d0dee3
#define public_6d0deec _public_6d0deec
#define public_6d0def3 _public_6d0def3
#define public_6d0df06 _public_6d0df06
#define public_6d0df26 _public_6d0df26
#define public_6d0df45 _public_6d0df45
#define public_6d0df50 _public_6d0df50
#define public_6d0df7b _public_6d0df7b
#define public_6d0dfb4 _public_6d0dfb4
#define public_6d0e01d _public_6d0e01d
#define public_6d0e051 _public_6d0e051
#define public_6d0e059 _public_6d0e059
#define public_6d0e134 _public_6d0e134
#define public_6d0e1a3 _public_6d0e1a3
#define public_6d0e1a9 _public_6d0e1a9

PROC_DECLARE(0x6d0dce3, internal_6d0dce3, public_6d0dce3);
extern "C" NAKED register_t __cdecl internal_6d0dce3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x8090
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0dd51
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x3C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x3C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x3C], ecx
/*FIXUP push offset public_6d67830 @0x6d0dd27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67830
        push 0xCAC
/*FIXUP push offset public_6d67868 @0x6d0dd31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67868
/*FIXUP push offset public_6d678b4 @0x6d0dd36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d678b4
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0e1a9
        public_6d0dd51 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x2C], ecx
        cmp dword ptr ss : [ebp-0x2C], 0
        jne public_6d0dd67
        mov eax, 0xFFFFFFFE
        jmp public_6d0e1a9
        public_6d0dd67 : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0dd7c
        mov dword ptr ss : [ebp-0x2050], 0
        jmp public_6d0dd87
        public_6d0dd7c : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2050], ecx
        public_6d0dd87 : nop
        cmp dword ptr ss : [ebp-0x2050], 0
        je public_6d0de37
        lea edx, ss:[ebp-0x24]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2050]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x2050]
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x2054], eax
        cmp dword ptr ss : [ebp-0x2054], 0
        jge public_6d0de32
        cmp dword ptr ss : [ebp-0x2054], 0
        jge public_6d0de26
        mov ecx, dword ptr ss : [ebp-0x2054]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0ddd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea edx, ss:[ebp-0x405C]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x6068], eax
        mov eax, dword ptr ss : [ebp-0x6068]
        push eax
        push 0xE3
/*FIXUP push offset public_6d6ae00 @0x6d0ddfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0de01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x4060]
        call public_6d15b80
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0de26 : nop
        mov byte ptr ss : [ebp-0x606D], 0
        jmp public_6d0def3
        public_6d0de32 : nop
        jmp public_6d0deec
        public_6d0de37 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        call public_6d1b1a0
        mov dword ptr ss : [ebp-0x2058], eax
        cmp dword ptr ss : [ebp-0x2058], 0
        je public_6d0deec
        lea eax, ss:[ebp-0x24]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2058]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x2058]
        push ecx
        call dword ptr ds : [eax+0x38]
        mov dword ptr ss : [ebp-0x205C], eax
        cmp dword ptr ss : [ebp-0x205C], 0
        jge public_6d0deec
        cmp dword ptr ss : [ebp-0x205C], 0
        jge public_6d0dee3
        mov edx, dword ptr ss : [ebp-0x205C]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0de94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea eax, ss:[ebp-0x6060]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x606C], eax
        mov ecx, dword ptr ss : [ebp-0x606C]
        push ecx
        push 0xF0
/*FIXUP push offset public_6d6ae00 @0x6d0deba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0debf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x6064]
        call public_6d15b80
        mov edx, dword ptr ds : [eax]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0dee3 : nop
        mov byte ptr ss : [ebp-0x606D], 0
        jmp public_6d0def3
        public_6d0deec : nop
        mov byte ptr ss : [ebp-0x606D], 1
        public_6d0def3 : nop
        movzx ecx, byte ptr ss : [ebp-0x606D]
        test ecx, ecx
        jne public_6d0df06
        or eax, 0xFFFFFFFF
        jmp public_6d0e1a9
        public_6d0df06 : nop
        mov dword ptr ss : [ebp-0x28], 0
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d0df26
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x28], 0
        public_6d0df26 : nop
        mov dword ptr ss : [ebp-0x6078], 0x80004005
        mov edx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0df45
        mov dword ptr ss : [ebp-0x6074], 0
        jmp public_6d0df50
        public_6d0df45 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x6074], ecx
        public_6d0df50 : nop
        cmp dword ptr ss : [ebp-0x6074], 0
        je public_6d0df7b
        lea edx, ss:[ebp-0x28]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6074]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x6074]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x6078], eax
        jmp public_6d0dfb4
        public_6d0df7b : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        call public_6d1b1a0
        mov dword ptr ss : [ebp-0x607C], eax
        cmp dword ptr ss : [ebp-0x607C], 0
        je public_6d0dfb4
        lea ecx, ss:[ebp-0x28]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x607C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x607C]
        push edx
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x6078], eax
        public_6d0dfb4 : nop
        cmp dword ptr ss : [ebp-0x6078], 0
        jge public_6d0e01d
        mov eax, dword ptr ss : [ebp-0x6078]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d0dfcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea ecx, ss:[ebp-0x807C]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8084], eax
        mov edx, dword ptr ss : [ebp-0x8084]
        push edx
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d0dff3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0dff8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x8080]
        call public_6d15b80
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0e01d : nop
        xor edx, edx
        cmp dword ptr ss : [ebp-0x6078], 0
        setge dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d0e059
        mov dword ptr ss : [ebp-0x40], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d0e051
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x28], 0
        public_6d0e051 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        jmp public_6d0e1a9
        public_6d0e059 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ds : [ecx+0x128]
        shr dl, 1
        and dl, 1
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        and eax, 0xFFFFF800
        add eax, 0x800
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        push 0
        lea edx, ss:[ebp-0x38]
        push edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x8090], eax
        mov ecx, dword ptr ss : [ebp-0x8090]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x8090]
        push eax
        call dword ptr ds : [edx+0x24]
        mov dword ptr ss : [ebp-0x30], eax
        cmp dword ptr ss : [ebp-0x30], 0
        jge public_6d0e134
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d678d0 @0x6d0e0bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d678d0
        lea edx, ss:[ebp-0x2040]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8088], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2044]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2044], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2044]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2044], eax
        mov ecx, dword ptr ss : [ebp-0x8088]
        push ecx
        push 0xCC8
/*FIXUP push offset public_6d678e8 @0x6d0e119*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d678e8
/*FIXUP push offset public_6d67934 @0x6d0e11e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67934
        mov edx, dword ptr ss : [ebp-0x2044]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0e134 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x808C], ecx
        mov edx, dword ptr ss : [ebp-0x808C]
        push edx
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x2048], eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0x2048]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x204C], ecx
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d0e1a3
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x28], 0
        public_6d0e1a3 : nop
        mov eax, dword ptr ss : [ebp-0x204C]
        public_6d0e1a9 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d0dce3)
    }
}

#undef public_6d0dd51
#undef public_6d0dd67
#undef public_6d0dd7c
#undef public_6d0dd87
#undef public_6d0de26
#undef public_6d0de32
#undef public_6d0de37
#undef public_6d0dee3
#undef public_6d0deec
#undef public_6d0def3
#undef public_6d0df06
#undef public_6d0df26
#undef public_6d0df45
#undef public_6d0df50
#undef public_6d0df7b
#undef public_6d0dfb4
#undef public_6d0e01d
#undef public_6d0e051
#undef public_6d0e059
#undef public_6d0e134
#undef public_6d0e1a3
#undef public_6d0e1a9
