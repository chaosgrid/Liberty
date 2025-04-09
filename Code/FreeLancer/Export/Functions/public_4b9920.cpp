#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9940);
CLANG_FORWARD_PROC_SYMBOL(public_4bd380);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b9920, internal_4b9920, public_4b9920);
extern "C" NAKED register_t __cdecl internal_4b9920()
{
    __asm
    {
/*FIXUP push offset public_5d5a30 @0x4b9920*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a30
        mov ecx, offset public_67233c
        call public_4bd380
/*FIXUP push offset _public_4b9940 @0x4b992f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b9940
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b9920)
    }
}
