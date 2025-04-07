#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d172f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d1738e _public_6d1738e
#define public_6d17493 _public_6d17493
#define public_6d17579 _public_6d17579
#define public_6d175e2 _public_6d175e2

PROC_DECLARE(0x6d172f0, internal_6d172f0, public_6d172f0);
extern "C" NAKED register_t __cdecl internal_6d172f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA0
        push esi
        push edi
        mov dword ptr ss : [ebp-0x9C], ecx
        movzx eax, byte ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d17493
        mov dword ptr ss : [ebp-0x10], 0x3F800000
        mov dword ptr ss : [ebp-0x20], 0x3F800000
        mov dword ptr ss : [ebp-0x30], 0x3F800000
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0x18], 0
        mov dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-0x24], 0
        mov dword ptr ss : [ebp-0x28], 0
        mov dword ptr ss : [ebp-0x2C], 0
        lea ecx, ss:[ebp-0xC]
        mov dword ptr ss : [ebp-0x64], ecx
        mov edx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [ecx], 0
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d1738e
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d1738e : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        lea eax, ss:[ebp-0x30]
        push eax
        lea ecx, ss:[ebp-0x94]
        push ecx
        mov edx, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0xA0], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0xA0]
        push edx
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x94]
        lea edi, ss:[ebp-0x60]
        rep movsd
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx+0x24], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+0x28], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+0x30], ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [edx+0x34], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+0x38], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [eax+0x3C], 0x3F800000
        jmp public_6d17579
        public_6d17493 : nop
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x20], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+0x14], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x24], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ds : [ecx+0x28], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x24]
        mov dword ptr ds : [ecx+0x30], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x28]
        mov dword ptr ds : [ecx+0x34], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [ecx+0x38], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [ecx+0x3C], 0x3F800000
        public_6d17579 : nop
        mov edx, dword ptr ss : [ebp-0x9C]
        mov byte ptr ds : [edx+0x40], 0
        movzx eax, byte ptr ss : [ebp+0x18]
        test eax, eax
        je public_6d175e2
        mov ecx, dword ptr ss : [ebp-0x9C]
        movzx edx, byte ptr ds : [ecx+0x40]
        test edx, edx
        jne public_6d175e2
        mov eax, dword ptr ss : [ebp-0x9C]
        mov byte ptr ds : [eax+0x41], 0
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ss : [ebp-0x9C]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ss : [ebp-0x98], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x98], 0
        setge cl
        mov edx, dword ptr ss : [ebp-0x9C]
        mov byte ptr ds : [edx+0x40], cl
        public_6d175e2 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d172f0)
    }
}

#undef public_6d1738e
#undef public_6d17493
#undef public_6d17579
#undef public_6d175e2
