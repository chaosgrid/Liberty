#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef44ef);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eab);

PROC_DECLARE(0x6ef44ef, internal_6ef44ef, public_6ef44ef);
extern "C" NAKED register_t __cdecl internal_6ef44ef()
{
    __asm
    {
/*FIXUP push offset _public_6ef2ab0 @0x6ef44ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef2ab0
        call public_6ef4eab
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef44ef)
    }
}
