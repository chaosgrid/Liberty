#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef97c8);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9934);

PROC_DECLARE(0x6ef9934, internal_6ef9934, public_6ef9934);
extern "C" NAKED register_t __cdecl internal_6ef9934()
{
    __asm
    {
/*FIXUP push offset public_6f00828 @0x6ef9934*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f00828
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6ef97c8
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef9934)
    }
}
