#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2fe);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f48a);

#define public_6d2f313 _public_6d2f313

PROC_DECLARE(0x6d2f2fe, internal_6d2f2fe, public_6d2f2fe);
extern "C" NAKED register_t __cdecl internal_6d2f2fe()
{
    __asm
    {
        cmp dword ptr ds : [public_6d741d0], 0xFFFFFFFF
        jne public_6d2f313
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6d5e0c0]
        pop ecx
        ret 
/*FIXUP public_6d2f313 : nop
        push offset public_6d741cc @0x6d2f313*/
  FIXUP public_6d2f313 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d741cc
/*FIXUP push offset public_6d741d0 @0x6d2f318*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d741d0
        push dword ptr ss : [esp+0xC]
        call public_6d2f48a
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d2f2fe)
    }
}

#undef public_6d2f313
