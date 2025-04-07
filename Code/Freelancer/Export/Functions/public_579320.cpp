#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579340);
CLANG_FORWARD_PROC_SYMBOL(public_57ec50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x579320, internal_579320, public_579320);
extern "C" NAKED register_t __cdecl internal_579320()
{
    __asm
    {
/*FIXUP push offset public_5cf24c @0x579320*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
        mov ecx, offset public_67c440
        call public_57ec50
/*FIXUP push offset _public_579340 @0x57932f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_579340
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x579320)
    }
}
