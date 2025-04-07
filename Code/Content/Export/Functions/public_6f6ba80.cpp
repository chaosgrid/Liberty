#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6bab0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f6ba80, internal_6f6ba80, public_6f6ba80);
extern "C" NAKED register_t __cdecl internal_6f6ba80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd1ca8], al
        xor eax, eax
/*FIXUP push offset _public_6f6bab0 @0x6f6ba8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f6bab0
        mov dword ptr ds : [public_6fd1cac], eax
        mov dword ptr ds : [public_6fd1cb0], eax
        mov dword ptr ds : [public_6fd1cb4], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f6ba80)
    }
}
