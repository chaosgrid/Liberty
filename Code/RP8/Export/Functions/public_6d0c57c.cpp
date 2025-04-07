#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d15da0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15e00);
CLANG_FORWARD_PROC_SYMBOL(public_6d15e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d172f0);

#define public_6d0c5f7 _public_6d0c5f7
#define public_6d0c91a _public_6d0c91a
#define public_6d0c98f _public_6d0c98f
#define public_6d0c991 _public_6d0c991
#define public_6d0c9b8 _public_6d0c9b8
#define public_6d0c9ba _public_6d0c9ba

PROC_DECLARE(0x6d0c57c, internal_6d0c57c, public_6d0c57c);
extern "C" NAKED register_t __cdecl internal_6d0c57c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x13C
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0c5f7
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xD4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xD4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xD4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xD4], ecx
/*FIXUP push offset public_6d66a78 @0x6d0c5ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66a78
        push 0xAF6
/*FIXUP push offset public_6d66aa8 @0x6d0c5d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66aa8
/*FIXUP push offset public_6d66af4 @0x6d0c5d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66af4
        mov edx, dword ptr ss : [ebp-0xD4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0c9ba
        public_6d0c5f7 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0xD0], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [ebp-0xCC], edx
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp-0xC8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x70], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x68], eax
        lea ecx, ss:[ebp-0x70]
        push ecx
        lea edx, ss:[ebp-0xD0]
        push edx
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6d15da0
        add esp, 0xC
        lea ecx, ss:[ebp-0xC]
        call public_6d15d10
        fdivr dword ptr ds : [public_6d5e488]
        fstp dword ptr ss : [ebp-0xF0]
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp-0xF0]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp-0xF0]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ss : [ebp-0xF0]
        fstp dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-0x64]
        push ecx
        lea ecx, ss:[ebp-0xC]
        call public_6d15d50
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [ebp-0x2C], ecx
        fld dword ptr ss : [ebp-0x34]
        fmul dword ptr ss : [ebp-0x60]
        fld dword ptr ss : [ebp-0x30]
        fmul dword ptr ss : [ebp-0x64]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [ebp-0x2C]
        fmul dword ptr ss : [ebp-0x64]
        fld dword ptr ss : [ebp-0x34]
        fmul dword ptr ss : [ebp-0x5C]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [ebp-0x30]
        fmul dword ptr ss : [ebp-0x5C]
        fld dword ptr ss : [ebp-0x2C]
        fmul dword ptr ss : [ebp-0x60]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[ebp-0x28]
        call public_6d15ce0
        lea ecx, ss:[ebp-0x28]
        call public_6d15d10
        fdivr dword ptr ds : [public_6d5e488]
        fstp dword ptr ss : [ebp-0xF4]
        fld dword ptr ss : [ebp-0x28]
        fmul dword ptr ss : [ebp-0xF4]
        fstp dword ptr ss : [ebp-0x28]
        fld dword ptr ss : [ebp-0x24]
        fmul dword ptr ss : [ebp-0xF4]
        fstp dword ptr ss : [ebp-0x24]
        fld dword ptr ss : [ebp-0x20]
        fmul dword ptr ss : [ebp-0xF4]
        fstp dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp-0x64]
        fmul dword ptr ss : [ebp-0x24]
        fld dword ptr ss : [ebp-0x60]
        fmul dword ptr ss : [ebp-0x28]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [ebp-0x5C]
        fmul dword ptr ss : [ebp-0x28]
        fld dword ptr ss : [ebp-0x64]
        fmul dword ptr ss : [ebp-0x20]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [ebp-0x60]
        fmul dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp-0x5C]
        fmul dword ptr ss : [ebp-0x24]
        fsubp 
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[ebp-0xE0]
        call public_6d15ce0
        mov edx, dword ptr ss : [ebp-0xE0]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0xDC]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0xD8]
        mov dword ptr ss : [ebp-0x2C], ecx
        lea ecx, ss:[ebp-0x34]
        call public_6d15d10
        fdivr dword ptr ds : [public_6d5e488]
        fstp dword ptr ss : [ebp-0xF8]
        fld dword ptr ss : [ebp-0x34]
        fmul dword ptr ss : [ebp-0xF8]
        fstp dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp-0x30]
        fmul dword ptr ss : [ebp-0xF8]
        fstp dword ptr ss : [ebp-0x30]
        fld dword ptr ss : [ebp-0x2C]
        fmul dword ptr ss : [ebp-0xF8]
        fstp dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0xC4], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0xB8], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0xAC], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0xC0], edx
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0xB4], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0xA8], ecx
        mov edx, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0xBC], edx
        mov eax, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0xB0], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0xA4], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        push edx
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        mov ecx, dword ptr ss : [ebp-0xBC]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        mov eax, dword ptr ss : [ebp-0xB4]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC0]
        push ecx
        mov edx, dword ptr ss : [ebp-0xAC]
        push edx
        mov eax, dword ptr ss : [ebp-0xB8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC4]
        push ecx
        lea ecx, ss:[ebp-0x58]
        call public_6d15e00
        lea edx, ss:[ebp-0x70]
        push edx
        lea eax, ss:[ebp-0x58]
        push eax
        lea ecx, ss:[ebp-0xEC]
        push ecx
        call public_6d15e60
        add esp, 0xC
        lea edx, ss:[ebp-0x1C]
        push edx
        lea ecx, ss:[ebp-0xEC]
        call public_6d15d50
        mov ecx, 9
        lea esi, ss:[ebp-0x58]
        lea edi, ss:[ebp-0xA0]
        rep movsd
        lea eax, ss:[ebp-0x7C]
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x3A8]
        mov dword ptr ss : [ebp-0xFC], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0xFC], 0
        sete cl
        mov byte ptr ss : [ebp-0xD], cl
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x3A8]
        mov dword ptr ss : [ebp-0x100], eax
        cmp dword ptr ss : [ebp-0x100], 0
        je public_6d0c991
        push 0
        lea ecx, ss:[ebp-0xA0]
        push ecx
        push 0x100
        movzx edx, byte ptr ss : [ebp-0xD]
        neg edx
        sbb dl, dl
        inc dl
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x2240
        call public_6d172f0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x13C], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21FC
        mov dword ptr ss : [ebp-0x138], ecx
        mov edx, dword ptr ss : [ebp-0x138]
        movzx eax, byte ptr ds : [edx+0x41]
        test eax, eax
        je public_6d0c91a
        xor ecx, ecx
        test ecx, ecx
        je public_6d0c98f
        public_6d0c91a : nop
        push 0
        lea ecx, ss:[ebp-0x130]
        call public_6d15ca0
        lea ecx, ss:[ebp-0x130]
        call public_6d15c30
        lea edx, ss:[ebp-0x10C]
        mov dword ptr ss : [ebp-0x134], edx
        mov eax, dword ptr ss : [ebp-0x134]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x134]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x134]
        mov dword ptr ds : [edx], 0
        push 0
        lea eax, ss:[ebp-0x130]
        push eax
        push 2
        mov cl, byte ptr ss : [ebp-0xD]
        push ecx
        mov edx, dword ptr ss : [ebp-0x13C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x138]
        call public_6d172f0
        mov eax, dword ptr ss : [ebp-0x138]
        mov byte ptr ds : [eax+0x41], 1
        public_6d0c98f : nop
        jmp public_6d0c9b8
        public_6d0c991 : nop
        push 0
        lea ecx, ss:[ebp-0xA0]
        push ecx
        push 2
        mov dl, byte ptr ss : [ebp-0xD]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21FC
        call public_6d172f0
        public_6d0c9b8 : nop
        xor eax, eax
        public_6d0c9ba : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x28
        UNREACHABLE_TRAP(0x6d0c57c)
    }
}

#undef public_6d0c5f7
#undef public_6d0c91a
#undef public_6d0c98f
#undef public_6d0c991
#undef public_6d0c9b8
#undef public_6d0c9ba
