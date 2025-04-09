#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f960);
CLANG_FORWARD_PROC_SYMBOL(public_58fac0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x58f940, internal_58f940, public_58f940);
extern "C" NAKED register_t __cdecl internal_58f940()
{
    __asm
    {
/*FIXUP push offset public_5e5308 @0x58f940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5308
        mov ecx, offset public_67d924
        call public_58fac0
/*FIXUP push offset _public_58f960 @0x58f94f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_58f960
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x58f940)
    }
}
