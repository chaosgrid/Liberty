#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804150);
CLANG_FORWARD_PROC_SYMBOL(public_6804d60);

PROC_DECLARE(0x6804d60, internal_6804d60, public_6804d60);
extern "C" NAKED register_t __cdecl internal_6804d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
/*FIXUP push offset public_680d59c @0x6804d64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d59c
        push eax
        call public_6804150
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6804d60)
    }
}
