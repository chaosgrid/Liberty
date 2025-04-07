#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6560);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6ce6530, internal_6ce6530, public_6ce6530);
extern "C" NAKED register_t __cdecl internal_6ce6530()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d6b4
        call public_6ce3730
/*FIXUP push offset _public_6ce6560 @0x6ce6545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce6560
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ce6530)
    }
}
