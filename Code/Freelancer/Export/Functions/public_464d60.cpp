#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464d80);
CLANG_FORWARD_PROC_SYMBOL(public_46c0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x464d60, internal_464d60, public_464d60);
extern "C" NAKED register_t __cdecl internal_464d60()
{
    __asm
    {
/*FIXUP push offset public_5cfaac @0x464d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfaac
        mov ecx, offset public_66d47c
        call public_46c0a0
/*FIXUP push offset _public_464d80 @0x464d6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_464d80
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x464d60)
    }
}
