#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a800);
CLANG_FORWARD_PROC_SYMBOL(public_680b4f0);

PROC_DECLARE(0x680b4f0, internal_680b4f0, public_680b4f0);
extern "C" NAKED register_t __cdecl internal_680b4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        push eax
        lea ecx, ss:[esp+4]
/*FIXUP push offset public_680e544 @0x680b4fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e544
        push ecx
        call dword ptr ds : [public_680c060]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_680e52c @0x680b511*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e52c
        push eax
        call public_680a800
        UNREACHABLE_TRAP(0x680b4f0)
    }
}
