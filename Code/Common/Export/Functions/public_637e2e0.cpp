#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);

PROC_DECLARE(0x637e2e0, internal_637e2e0, public_637e2e0);
extern "C" NAKED register_t __cdecl internal_637e2e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push 0
        push 0
        push eax
        push ecx
/*FIXUP push offset public_63ee94c @0x637e2ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        push 0
        push edx
        call public_6378600
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x637e2e0)
    }
}
