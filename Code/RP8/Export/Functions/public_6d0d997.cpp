#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d0d9fe _public_6d0d9fe
#define public_6d0da1d _public_6d0da1d
#define public_6d0da6c _public_6d0da6c
#define public_6d0da96 _public_6d0da96
#define public_6d0da9f _public_6d0da9f
#define public_6d0dae0 _public_6d0dae0
#define public_6d0db31 _public_6d0db31
#define public_6d0dba0 _public_6d0dba0
#define public_6d0dba8 _public_6d0dba8
#define public_6d0dbd7 _public_6d0dbd7
#define public_6d0dbdc _public_6d0dbdc
#define public_6d0dc1b _public_6d0dc1b
#define public_6d0dc33 _public_6d0dc33
#define public_6d0dc3b _public_6d0dc3b
#define public_6d0dc42 _public_6d0dc42
#define public_6d0dc49 _public_6d0dc49
#define public_6d0dc4b _public_6d0dc4b

PROC_DECLARE(0x6d0d997, internal_6d0d997, public_6d0d997);
extern "C" NAKED register_t __cdecl internal_6d0d997()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x4C
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d9fe
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
/*FIXUP push offset public_6d67668 @0x6d0d9d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67668
        push 0xC91
/*FIXUP push offset public_6d676a0 @0x6d0d9de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d676a0
/*FIXUP push offset public_6d676ec @0x6d0d9e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d676ec
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0dc4b
        public_6d0d9fe : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0da1d
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0da6c
        public_6d0da1d : nop
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
/*FIXUP push offset public_6d67708 @0x6d0da49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67708
        push 0xC95
/*FIXUP push offset public_6d67730 @0x6d0da53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67730
/*FIXUP push offset public_6d6777c @0x6d0da58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6777c
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0da6c : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0dbdc
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d0dbdc
        mov dword ptr ss : [ebp-0x10], 0
        jmp public_6d0da9f
        public_6d0da96 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 1
        mov dword ptr ss : [ebp-0x10], edx
        public_6d0da9f : nop
        cmp dword ptr ss : [ebp-0x10], 8
        jae public_6d0dbdc
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx*8+0x1F94]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d0dae0
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [ecx+4], 1
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [edx], 0
        public_6d0dae0 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        cmp edx, dword ptr ss : [ebp-4]
        jne public_6d0dbd7
        mov dword ptr ss : [ebp-0x3C], 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx*8+0x1F94]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        je public_6d0db31
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp-0x3C]
        jne public_6d0db31
        jmp public_6d0dbd7
        public_6d0db31 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        cmp dword ptr ss : [ebp-0x3C], 0
        je public_6d0dba8
        mov eax, dword ptr ss : [ebp-0x3C]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0dba0
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x30]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x30]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x30], eax
/*FIXUP push offset public_6d6ae50 @0x6d0db7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae50
        push 0x139
/*FIXUP push offset public_6d6ae00 @0x6d0db87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0db8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0dba0 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2C], ecx
        public_6d0dba8 : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov dword ptr ss : [ebp-0x28], eax
        cmp dword ptr ss : [ebp-0x28], 0
        jl public_6d0dbd7
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov byte ptr ds : [eax+4], 1
        public_6d0dbd7 : nop
        jmp public_6d0da96
        public_6d0dbdc : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d0dc49
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x44], eax
        cmp dword ptr ss : [ebp-0x44], 0
        je public_6d0dc3b
        mov ecx, dword ptr ss : [ebp-0x44]
        cmp dword ptr ds : [ecx], 0
        je public_6d0dc1b
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx], 0
        public_6d0dc1b : nop
        mov edx, 1
        and edx, 1
        test edx, edx
        je public_6d0dc33
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d0dc33 : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x4C], ecx
        jmp public_6d0dc42
        public_6d0dc3b : nop
        mov dword ptr ss : [ebp-0x4C], 0
        public_6d0dc42 : nop
        mov dword ptr ss : [ebp+0xC], 0
        public_6d0dc49 : nop
        xor eax, eax
        public_6d0dc4b : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0d997)
    }
}

#undef public_6d0d9fe
#undef public_6d0da1d
#undef public_6d0da6c
#undef public_6d0da96
#undef public_6d0da9f
#undef public_6d0dae0
#undef public_6d0db31
#undef public_6d0dba0
#undef public_6d0dba8
#undef public_6d0dbd7
#undef public_6d0dbdc
#undef public_6d0dc1b
#undef public_6d0dc33
#undef public_6d0dc3b
#undef public_6d0dc42
#undef public_6d0dc49
#undef public_6d0dc4b
