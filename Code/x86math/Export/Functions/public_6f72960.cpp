#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72960);
CLANG_FORWARD_PROC_SYMBOL(public_6f72aec);

#define public_6f72975 _public_6f72975

PROC_DECLARE(0x6f72960, internal_6f72960, public_6f72960);
extern "C" NAKED register_t __cdecl internal_6f72960()
{
    __asm
    {
        cmp dword ptr ds : [public_6f7444c], 0xFFFFFFFF
        jne public_6f72975
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6f7301c]
        pop ecx
        ret 
/*FIXUP public_6f72975 : nop
        push offset public_6f74448 @0x6f72975*/
  FIXUP public_6f72975 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f74448
/*FIXUP push offset public_6f7444c @0x6f7297a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f7444c
        push dword ptr ss : [esp+0xC]
        call public_6f72aec
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f72960)
    }
}

#undef public_6f72975
