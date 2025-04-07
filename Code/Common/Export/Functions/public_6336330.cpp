#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6336360);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6336330, internal_6336330, public_6336330);
extern "C" NAKED register_t __cdecl internal_6336330()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_658a994], al
        xor eax, eax
/*FIXUP push offset _public_6336360 @0x633633c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6336360
        mov dword ptr ds : [public_658a998], eax
        mov dword ptr ds : [public_658a99c], eax
        mov dword ptr ds : [public_658a9a0], eax
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6336330)
    }
}
