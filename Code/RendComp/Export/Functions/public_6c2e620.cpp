#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e620);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e630);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

PROC_DECLARE(0x6c2e620, internal_6c2e620, public_6c2e620);
/* CHUNK of public_6c2e590 */
extern "C" NAKED register_t __cdecl internal_6c2e620()
{
    __asm
    {
/*FIXUP push offset _public_6c2e630 @0x6c2e620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e630
        call public_6c34f34
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c2e620)
    }
}
