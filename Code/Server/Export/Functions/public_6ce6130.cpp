#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6160);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6ce6130, internal_6ce6130, public_6ce6130);
extern "C" NAKED register_t __cdecl internal_6ce6130()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d678
        call public_6ce3730
/*FIXUP push offset _public_6ce6160 @0x6ce6145*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce6160
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ce6130)
    }
}
