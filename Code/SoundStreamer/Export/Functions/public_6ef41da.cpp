#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef41f7);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52cb);

PROC_DECLARE(0x6ef41da, internal_6ef41da, public_6ef41da);
extern "C" NAKED register_t __cdecl internal_6ef41da()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ef41f7
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6efca98 @0x6ef41ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efca98
        push eax
        call public_6ef52cb
        UNREACHABLE_TRAP(0x6ef41da)
    }
}
