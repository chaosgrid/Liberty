#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17290);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d0b673 _public_6d0b673
#define public_6d0b721 _public_6d0b721
#define public_6d0b825 _public_6d0b825
#define public_6d0b90b _public_6d0b90b
#define public_6d0b92f _public_6d0b92f
#define public_6d0b931 _public_6d0b931

PROC_DECLARE(0x6d0b607, internal_6d0b607, public_6d0b607);
extern "C" NAKED register_t __cdecl internal_6d0b607()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA8
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0b673
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
/*FIXUP push offset public_6d666c0 @0x6d0b649*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d666c0
        push 0xAAF
/*FIXUP push offset public_6d666f0 @0x6d0b653*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d666f0
/*FIXUP push offset public_6d6673c @0x6d0b658*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6673c
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0b931
        public_6d0b673 : nop
        mov byte ptr ss : [ebp-1], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x21FC
        mov dword ptr ss : [ebp-0xA0], eax
        movzx ecx, byte ptr ss : [ebp-1]
        test ecx, ecx
        je public_6d0b825
        mov dword ptr ss : [ebp-0x18], 0x3F800000
        mov dword ptr ss : [ebp-0x28], 0x3F800000
        mov dword ptr ss : [ebp-0x38], 0x3F800000
        mov dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-0x20], 0
        mov dword ptr ss : [ebp-0x24], 0
        mov dword ptr ss : [ebp-0x2C], 0
        mov dword ptr ss : [ebp-0x30], 0
        mov dword ptr ss : [ebp-0x34], 0
        lea edx, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d0b721
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d0b721 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        lea ecx, ss:[ebp-0x38]
        push ecx
        lea edx, ss:[ebp-0x9C]
        push edx
        mov eax, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0xA8], eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0xA8]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x9C]
        lea edi, ss:[ebp-0x68]
        rep movsd
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+0x20], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [edx+0x24], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+0x28], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx+0x30], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [eax+0x34], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+0x38], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+0x3C], 0x3F800000
        jmp public_6d0b90b
        public_6d0b825 : nop
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+0x10], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+0x20], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edx+0x14], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edx+0x24], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edx+0x18], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [edx+0x28], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [edx+0x30], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [edx+0x34], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [edx+0x38], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0x3C], 0x3F800000
        public_6d0b90b : nop
        mov eax, dword ptr ss : [ebp-0xA0]
        mov byte ptr ds : [eax+0x40], 0
        xor ecx, ecx
        test ecx, ecx
        je public_6d0b92f
        push 2
        mov edx, dword ptr ss : [ebp-0xA4]
        push edx
        mov ecx, dword ptr ss : [ebp-0xA0]
        call public_6d17290
        public_6d0b92f : nop
        xor eax, eax
        public_6d0b931 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0b607)
    }
}

#undef public_6d0b673
#undef public_6d0b721
#undef public_6d0b825
#undef public_6d0b90b
#undef public_6d0b92f
#undef public_6d0b931
