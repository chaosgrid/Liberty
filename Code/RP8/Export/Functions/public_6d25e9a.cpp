#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d25e9a);
CLANG_FORWARD_PROC_SYMBOL(public_6d29c90);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d25ecc _public_6d25ecc
#define public_6d25ece _public_6d25ece
#define public_6d25eee _public_6d25eee
#define public_6d25f14 _public_6d25f14
#define public_6d25f2d _public_6d25f2d
#define public_6d25f6b _public_6d25f6b
#define public_6d25f6d _public_6d25f6d
#define public_6d25f8d _public_6d25f8d
#define public_6d25fb3 _public_6d25fb3
#define public_6d25fcc _public_6d25fcc
#define public_6d2600a _public_6d2600a
#define public_6d2600c _public_6d2600c
#define public_6d2602c _public_6d2602c
#define public_6d26052 _public_6d26052
#define public_6d2606b _public_6d2606b

PROC_DECLARE(0x6d25e9a, internal_6d25e9a, public_6d25e9a);
extern "C" NAKED register_t __cdecl internal_6d25e9a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x4C
        mov dword ptr ss : [ebp-0x40], ecx
        mov eax, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [eax], offset public_6d5eb20
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x14], ecx
        mov dl, byte ptr ss : [ebp-1]
        mov eax, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d25ecc
        mov edx, dword ptr ss : [ebp-0x14]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d25ece
        public_6d25ecc : nop
        jmp public_6d25f2d
        public_6d25ece : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d25eee
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d25f14
        public_6d25eee : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d25f2d
        public_6d25f14 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [eax], dl
        public_6d25f2d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x30
        mov dword ptr ss : [ebp-0x20], ecx
        mov dl, byte ptr ss : [ebp-2]
        mov eax, dword ptr ss : [ebp-0x20]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d25f6b
        mov edx, dword ptr ss : [ebp-0x20]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d25f6d
        public_6d25f6b : nop
        jmp public_6d25fcc
        public_6d25f6d : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d25f8d
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d25fb3
        public_6d25f8d : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d25fcc
        public_6d25fb3 : nop
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [eax], dl
        public_6d25fcc : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x40
        mov dword ptr ss : [ebp-0x2C], ecx
        mov dl, byte ptr ss : [ebp-3]
        mov eax, dword ptr ss : [ebp-0x2C]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d2600a
        mov edx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2600c
        public_6d2600a : nop
        jmp public_6d2606b
        public_6d2600c : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2602c
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d26052
        public_6d2602c : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d2606b
        public_6d26052 : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x4C], eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [eax], dl
        public_6d2606b : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x55C
        mov dword ptr ss : [ebp-0x30], ecx
        mov dl, byte ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ss : [ebp-5]
        mov edx, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [edx+1], cl
        mov eax, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x30]
        call public_6d29c90
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x570
        mov dword ptr ss : [ebp-0x3C], ecx
        mov dl, byte ptr ss : [ebp-6]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ss : [ebp-7]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov byte ptr ds : [edx+1], cl
        mov eax, dword ptr ss : [ebp-0x3C]
        mov byte ptr ds : [eax+0xC], 0
        push 1
        push 0
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d2a3f0
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+8]
        mov byte ptr ds : [eax+0x21], 1
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], 0
        push 0
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d2a3f0
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx], offset public_6d5eaf4
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [edx+0x18], 0
        mov eax, dword ptr ss : [ebp-0x40]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d25e9a)
    }
}

#undef public_6d25ecc
#undef public_6d25ece
#undef public_6d25eee
#undef public_6d25f14
#undef public_6d25f2d
#undef public_6d25f6b
#undef public_6d25f6d
#undef public_6d25f8d
#undef public_6d25fb3
#undef public_6d25fcc
#undef public_6d2600a
#undef public_6d2600c
#undef public_6d2602c
#undef public_6d26052
#undef public_6d2606b
