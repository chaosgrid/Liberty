#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6d166e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17290);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d0bbc2 _public_6d0bbc2
#define public_6d0bc64 _public_6d0bc64
#define public_6d0bd65 _public_6d0bd65
#define public_6d0bd78 _public_6d0bd78
#define public_6d0bd9f _public_6d0bd9f
#define public_6d0bdd5 _public_6d0bdd5
#define public_6d0beed _public_6d0beed
#define public_6d0bf03 _public_6d0bf03
#define public_6d0bf27 _public_6d0bf27
#define public_6d0bf31 _public_6d0bf31
#define public_6d0bf33 _public_6d0bf33

PROC_DECLARE(0x6d0bb58, internal_6d0bb58, public_6d0bb58);
extern "C" NAKED register_t __cdecl internal_6d0bb58()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14C
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0bbc2
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
/*FIXUP push offset public_6d667f8 @0x6d0bb98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d667f8
        push 0xAC4
/*FIXUP push offset public_6d66830 @0x6d0bba2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66830
/*FIXUP push offset public_6d6687c @0x6d0bba7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6687c
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0bf33
        public_6d0bbc2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3A8]
        mov dword ptr ss : [ebp-0xC], edx
        xor eax, eax
        cmp dword ptr ss : [ebp-0xC], 0
        sete al
        mov byte ptr ss : [ebp-1], al
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0xA8], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0xA4], eax
        movzx ecx, byte ptr ss : [ebp-1]
        neg ecx
        sbb cl, cl
        inc cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0bd65
        lea ecx, ss:[ebp-0x3C]
        call public_6d15c30
        lea eax, ss:[ebp-0x18]
        mov dword ptr ss : [ebp-0x70], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [eax], 0
        fld dword ptr ss : [ebp-0x1C]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x1C]
        push 0
        lea ecx, ss:[ebp-0xA0]
        call public_6d15ca0
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d0bc64
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d0bc64 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        lea edx, ss:[ebp-0x3C]
        push edx
        lea eax, ss:[ebp-0xA0]
        push eax
        mov ecx, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0x14C], ecx
        mov edx, dword ptr ss : [ebp-0x14C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x14C]
        push ecx
        call dword ptr ds : [eax+0x1C]
        lea edx, ss:[ebp-0xA0]
        push edx
        lea ecx, ss:[ebp-0x6C]
        call public_6d15cb0
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [ecx+0x24], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx+0x28], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+0x30], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [edx+0x34], eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+0x38], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov dword ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0xA4]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0xA4]
        mov dword ptr ds : [eax+0x3C], 0x3F800000
        jmp public_6d0bd78
        public_6d0bd65 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        push edx
        call public_6d166e0
        add esp, 8
        public_6d0bd78 : nop
        mov eax, dword ptr ss : [ebp-0xA4]
        mov byte ptr ds : [eax+0x40], 0
        xor ecx, ecx
        test ecx, ecx
        je public_6d0bd9f
        push 0x100
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        mov ecx, dword ptr ss : [ebp-0xA4]
        call public_6d17290
        public_6d0bd9f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x148], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x21FC
        mov dword ptr ss : [ebp-0x144], edx
        mov eax, dword ptr ss : [ebp-0x144]
        movzx ecx, byte ptr ds : [eax+0x41]
        test ecx, ecx
        je public_6d0bdd5
        xor edx, edx
        test edx, edx
        je public_6d0bf31
        public_6d0bdd5 : nop
        mov dword ptr ss : [ebp-0xB8], 0x3F800000
        mov dword ptr ss : [ebp-0xC8], 0x3F800000
        mov dword ptr ss : [ebp-0xD8], 0x3F800000
        mov dword ptr ss : [ebp-0xBC], 0
        mov dword ptr ss : [ebp-0xC0], 0
        mov dword ptr ss : [ebp-0xC4], 0
        mov dword ptr ss : [ebp-0xCC], 0
        mov dword ptr ss : [ebp-0xD0], 0
        mov dword ptr ss : [ebp-0xD4], 0
        lea eax, ss:[ebp-0xB4]
        mov dword ptr ss : [ebp-0xDC], eax
        mov ecx, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [eax], 0
        movzx ecx, byte ptr ss : [ebp-1]
        test ecx, ecx
        je public_6d0beed
        lea ecx, ss:[ebp-0x10C]
        call public_6d15c30
        lea edx, ss:[ebp-0xE8]
        mov dword ptr ss : [ebp-0x140], edx
        mov eax, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [ebp-0xEC]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0xEC]
        lea eax, ss:[ebp-0xD8]
        push eax
        lea ecx, ss:[ebp-0x13C]
        push ecx
        lea ecx, ss:[ebp-0x10C]
        call public_6d15ec0
        lea edx, ss:[ebp-0x13C]
        push edx
        mov eax, dword ptr ss : [ebp-0x144]
        push eax
        call public_6d166e0
        add esp, 8
        jmp public_6d0bf03
        public_6d0beed : nop
        lea ecx, ss:[ebp-0xD8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x144]
        push edx
        call public_6d166e0
        add esp, 8
        public_6d0bf03 : nop
        mov eax, dword ptr ss : [ebp-0x144]
        mov byte ptr ds : [eax+0x40], 0
        xor ecx, ecx
        test ecx, ecx
        je public_6d0bf27
        push 2
        mov edx, dword ptr ss : [ebp-0x148]
        push edx
        mov ecx, dword ptr ss : [ebp-0x144]
        call public_6d17290
        public_6d0bf27 : nop
        mov eax, dword ptr ss : [ebp-0x144]
        mov byte ptr ds : [eax+0x41], 1
        public_6d0bf31 : nop
        xor eax, eax
        public_6d0bf33 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0bb58)
    }
}

#undef public_6d0bbc2
#undef public_6d0bc64
#undef public_6d0bd65
#undef public_6d0bd78
#undef public_6d0bd9f
#undef public_6d0bdd5
#undef public_6d0beed
#undef public_6d0bf03
#undef public_6d0bf27
#undef public_6d0bf31
#undef public_6d0bf33
