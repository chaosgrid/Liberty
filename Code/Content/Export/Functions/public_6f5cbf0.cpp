#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5cbf0, internal_6f5cbf0, public_6f5cbf0);
extern "C" NAKED register_t __cdecl internal_6f5cbf0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd1ba8], al
        xor eax, eax
/*FIXUP push offset _public_6f5cc20 @0x6f5cbfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5cc20
        mov dword ptr ds : [public_6fd1bac], eax
        mov dword ptr ds : [public_6fd1bb0], eax
        mov dword ptr ds : [public_6fd1bb4], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f5cbf0)
    }
}
