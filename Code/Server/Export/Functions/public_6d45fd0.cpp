#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6d46000);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d45fd0, internal_6d45fd0, public_6d45fd0);
extern "C" NAKED register_t __cdecl internal_6d45fd0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d902d0
        call public_6ce3730
/*FIXUP push offset _public_6d46000 @0x6d45fe5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d46000
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d45fd0)
    }
}
