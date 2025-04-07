#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d08560 _public_6d08560
#define public_6d08622 _public_6d08622
#define public_6d08695 _public_6d08695
#define public_6d08697 _public_6d08697

PROC_DECLARE(0x6d084f2, internal_6d084f2, public_6d084f2);
extern "C" NAKED register_t __cdecl internal_6d084f2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2028
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d08560
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x18]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x18]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x18], ecx
/*FIXUP push offset public_6d650a8 @0x6d08536*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d650a8
        push 0x721
/*FIXUP push offset public_6d650e0 @0x6d08540*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d650e0
/*FIXUP push offset public_6d6512c @0x6d08545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6512c
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d08697
        public_6d08560 : nop
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
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
        mov dword ptr ss : [ebp-0x14], eax
        cmp dword ptr ss : [ebp-0x14], 0
        jge public_6d08622
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65148 @0x6d085a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65148
        lea edx, ss:[ebp-0x2018]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2020], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x201C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x201C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x201C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x201C], eax
        mov ecx, dword ptr ss : [ebp-0x2020]
        push ecx
        push 0x725
/*FIXUP push offset public_6d65160 @0x6d08602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65160
/*FIXUP push offset public_6d651ac @0x6d08607*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d651ac
        mov edx, dword ptr ss : [ebp-0x201C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x14]
        jmp public_6d08697
        public_6d08622 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x2028], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x2024], ecx
        mov edx, dword ptr ss : [ebp-0x2028]
        push edx
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2024]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edx+0x440], 0
        je public_6d08695
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx+0x440]
        jb public_6d08695
        mov eax, 0xFFFFFFF8
        jmp public_6d08697
        public_6d08695 : nop
        xor eax, eax
        public_6d08697 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d084f2)
    }
}

#undef public_6d08560
#undef public_6d08622
#undef public_6d08695
#undef public_6d08697
