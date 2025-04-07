#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63262e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x63262b0, internal_63262b0, public_63262b0);
extern "C" NAKED register_t __cdecl internal_63262b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_640956c], al
        xor eax, eax
/*FIXUP push offset _public_63262e0 @0x63262bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63262e0
        mov dword ptr ds : [public_6409570], eax
        mov dword ptr ds : [public_6409574], eax
        mov dword ptr ds : [public_6409578], eax
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63262b0)
    }
}
