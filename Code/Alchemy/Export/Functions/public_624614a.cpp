#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624614a);
CLANG_FORWARD_PROC_SYMBOL(public_62464ac);

#define public_624615f _public_624615f

PROC_DECLARE(0x624614a, internal_624614a, public_624614a);
extern "C" NAKED register_t __cdecl internal_624614a()
{
    __asm
    {
        cmp dword ptr ds : [public_6258390], 0xFFFFFFFF
        jne public_624615f
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_624b07c]
        pop ecx
        ret 
/*FIXUP public_624615f : nop
        push offset public_625838c @0x624615f*/
  FIXUP public_624615f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_625838c
/*FIXUP push offset public_6258390 @0x6246164*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6258390
        push dword ptr ss : [esp+0xC]
        call public_62464ac
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x624614a)
    }
}

#undef public_624615f
