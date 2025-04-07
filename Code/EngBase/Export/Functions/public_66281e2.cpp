#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66281e2);
CLANG_FORWARD_PROC_SYMBOL(public_66283b4);

#define public_66281f7 _public_66281f7

PROC_DECLARE(0x66281e2, internal_66281e2, public_66281e2);
extern "C" NAKED register_t __cdecl internal_66281e2()
{
    __asm
    {
        cmp dword ptr ds : [public_662b1cc], 0xFFFFFFFF
        jne public_66281f7
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_662905c]
        pop ecx
        ret 
/*FIXUP public_66281f7 : nop
        push offset public_662b1c8 @0x66281f7*/
  FIXUP public_66281f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662b1c8
/*FIXUP push offset public_662b1cc @0x66281fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662b1cc
        push dword ptr ss : [esp+0xC]
        call public_66283b4
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x66281e2)
    }
}

#undef public_66281f7
