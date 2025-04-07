#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bc2);
CLANG_FORWARD_PROC_SYMBOL(public_6600d7e);

#define public_6600bd7 _public_6600bd7

PROC_DECLARE(0x6600bc2, internal_6600bc2, public_6600bc2);
extern "C" NAKED register_t __cdecl internal_6600bc2()
{
    __asm
    {
        cmp dword ptr ds : [public_6603b10], 0xFFFFFFFF
        jne public_6600bd7
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6601070]
        pop ecx
        ret 
/*FIXUP public_6600bd7 : nop
        push offset public_6603b0c @0x6600bd7*/
  FIXUP public_6600bd7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603b0c
/*FIXUP push offset public_6603b10 @0x6600bdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603b10
        push dword ptr ss : [esp+0xC]
        call public_6600d7e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6600bc2)
    }
}

#undef public_6600bd7
