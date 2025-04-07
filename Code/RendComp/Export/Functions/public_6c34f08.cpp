#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34f08);
CLANG_FORWARD_PROC_SYMBOL(public_6c3508e);

#define public_6c34f1d _public_6c34f1d

PROC_DECLARE(0x6c34f08, internal_6c34f08, public_6c34f08);
extern "C" NAKED register_t __cdecl internal_6c34f08()
{
    __asm
    {
        cmp dword ptr ds : [public_6c38190], 0xFFFFFFFF
        jne public_6c34f1d
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6c36070]
        pop ecx
        ret 
/*FIXUP public_6c34f1d : nop
        push offset public_6c3818c @0x6c34f1d*/
  FIXUP public_6c34f1d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3818c
/*FIXUP push offset public_6c38190 @0x6c34f22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c38190
        push dword ptr ss : [esp+0xC]
        call public_6c3508e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6c34f08)
    }
}

#undef public_6c34f1d
