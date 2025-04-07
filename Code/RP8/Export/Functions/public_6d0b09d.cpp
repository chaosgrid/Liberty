#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17290);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d0b109 _public_6d0b109
#define public_6d0b1c1 _public_6d0b1c1
#define public_6d0b2c6 _public_6d0b2c6
#define public_6d0b3ac _public_6d0b3ac
#define public_6d0b3d3 _public_6d0b3d3
#define public_6d0b3d5 _public_6d0b3d5

PROC_DECLARE(0x6d0b09d, internal_6d0b09d, public_6d0b09d);
extern "C" NAKED register_t __cdecl internal_6d0b09d()
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
        jne public_6d0b109
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
/*FIXUP push offset public_6d66590 @0x6d0b0df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66590
        push 0xA9A
/*FIXUP push offset public_6d665c0 @0x6d0b0e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d665c0
/*FIXUP push offset public_6d6660c @0x6d0b0ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6660c
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0b3d5
        public_6d0b109 : nop
        mov byte ptr ss : [ebp-1], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0xA0], eax
        movzx ecx, byte ptr ss : [ebp-1]
        neg ecx
        sbb cl, cl
        inc cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0b2c6
        mov dword ptr ss : [ebp-0x18], 0x3F800000
        mov dword ptr ss : [ebp-0x28], 0x3F800000
        mov dword ptr ss : [ebp-0x38], 0x3F800000
        mov dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-0x20], 0
        mov dword ptr ss : [ebp-0x24], 0
        mov dword ptr ss : [ebp-0x2C], 0
        mov dword ptr ss : [ebp-0x30], 0
        mov dword ptr ss : [ebp-0x34], 0
        lea eax, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-0x6C], eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax], 0
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d0b1c1
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d0b1c1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        lea edx, ss:[ebp-0x38]
        push edx
        lea eax, ss:[ebp-0x9C]
        push eax
        mov ecx, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0xA8], ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0xA8]
        push ecx
        call dword ptr ds : [eax+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x9C]
        lea edi, ss:[ebp-0x68]
        rep movsd
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx+0x18], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+0x28], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [edx+0x30], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+0x34], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+0x38], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0x3C], 0x3F800000
        jmp public_6d0b3ac
        public_6d0b2c6 : nop
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x20], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x24], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x28], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x30], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x34], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x38], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+0x3C], 0x3F800000
        public_6d0b3ac : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov byte ptr ds : [ecx+0x40], 0
        xor edx, edx
        test edx, edx
        je public_6d0b3d3
        push 0x100
        mov eax, dword ptr ss : [ebp-0xA4]
        push eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        call public_6d17290
        public_6d0b3d3 : nop
        xor eax, eax
        public_6d0b3d5 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0b09d)
    }
}

#undef public_6d0b109
#undef public_6d0b1c1
#undef public_6d0b2c6
#undef public_6d0b3ac
#undef public_6d0b3d3
#undef public_6d0b3d5
