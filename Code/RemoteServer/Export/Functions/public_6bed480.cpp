#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bed810);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d08);

PROC_DECLARE(0x6bed480, internal_6bed480, public_6bed480);
extern "C" NAKED register_t __cdecl internal_6bed480()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6c13bbc
        call public_6bed810
/*FIXUP push offset _public_6bed4b0 @0x6bed495*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6bed4b0
        call public_6c09d08
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6bed480)
    }
}
