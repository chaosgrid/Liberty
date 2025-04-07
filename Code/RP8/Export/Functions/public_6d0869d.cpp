#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc70);

#define public_6d08704 _public_6d08704
#define public_6d08740 _public_6d08740
#define public_6d08749 _public_6d08749
#define public_6d087e9 _public_6d087e9
#define public_6d087f1 _public_6d087f1
#define public_6d087f6 _public_6d087f6
#define public_6d08801 _public_6d08801
#define public_6d0880b _public_6d0880b

PROC_DECLARE(0x6d0869d, internal_6d0869d, public_6d0869d);
extern "C" NAKED register_t __cdecl internal_6d0869d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d08704
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2C], ecx
/*FIXUP push offset public_6d651c8 @0x6d086da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d651c8
        push 0x772
/*FIXUP push offset public_6d65200 @0x6d086e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65200
/*FIXUP push offset public_6d6524c @0x6d086e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6524c
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0880b
        public_6d08704 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1A8]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x12C]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x14], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x20], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x18], 0
        jmp public_6d08749
        public_6d08740 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 1
        mov dword ptr ss : [ebp-0x18], edx
        public_6d08749 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp-0x1C]
        jae public_6d087f6
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A8]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x12C]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        push edx
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d087f1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ds : [edx+0xC]
        jne public_6d087f1
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x34]
        cmp ecx, dword ptr ds : [eax+0x10]
        jne public_6d087f1
        mov edx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edx+0x440], 0
        je public_6d087e9
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+0x440]
        jb public_6d087e9
        jmp public_6d08740
        public_6d087e9 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d087f6
        public_6d087f1 : nop
        jmp public_6d08740
        public_6d087f6 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        jge public_6d08801
        or eax, 0xFFFFFFFF
        jmp public_6d0880b
        public_6d08801 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        public_6d0880b : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0869d)
    }
}

#undef public_6d08704
#undef public_6d08740
#undef public_6d08749
#undef public_6d087e9
#undef public_6d087f1
#undef public_6d087f6
#undef public_6d08801
#undef public_6d0880b
