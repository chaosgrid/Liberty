#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632a200);
CLANG_FORWARD_PROC_SYMBOL(public_632c120);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x632a1d0, internal_632a1d0, public_632a1d0);
extern "C" NAKED register_t __cdecl internal_632a1d0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6401950
        call public_632c120
/*FIXUP push offset _public_632a200 @0x632a1e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_632a200
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x632a1d0)
    }
}
