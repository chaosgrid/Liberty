#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a80);
CLANG_FORWARD_PROC_SYMBOL(public_65c6d38);

#define public_65c6a95 _public_65c6a95

PROC_DECLARE(0x65c6a80, internal_65c6a80, public_65c6a80);
extern "C" NAKED register_t __cdecl internal_65c6a80()
{
    __asm
    {
        cmp dword ptr ds : [public_65ca2c0], 0xFFFFFFFF
        jne public_65c6a95
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_65c70ac]
        pop ecx
        ret 
/*FIXUP public_65c6a95 : nop
        push offset public_65ca2bc @0x65c6a95*/
  FIXUP public_65c6a95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca2bc
/*FIXUP push offset public_65ca2c0 @0x65c6a9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca2c0
        push dword ptr ss : [esp+0xC]
        call public_65c6d38
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65c6a80)
    }
}

#undef public_65c6a95
