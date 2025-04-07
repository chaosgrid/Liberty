#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f050c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f05090, internal_6f05090, public_6f05090);
extern "C" NAKED register_t __cdecl internal_6f05090()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd05d4], al
        xor eax, eax
/*FIXUP push offset _public_6f050c0 @0x6f0509c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f050c0
        mov dword ptr ds : [public_6fd05d8], eax
        mov dword ptr ds : [public_6fd05dc], eax
        mov dword ptr ds : [public_6fd05e0], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f05090)
    }
}
