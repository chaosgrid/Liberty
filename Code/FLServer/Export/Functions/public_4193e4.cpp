#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4193e4);
CLANG_FORWARD_PROC_SYMBOL(public_419648);

#define public_4193f9 _public_4193f9

PROC_DECLARE(0x4193e4, internal_4193e4, public_4193e4);
extern "C" NAKED register_t __cdecl internal_4193e4()
{
    __asm
    {
        cmp dword ptr ds : [public_42a73c], 0xFFFFFFFF
        jne public_4193f9
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_41b928]
        pop ecx
        ret 
/*FIXUP public_4193f9 : nop
        push offset public_42a738 @0x4193f9*/
  FIXUP public_4193f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_42a738
/*FIXUP push offset public_42a73c @0x4193fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42a73c
        push dword ptr ss : [esp+0xC]
        call public_419648
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4193e4)
    }
}

#undef public_4193f9
