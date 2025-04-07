#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef97c8);
CLANG_FORWARD_PROC_SYMBOL(public_6ef994a);

PROC_DECLARE(0x6ef994a, internal_6ef994a, public_6ef994a);
extern "C" NAKED register_t __cdecl internal_6ef994a()
{
    __asm
    {
/*FIXUP push offset public_6f00840 @0x6ef994a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f00840
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6ef97c8
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef994a)
    }
}
