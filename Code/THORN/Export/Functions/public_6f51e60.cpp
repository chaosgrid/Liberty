#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f51e60);

PROC_DECLARE(0x6f51e60, internal_6f51e60, public_6f51e60);
extern "C" NAKED register_t __cdecl internal_6f51e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        push eax
        lea ecx, ss:[esp+4]
/*FIXUP push offset public_6f6103c @0x6f51e6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6103c
        push ecx
        call dword ptr ds : [public_6f5a06c]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_6f61024 @0x6f51e81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61024
        push eax
        call public_6f51170
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f51e60)
    }
}
