#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6d0fa20);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d0f9f0, internal_6d0f9f0, public_6d0f9f0);
extern "C" NAKED register_t __cdecl internal_6d0f9f0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8da40
        call public_6ce3730
/*FIXUP push offset _public_6d0fa20 @0x6d0fa05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d0fa20
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d0f9f0)
    }
}
