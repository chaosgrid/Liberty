#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413640);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x413610, internal_413610, public_413610);
extern "C" NAKED register_t __cdecl internal_413610()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_616524
        call public_4c5a10
/*FIXUP push offset _public_413640 @0x413625*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_413640
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x413610)
    }
}
