#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3280);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6ce3250, internal_6ce3250, public_6ce3250);
extern "C" NAKED register_t __cdecl internal_6ce3250()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d560
        call public_6ce3730
/*FIXUP push offset _public_6ce3280 @0x6ce3265*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce3280
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ce3250)
    }
}
