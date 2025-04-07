#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6bb40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f6bb10, internal_6f6bb10, public_6f6bb10);
extern "C" NAKED register_t __cdecl internal_6f6bb10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd1c98], al
        xor eax, eax
/*FIXUP push offset _public_6f6bb40 @0x6f6bb1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f6bb40
        mov dword ptr ds : [public_6fd1c9c], eax
        mov dword ptr ds : [public_6fd1ca0], eax
        mov dword ptr ds : [public_6fd1ca4], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f6bb10)
    }
}
