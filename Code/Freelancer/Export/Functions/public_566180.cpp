#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5661a0);
CLANG_FORWARD_PROC_SYMBOL(public_5662a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x566180, internal_566180, public_566180);
extern "C" NAKED register_t __cdecl internal_566180()
{
    __asm
    {
        mov ecx, offset public_67b780
        call public_5662a0
/*FIXUP push offset _public_5661a0 @0x56618a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5661a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x566180)
    }
}
