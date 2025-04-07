#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e640);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ece0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a430);

PROC_DECLARE(0x6b4e610, internal_6b4e610, public_6b4e610);
extern "C" NAKED register_t __cdecl internal_6b4e610()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6b73f1c
        call public_6b4ece0
/*FIXUP push offset _public_6b4e640 @0x6b4e625*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b4e640
        call public_6b6a430
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6b4e610)
    }
}
