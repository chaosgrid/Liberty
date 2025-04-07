#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f75f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f79bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f75ee0, internal_6f75ee0, public_6f75ee0);
extern "C" NAKED register_t __cdecl internal_6f75ee0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd3a5c
        call public_6f79bc0
/*FIXUP push offset _public_6f75f10 @0x6f75ef5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f75f10
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f75ee0)
    }
}
