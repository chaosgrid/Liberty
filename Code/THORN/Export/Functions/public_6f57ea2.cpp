#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57ea2);
CLANG_FORWARD_PROC_SYMBOL(public_6f5833c);

#define public_6f57eb7 _public_6f57eb7

PROC_DECLARE(0x6f57ea2, internal_6f57ea2, public_6f57ea2);
extern "C" NAKED register_t __cdecl internal_6f57ea2()
{
    __asm
    {
        cmp dword ptr ds : [public_6f61e40], 0xFFFFFFFF
        jne public_6f57eb7
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6f5a168]
        pop ecx
        ret 
/*FIXUP public_6f57eb7 : nop
        push offset public_6f61e3c @0x6f57eb7*/
  FIXUP public_6f57eb7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e3c
/*FIXUP push offset public_6f61e40 @0x6f57ebc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e40
        push dword ptr ss : [esp+0xC]
        call public_6f5833c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f57ea2)
    }
}

#undef public_6f57eb7
