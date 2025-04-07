#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f990);
CLANG_FORWARD_PROC_SYMBOL(public_58fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x58f970, internal_58f970, public_58f970);
extern "C" NAKED register_t __cdecl internal_58f970()
{
    __asm
    {
/*FIXUP push offset public_5cfcb0 @0x58f970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcb0
        mov ecx, offset public_67d8f8
        call public_58fbd0
/*FIXUP push offset _public_58f990 @0x58f97f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_58f990
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x58f970)
    }
}
