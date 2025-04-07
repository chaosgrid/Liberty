#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_633bfee _public_633bfee
#define public_633bff6 _public_633bff6
#define public_633c003 _public_633c003
#define public_633c024 _public_633c024

PROC_DECLARE(0x633bfb0, internal_633bfb0, public_633bfb0);
extern "C" NAKED register_t __cdecl internal_633bfb0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_633c024
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a828
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a82c]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_633bfee
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633bfee
        lea eax, ss:[esp]
        jmp public_633bff6
        public_633bfee : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633bff6 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c003
        add eax, 0x10
        add esp, 8
        ret 
        public_633c003 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push 0xBD8
/*FIXUP push offset public_63a4b20 @0x633c00f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a520c @0x633c019*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a520c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_633c024 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633bfb0)
    }
}

#undef public_633bfee
#undef public_633bff6
#undef public_633c003
#undef public_633c024
