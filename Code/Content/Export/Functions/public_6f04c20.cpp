#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04c50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f04c20, internal_6f04c20, public_6f04c20);
extern "C" NAKED register_t __cdecl internal_6f04c20()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd05ec], al
        xor eax, eax
/*FIXUP push offset _public_6f04c50 @0x6f04c2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f04c50
        mov dword ptr ds : [public_6fd05f0], eax
        mov dword ptr ds : [public_6fd05f4], eax
        mov dword ptr ds : [public_6fd05f8], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f04c20)
    }
}
