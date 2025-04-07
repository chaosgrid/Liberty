#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4140);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52cb);

PROC_DECLARE(0x6ef4107, internal_6ef4107, public_6ef4107);
extern "C" NAKED register_t __cdecl internal_6ef4107()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ef4140
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6efcb08 @0x6ef4119*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efcb08
        push eax
        call public_6ef52cb
        UNREACHABLE_TRAP(0x6ef4107)
    }
}
