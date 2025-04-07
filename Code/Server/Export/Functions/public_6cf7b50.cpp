#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7b80);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cf7b50, internal_6cf7b50, public_6cf7b50);
extern "C" NAKED register_t __cdecl internal_6cf7b50()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d834
        call public_6cfc2d0
/*FIXUP push offset _public_6cf7b80 @0x6cf7b65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cf7b80
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cf7b50)
    }
}
