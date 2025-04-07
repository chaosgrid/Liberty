#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6cf2430);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cf2400, internal_6cf2400, public_6cf2400);
extern "C" NAKED register_t __cdecl internal_6cf2400()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d75c
        call public_6ce3730
/*FIXUP push offset _public_6cf2430 @0x6cf2415*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cf2430
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cf2400)
    }
}
