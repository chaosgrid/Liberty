#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f4a9a0, internal_6f4a9a0, public_6f4a9a0);
extern "C" NAKED register_t __cdecl internal_6f4a9a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd0c38], al
        xor eax, eax
/*FIXUP push offset _public_6f4a9d0 @0x6f4a9ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4a9d0
        mov dword ptr ds : [public_6fd0c3c], eax
        mov dword ptr ds : [public_6fd0c40], eax
        mov dword ptr ds : [public_6fd0c44], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4a9a0)
    }
}
