#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef44fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4592);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eab);

PROC_DECLARE(0x6ef44fb, internal_6ef44fb, public_6ef44fb);
/* CHUNK of public_6ef44c5 */
extern "C" NAKED register_t __cdecl internal_6ef44fb()
{
    __asm
    {
/*FIXUP push offset _public_6ef4592 @0x6ef44fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef4592
        call public_6ef4eab
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef44fb)
    }
}
