#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e40);
CLANG_FORWARD_PROC_SYMBOL(public_5b81ec);

#define public_5b7e55 _public_5b7e55

PROC_DECLARE(0x5b7e40, internal_5b7e40, public_5b7e40);
extern "C" NAKED register_t __cdecl internal_5b7e40()
{
    __asm
    {
        cmp dword ptr ds : [public_67ee48], 0xFFFFFFFF
        jne public_5b7e55
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_5c7188]
        pop ecx
        ret 
/*FIXUP public_5b7e55 : nop
        push offset public_67ee44 @0x5b7e55*/
  FIXUP public_5b7e55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ee44
/*FIXUP push offset public_67ee48 @0x5b7e5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ee48
        push dword ptr ss : [esp+0xC]
        call public_5b81ec
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5b7e40)
    }
}

#undef public_5b7e55
