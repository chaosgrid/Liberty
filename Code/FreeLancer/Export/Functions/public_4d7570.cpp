#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d7590);
CLANG_FORWARD_PROC_SYMBOL(public_4d9990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4d7570, internal_4d7570, public_4d7570);
extern "C" NAKED register_t __cdecl internal_4d7570()
{
    __asm
    {
/*FIXUP push offset public_5d829c @0x4d7570*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d829c
        mov ecx, offset public_674a1c
        call public_4d9990
/*FIXUP push offset _public_4d7590 @0x4d757f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d7590
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4d7570)
    }
}
