#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a404);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a454);

#define public_6b6a419 _public_6b6a419

PROC_DECLARE(0x6b6a404, internal_6b6a404, public_6b6a404);
extern "C" NAKED register_t __cdecl internal_6b6a404()
{
    __asm
    {
        cmp dword ptr ds : [public_6b74648], 0xFFFFFFFF
        jne public_6b6a419
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6b6b1a0]
        pop ecx
        ret 
/*FIXUP public_6b6a419 : nop
        push offset public_6b74644 @0x6b6a419*/
  FIXUP public_6b6a419 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b74644
/*FIXUP push offset public_6b74648 @0x6b6a41e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b74648
        push dword ptr ss : [esp+0xC]
        call public_6b6a454
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6b6a404)
    }
}

#undef public_6b6a419
