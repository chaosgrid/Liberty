#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f4c);
CLANG_FORWARD_PROC_SYMBOL(public_6db20f6);

#define public_6db1f61 _public_6db1f61

PROC_DECLARE(0x6db1f4c, internal_6db1f4c, public_6db1f4c);
extern "C" NAKED register_t __cdecl internal_6db1f4c()
{
    __asm
    {
        cmp dword ptr ds : [public_6dbc63c], 0xFFFFFFFF
        jne public_6db1f61
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6db31d4]
        pop ecx
        ret 
/*FIXUP public_6db1f61 : nop
        push offset public_6dbc638 @0x6db1f61*/
  FIXUP public_6db1f61 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbc638
/*FIXUP push offset public_6dbc63c @0x6db1f66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbc63c
        push dword ptr ss : [esp+0xC]
        call public_6db20f6
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6db1f4c)
    }
}

#undef public_6db1f61
