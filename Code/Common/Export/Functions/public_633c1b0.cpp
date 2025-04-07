#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_633c1b0);

#define public_633c1ee _public_633c1ee
#define public_633c1f6 _public_633c1f6
#define public_633c203 _public_633c203
#define public_633c224 _public_633c224

PROC_DECLARE(0x633c1b0, internal_633c1b0, public_633c1b0);
extern "C" NAKED register_t __cdecl internal_633c1b0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_633c224
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a83c
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a840]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_633c1ee
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c1ee
        lea eax, ss:[esp]
        jmp public_633c1f6
        public_633c1ee : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633c1f6 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c203
        add eax, 0x10
        add esp, 8
        ret 
        public_633c203 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push 0xBF3
/*FIXUP push offset public_63a4b20 @0x633c20f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a4f5c @0x633c219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4f5c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_633c224 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c1b0)
    }
}

#undef public_633c1ee
#undef public_633c1f6
#undef public_633c203
#undef public_633c224
