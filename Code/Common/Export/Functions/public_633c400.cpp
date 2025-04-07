#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_633c400);

#define public_633c441 _public_633c441
#define public_633c449 _public_633c449
#define public_633c457 _public_633c457

PROC_DECLARE(0x633c400, internal_633c400, public_633c400);
extern "C" NAKED register_t __cdecl internal_633c400()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        call public_630d3f0
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_658a850
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a854]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_633c441
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c441
        lea eax, ss:[esp+4]
        jmp public_633c449
        public_633c441 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_633c449 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c457
        add eax, 0x10
        pop esi
        add esp, 8
        ret 
        public_633c457 : nop
        push esi
        push 0xCAA
/*FIXUP push offset public_63a4b20 @0x633c45d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a5294 @0x633c467*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5294
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c400)
    }
}

#undef public_633c441
#undef public_633c449
#undef public_633c457
