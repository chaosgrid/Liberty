#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4090f0);

PROC_DECLARE(0x4090f0, internal_4090f0, public_4090f0);
extern "C" NAKED register_t __cdecl internal_4090f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x80
        push eax
/*FIXUP push offset public_426a90 @0x4090fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_426a90
        call dword ptr ds : [public_41b990]
        add esp, 0xC
/*FIXUP push offset _public_408cc0 @0x409108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_408cc0
        mov word ptr ds : [public_426b8e], 0
        call dword ptr ds : [public_41b178]
        ret 
        UNREACHABLE_TRAP(0x4090f0)
    }
}
