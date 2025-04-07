#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c9f);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0e3e);

#define public_6ed0cb4 _public_6ed0cb4

PROC_DECLARE(0x6ed0c9f, internal_6ed0c9f, public_6ed0c9f);
extern "C" NAKED register_t __cdecl internal_6ed0c9f()
{
    __asm
    {
        cmp dword ptr ds : [public_6ed7f58], 0xFFFFFFFF
        jne public_6ed0cb4
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6ed1078]
        pop ecx
        ret 
/*FIXUP public_6ed0cb4 : nop
        push offset public_6ed7f54 @0x6ed0cb4*/
  FIXUP public_6ed0cb4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed7f54
/*FIXUP push offset public_6ed7f58 @0x6ed0cb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed7f58
        push dword ptr ss : [esp+0xC]
        call public_6ed0e3e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ed0c9f)
    }
}

#undef public_6ed0cb4
