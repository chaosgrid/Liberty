#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6321e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x631e7c0, internal_631e7c0, public_631e7c0);
extern "C" NAKED register_t __cdecl internal_631e7c0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_64018ec
        call public_6321e40
/*FIXUP push offset _public_631e7f0 @0x631e7d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631e7f0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631e7c0)
    }
}
