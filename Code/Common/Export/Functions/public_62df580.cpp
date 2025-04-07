#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62df5a2 _public_62df5a2

PROC_DECLARE(0x62df580, internal_62df580, public_62df580);
extern "C" NAKED register_t __cdecl internal_62df580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca1c]
        sub esp, 0x104
        test eax, eax
        je public_62df5a2
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [public_63fca1c], 0
        public_62df5a2 : nop
        push 0
        lea eax, ss:[esp+4]
/*FIXUP push offset public_63a062c @0x62df5a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a062c
        push eax
        call public_6302df0
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_62df5d0
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x62df580)
    }
}

#undef public_62df5a2
