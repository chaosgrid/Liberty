#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55fea0);
CLANG_FORWARD_PROC_SYMBOL(public_5735a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x573580, internal_573580, public_573580);
extern "C" NAKED register_t __cdecl internal_573580()
{
    __asm
    {
/*FIXUP push offset public_67bcf8 @0x573580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bcf8
        mov ecx, offset public_67a890
        call public_55fea0
/*FIXUP push offset _public_5735a0 @0x57358f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5735a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x573580)
    }
}
