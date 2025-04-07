#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562700);
CLANG_FORWARD_PROC_SYMBOL(public_563890);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5626e0, internal_5626e0, public_5626e0);
extern "C" NAKED register_t __cdecl internal_5626e0()
{
    __asm
    {
/*FIXUP push offset public_5e205c @0x5626e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e205c
        mov ecx, offset public_67a444
        call public_563890
/*FIXUP push offset _public_562700 @0x5626ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_562700
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5626e0)
    }
}
