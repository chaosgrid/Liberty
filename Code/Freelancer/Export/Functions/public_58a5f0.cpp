#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_58a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c457b);

#define public_58a698 _public_58a698
#define public_58a6a7 _public_58a6a7
#define public_58a6f0 _public_58a6f0
#define public_58a724 _public_58a724

PROC_DECLARE(0x58a5f0, internal_58a5f0, public_58a5f0);
extern "C" NAKED register_t __cdecl internal_58a5f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c457b @0x58a5f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c457b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2014
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x2024]
        test eax, eax
        push esi
        mov esi, ecx
        je public_58a6f0
        push edi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x2034], 0
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_58a698
/*FIXUP push offset public_5e2ba0 @0x58a65b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2ba0
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea eax, ds:[edi+1]
        push eax
        lea ecx, ss:[esp+0xC]
        call public_4142a0
        mov ecx, dword ptr ss : [esp+8]
        push edi
/*FIXUP push offset public_5e2ba0 @0x58a67d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2ba0
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], 0
        jmp public_58a6a7
        public_58a698 : nop
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_413df0
        public_58a6a7 : nop
        fld dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        mov edi, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push edi
        call public_415860
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        pop edi
        je public_58a724
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        jmp public_58a724
        public_58a6f0 : nop
        fld dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
/*FIXUP push offset public_5c8ce0 @0x58a71a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        call public_415860
        public_58a724 : nop
        mov ecx, dword ptr ss : [esp+0x2018]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2020
        ret 4
        UNREACHABLE_TRAP(0x58a5f0)
    }
}

#undef public_58a698
#undef public_58a6a7
#undef public_58a6f0
#undef public_58a724
