#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_633c33f _public_633c33f
#define public_633c347 _public_633c347
#define public_633c354 _public_633c354

PROC_DECLARE(0x633c310, internal_633c310, public_633c310);
extern "C" NAKED register_t __cdecl internal_633c310()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a850
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a854]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_633c33f
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c33f
        lea eax, ss:[esp]
        jmp public_633c347
        public_633c33f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633c347 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c354
        add eax, 0x10
        add esp, 8
        ret 
        public_633c354 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push 0xC8E
/*FIXUP push offset public_63a4b20 @0x633c360*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a523c @0x633c36a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a523c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c310)
    }
}

#undef public_633c33f
#undef public_633c347
#undef public_633c354
