#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebd50);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d08);

PROC_DECLARE(0x6bebd20, internal_6bebd20, public_6bebd20);
extern "C" NAKED register_t __cdecl internal_6bebd20()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6c13ba4
        call public_6bec3c0
/*FIXUP push offset _public_6bebd50 @0x6bebd35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6bebd50
        call public_6c09d08
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6bebd20)
    }
}
