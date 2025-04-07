#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60112);
CLANG_FORWARD_PROC_SYMBOL(public_6d60384);

#define public_6d60127 _public_6d60127

PROC_DECLARE(0x6d60112, internal_6d60112, public_6d60112);
extern "C" NAKED register_t __cdecl internal_6d60112()
{
    __asm
    {
        cmp dword ptr ds : [public_6d90740], 0xFFFFFFFF
        jne public_6d60127
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6d64c40]
        pop ecx
        ret 
/*FIXUP public_6d60127 : nop
        push offset public_6d9073c @0x6d60127*/
  FIXUP public_6d60127 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d9073c
/*FIXUP push offset public_6d90740 @0x6d6012c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90740
        push dword ptr ss : [esp+0xC]
        call public_6d60384
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d60112)
    }
}

#undef public_6d60127
