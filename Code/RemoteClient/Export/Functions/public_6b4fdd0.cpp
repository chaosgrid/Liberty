#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6b50160);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a430);

PROC_DECLARE(0x6b4fdd0, internal_6b4fdd0, public_6b4fdd0);
extern "C" NAKED register_t __cdecl internal_6b4fdd0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6b73f34
        call public_6b50160
/*FIXUP push offset _public_6b4fe00 @0x6b4fde5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b4fe00
        call public_6b6a430
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6b4fdd0)
    }
}
