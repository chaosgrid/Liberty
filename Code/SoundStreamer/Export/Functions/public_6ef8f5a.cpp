#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8f14);

PROC_DECLARE(0x6ef8f5a, internal_6ef8f5a, public_6ef8f5a);
extern "C" NAKED register_t __cdecl internal_6ef8f5a()
{
    __asm
    {
/*FIXUP push offset _public_6ef8f14 @0x6ef8f5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef8f14
        call dword ptr ds : [public_6efc0a4]
        mov dword ptr ds : [public_6f01248], eax
        ret 
        UNREACHABLE_TRAP(0x6ef8f5a)
    }
}
