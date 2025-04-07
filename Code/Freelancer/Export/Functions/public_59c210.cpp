#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c230);
CLANG_FORWARD_PROC_SYMBOL(public_59c510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c210, internal_59c210, public_59c210);
extern "C" NAKED register_t __cdecl internal_59c210()
{
    __asm
    {
/*FIXUP push offset public_5e54f0 @0x59c210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e54f0
        mov ecx, offset public_67db44
        call public_59c510
/*FIXUP push offset _public_59c230 @0x59c21f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c230
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c210)
    }
}
