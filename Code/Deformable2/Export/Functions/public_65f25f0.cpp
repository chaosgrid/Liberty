#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f25f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f2600);
CLANG_FORWARD_PROC_SYMBOL(public_6600bee);

PROC_DECLARE(0x65f25f0, internal_65f25f0, public_65f25f0);
/* CHUNK of public_65f2560 */
extern "C" NAKED register_t __cdecl internal_65f25f0()
{
    __asm
    {
/*FIXUP push offset _public_65f2600 @0x65f25f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65f2600
        call public_6600bee
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65f25f0)
    }
}
