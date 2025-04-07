#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d1b1e8 _public_6d1b1e8
#define public_6d1b1f3 _public_6d1b1f3
#define public_6d1b2ae _public_6d1b2ae
#define public_6d1b2b5 _public_6d1b2b5
#define public_6d1b2ba _public_6d1b2ba
#define public_6d1b2cf _public_6d1b2cf
#define public_6d1b2da _public_6d1b2da
#define public_6d1b395 _public_6d1b395
#define public_6d1b399 _public_6d1b399
#define public_6d1b39b _public_6d1b39b

PROC_DECLARE(0x6d1b1c0, internal_6d1b1c0, public_6d1b1c0);
extern "C" NAKED register_t __cdecl internal_6d1b1c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4024
        call public_6d2f270
        mov dword ptr ss : [ebp-0x4024], ecx
        mov eax, dword ptr ss : [ebp-0x4024]
        cmp dword ptr ds : [eax+4], 0
        je public_6d1b1e8
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d1b1f3
        public_6d1b1e8 : nop
        mov ecx, dword ptr ss : [ebp-0x4024]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-4], edx
        public_6d1b1f3 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1b2ba
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call dword ptr ds : [eax+0x38]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1b2b5
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1b2ae
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d1b235*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea eax, ss:[ebp-0x2010]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x401C], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2014]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2014]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2014], ecx
        mov edx, dword ptr ss : [ebp-0x401C]
        push edx
        push 0xE3
/*FIXUP push offset public_6d6ae00 @0x6d1b292*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d1b297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov eax, dword ptr ss : [ebp-0x2014]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d1b2ae : nop
        xor al, al
        jmp public_6d1b39b
        public_6d1b2b5 : nop
        jmp public_6d1b399
        public_6d1b2ba : nop
        mov edx, dword ptr ss : [ebp-0x4024]
        cmp dword ptr ds : [edx+4], 1
        je public_6d1b2cf
        mov dword ptr ss : [ebp-0xC], 0
        jmp public_6d1b2da
        public_6d1b2cf : nop
        mov eax, dword ptr ss : [ebp-0x4024]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d1b2da : nop
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d1b399
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d1b399
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d1b395
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d1b31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea edx, ss:[ebp-0x4014]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4020], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x4018]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x4018], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x4018]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x4018], eax
        mov ecx, dword ptr ss : [ebp-0x4020]
        push ecx
        push 0xF0
/*FIXUP push offset public_6d6ae00 @0x6d1b37a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d1b37f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x4018]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d1b395 : nop
        xor al, al
        jmp public_6d1b39b
        public_6d1b399 : nop
        mov al, 1
        public_6d1b39b : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1b1c0)
    }
}

#undef public_6d1b1e8
#undef public_6d1b1f3
#undef public_6d1b2ae
#undef public_6d1b2b5
#undef public_6d1b2ba
#undef public_6d1b2cf
#undef public_6d1b2da
#undef public_6d1b395
#undef public_6d1b399
#undef public_6d1b39b
