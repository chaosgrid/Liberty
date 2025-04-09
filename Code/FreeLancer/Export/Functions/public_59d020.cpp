#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);
CLANG_FORWARD_PROC_SYMBOL(public_59d040);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59d020, internal_59d020, public_59d020);
extern "C" NAKED register_t __cdecl internal_59d020()
{
    __asm
    {
        mov ecx, offset public_67dbf8
        call public_40f150
/*FIXUP push offset _public_59d040 @0x59d02a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59d040
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59d020)
    }
}
