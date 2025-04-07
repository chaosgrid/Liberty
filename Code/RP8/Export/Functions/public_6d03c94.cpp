#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03c94);
CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6d166e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17290);

#define public_6d03cfd _public_6d03cfd
#define public_6d03ddf _public_6d03ddf
#define public_6d03df2 _public_6d03df2
#define public_6d03e19 _public_6d03e19
#define public_6d03e23 _public_6d03e23
#define public_6d03e61 _public_6d03e61
#define public_6d03f90 _public_6d03f90
#define public_6d03fa6 _public_6d03fa6
#define public_6d03fd0 _public_6d03fd0
#define public_6d03fda _public_6d03fda
#define public_6d04019 _public_6d04019
#define public_6d040ed _public_6d040ed
#define public_6d04103 _public_6d04103
#define public_6d0412a _public_6d0412a
#define public_6d04134 _public_6d04134

PROC_DECLARE(0x6d03c94, internal_6d03c94, public_6d03c94);
extern "C" NAKED register_t __cdecl internal_6d03c94()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1EC
        mov dword ptr ss : [ebp-0x1EC], ecx
        mov eax, dword ptr ss : [ebp-0x1EC]
        mov ecx, dword ptr ds : [eax+0x3A8]
        mov dword ptr ss : [ebp-8], ecx
        xor edx, edx
        cmp dword ptr ss : [ebp-8], 0
        sete dl
        mov byte ptr ss : [ebp-1], dl
        mov eax, dword ptr ss : [ebp-0x1EC]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0xA8], ecx
        mov edx, dword ptr ss : [ebp-0x1EC]
        add edx, 0x21FC
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        movzx ecx, byte ptr ds : [eax+0x41]
        test ecx, ecx
        je public_6d03cfd
        mov edx, 1
        test edx, edx
        je public_6d03e23
        public_6d03cfd : nop
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
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax], 0
        movzx ecx, byte ptr ss : [ebp-1]
        test ecx, ecx
        je public_6d03ddf
        push 0
        lea ecx, ss:[ebp-0x6C]
        call public_6d15ca0
        lea ecx, ss:[ebp-0x6C]
        call public_6d15c30
        lea edx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-0xA0], edx
        mov eax, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0xA0]
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [ebp-0x4C]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x4C]
        lea eax, ss:[ebp-0x38]
        push eax
        lea ecx, ss:[ebp-0x9C]
        push ecx
        lea ecx, ss:[ebp-0x6C]
        call public_6d15ec0
        lea edx, ss:[ebp-0x9C]
        push edx
        mov eax, dword ptr ss : [ebp-0xA4]
        push eax
        call public_6d166e0
        add esp, 8
        jmp public_6d03df2
        public_6d03ddf : nop
        lea ecx, ss:[ebp-0x38]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        push edx
        call public_6d166e0
        add esp, 8
        public_6d03df2 : nop
        mov eax, dword ptr ss : [ebp-0xA4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, 1
        test ecx, ecx
        je public_6d03e19
        push 2
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        mov ecx, dword ptr ss : [ebp-0xA4]
        call public_6d17290
        public_6d03e19 : nop
        mov eax, dword ptr ss : [ebp-0xA4]
        mov byte ptr ds : [eax+0x41], 1
        public_6d03e23 : nop
        mov ecx, dword ptr ss : [ebp-0x1EC]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x148], edx
        mov eax, dword ptr ss : [ebp-0x1EC]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0x144], eax
        mov ecx, dword ptr ss : [ebp-0x144]
        movzx edx, byte ptr ds : [ecx+0x41]
        test edx, edx
        je public_6d03e61
        mov eax, 1
        test eax, eax
        je public_6d03fda
        public_6d03e61 : nop
        mov dword ptr ss : [ebp-0xB8], 0x3F800000
        mov dword ptr ss : [ebp-0xC8], 0x3F800000
        mov dword ptr ss : [ebp-0xD8], 0x3F800000
        mov dword ptr ss : [ebp-0xBC], 0
        mov dword ptr ss : [ebp-0xC0], 0
        mov dword ptr ss : [ebp-0xC4], 0
        mov dword ptr ss : [ebp-0xCC], 0
        mov dword ptr ss : [ebp-0xD0], 0
        mov dword ptr ss : [ebp-0xD4], 0
        lea ecx, ss:[ebp-0xB4]
        mov dword ptr ss : [ebp-0xDC], ecx
        mov edx, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0xDC]
        mov dword ptr ds : [ecx], 0
        movzx edx, byte ptr ss : [ebp-1]
        neg edx
        sbb dl, dl
        inc dl
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d03f90
        push 0
        lea ecx, ss:[ebp-0x10C]
        call public_6d15ca0
        lea ecx, ss:[ebp-0x10C]
        call public_6d15c30
        lea ecx, ss:[ebp-0xE8]
        mov dword ptr ss : [ebp-0x140], ecx
        mov edx, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x140]
        mov dword ptr ds : [ecx], 0
        fld dword ptr ss : [ebp-0xEC]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0xEC]
        lea edx, ss:[ebp-0xD8]
        push edx
        lea eax, ss:[ebp-0x13C]
        push eax
        lea ecx, ss:[ebp-0x10C]
        call public_6d15ec0
        lea ecx, ss:[ebp-0x13C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x144]
        push edx
        call public_6d166e0
        add esp, 8
        jmp public_6d03fa6
        public_6d03f90 : nop
        lea eax, ss:[ebp-0xD8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x144]
        push ecx
        call public_6d166e0
        add esp, 8
        public_6d03fa6 : nop
        mov edx, dword ptr ss : [ebp-0x144]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, 1
        test eax, eax
        je public_6d03fd0
        push 0x100
        mov ecx, dword ptr ss : [ebp-0x148]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x144]
        call public_6d17290
        public_6d03fd0 : nop
        mov edx, dword ptr ss : [ebp-0x144]
        mov byte ptr ds : [edx+0x41], 1
        public_6d03fda : nop
        mov eax, dword ptr ss : [ebp-0x1EC]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x1E8], ecx
        mov edx, dword ptr ss : [ebp-0x1EC]
        add edx, 0x2284
        mov dword ptr ss : [ebp-0x1E4], edx
        mov eax, dword ptr ss : [ebp-0x1E4]
        movzx ecx, byte ptr ds : [eax+0x41]
        test ecx, ecx
        je public_6d04019
        mov edx, 1
        test edx, edx
        je public_6d04134
        public_6d04019 : nop
        lea ecx, ss:[ebp-0x178]
        call public_6d15c30
        lea eax, ss:[ebp-0x154]
        mov dword ptr ss : [ebp-0x17C], eax
        mov ecx, dword ptr ss : [ebp-0x17C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x17C]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x17C]
        mov dword ptr ds : [eax], 0
        xor ecx, ecx
        test ecx, ecx
        je public_6d040ed
        push 0
        lea ecx, ss:[ebp-0x1AC]
        call public_6d15ca0
        lea ecx, ss:[ebp-0x1AC]
        call public_6d15c30
        lea edx, ss:[ebp-0x188]
        mov dword ptr ss : [ebp-0x1E0], edx
        mov eax, dword ptr ss : [ebp-0x1E0]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x1E0]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x1E0]
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [ebp-0x18C]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x18C]
        lea eax, ss:[ebp-0x178]
        push eax
        lea ecx, ss:[ebp-0x1DC]
        push ecx
        lea ecx, ss:[ebp-0x1AC]
        call public_6d15ec0
        lea edx, ss:[ebp-0x1DC]
        push edx
        mov eax, dword ptr ss : [ebp-0x1E4]
        push eax
        call public_6d166e0
        add esp, 8
        jmp public_6d04103
        public_6d040ed : nop
        lea ecx, ss:[ebp-0x178]
        push ecx
        mov edx, dword ptr ss : [ebp-0x1E4]
        push edx
        call public_6d166e0
        add esp, 8
        public_6d04103 : nop
        mov eax, dword ptr ss : [ebp-0x1E4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, 1
        test ecx, ecx
        je public_6d0412a
        push 3
        mov edx, dword ptr ss : [ebp-0x1E8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x1E4]
        call public_6d17290
        public_6d0412a : nop
        mov eax, dword ptr ss : [ebp-0x1E4]
        mov byte ptr ds : [eax+0x41], 1
        public_6d04134 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d03c94)
    }
}

#undef public_6d03cfd
#undef public_6d03ddf
#undef public_6d03df2
#undef public_6d03e19
#undef public_6d03e23
#undef public_6d03e61
#undef public_6d03f90
#undef public_6d03fa6
#undef public_6d03fd0
#undef public_6d03fda
#undef public_6d04019
#undef public_6d040ed
#undef public_6d04103
#undef public_6d0412a
#undef public_6d04134
