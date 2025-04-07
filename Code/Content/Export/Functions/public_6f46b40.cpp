#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f46b40, internal_6f46b40, public_6f46b40);
extern "C" NAKED register_t __cdecl internal_6f46b40()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd0bd0], al
        xor eax, eax
/*FIXUP push offset _public_6f46b70 @0x6f46b4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f46b70
        mov dword ptr ds : [public_6fd0bd4], eax
        mov dword ptr ds : [public_6fd0bd8], eax
        mov dword ptr ds : [public_6fd0bdc], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f46b40)
    }
}
