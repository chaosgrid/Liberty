#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67008e6);
CLANG_FORWARD_PROC_SYMBOL(public_6700a8a);

#define public_67008fb _public_67008fb

PROC_DECLARE(0x67008e6, internal_67008e6, public_67008e6);
extern "C" NAKED register_t __cdecl internal_67008e6()
{
    __asm
    {
        cmp dword ptr ds : [public_6706284], 0xFFFFFFFF
        jne public_67008fb
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_670103c]
        pop ecx
        ret 
/*FIXUP public_67008fb : nop
        push offset public_6706280 @0x67008fb*/
  FIXUP public_67008fb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6706280
/*FIXUP push offset public_6706284 @0x6700900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6706284
        push dword ptr ss : [esp+0xC]
        call public_6700a8a
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x67008e6)
    }
}

#undef public_67008fb
