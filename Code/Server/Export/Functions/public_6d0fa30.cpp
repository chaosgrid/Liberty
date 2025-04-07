#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0fa60);
CLANG_FORWARD_PROC_SYMBOL(public_6d104a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d0fa30, internal_6d0fa30, public_6d0fa30);
extern "C" NAKED register_t __cdecl internal_6d0fa30()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8da2c
        call public_6d104a0
/*FIXUP push offset _public_6d0fa60 @0x6d0fa45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d0fa60
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d0fa30)
    }
}
