#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62f95bb _public_62f95bb
#define public_62f9603 _public_62f9603
#define public_62f9616 _public_62f9616
#define public_62f9629 _public_62f9629
#define public_62f966e _public_62f966e
#define public_62f9676 _public_62f9676

PROC_DECLARE(0x62f9570, internal_62f9570, public_62f9570);
extern "C" NAKED register_t __cdecl internal_62f9570()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_63fcac0
        mov dword ptr ss : [esp+0x14], esi
        call public_6301640
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_63fcac4]
        jne public_62f9603
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f95a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f95ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f95bb : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_63fcaac
        mov dword ptr ss : [esp+0x14], esi
        call public_6301640
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_63fcab0]
        jne public_62f9616
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f95ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f95f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_62f9629
        public_62f9603 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62f95bb
        fld dword ptr ds : [eax+0x1C]
        pop esi
        add esp, 4
        jmp public_6391dae
        public_62f9616 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62f9629
        fld dword ptr ds : [eax+0x1C]
        pop esi
        add esp, 4
        jmp public_6391dae
        public_62f9629 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_63fcad4
        mov dword ptr ss : [esp+0x14], esi
        call public_6301640
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62f9676
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f9654*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f965e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f966e : nop
        mov eax, 1
        pop esi
        pop ecx
        ret 
        public_62f9676 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62f966e
        fld dword ptr ds : [eax+0x1C]
        pop esi
        add esp, 4
        jmp public_6391dae
        UNREACHABLE_TRAP(0x62f9570)
    }
}

#undef public_62f95bb
#undef public_62f9603
#undef public_62f9616
#undef public_62f9629
#undef public_62f966e
#undef public_62f9676
