#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509fb0);
CLANG_FORWARD_PROC_SYMBOL(public_50a020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x509f90, internal_509f90, public_509f90);
extern "C" NAKED register_t __cdecl internal_509f90()
{
    __asm
    {
        push 0x80
        push 0
        mov ecx, offset public_675018
        call public_509fb0
/*FIXUP push offset _public_50a020 @0x509fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_50a020
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x509f90)
    }
}
