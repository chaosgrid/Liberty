#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391f72);
CLANG_FORWARD_PROC_SYMBOL(public_6392134);

#define public_6391f87 _public_6391f87

PROC_DECLARE(0x6391f72, internal_6391f72, public_6391f72);
extern "C" NAKED register_t __cdecl internal_6391f72()
{
    __asm
    {
        cmp dword ptr ds : [public_658ea0c], 0xFFFFFFFF
        jne public_6391f87
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_63992c8]
        pop ecx
        ret 
/*FIXUP public_6391f87 : nop
        push offset public_658ea08 @0x6391f87*/
  FIXUP public_6391f87 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658ea08
/*FIXUP push offset public_658ea0c @0x6391f8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658ea0c
        push dword ptr ss : [esp+0xC]
        call public_6392134
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6391f72)
    }
}

#undef public_6391f87
