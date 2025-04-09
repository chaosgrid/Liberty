#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4adde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4addb0, internal_4addb0, public_4addb0);
extern "C" NAKED register_t __cdecl internal_4addb0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6721c0], al
        xor eax, eax
/*FIXUP push offset _public_4adde0 @0x4addbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4adde0
        mov dword ptr ds : [public_6721c4], eax
        mov dword ptr ds : [public_6721c8], eax
        mov dword ptr ds : [public_6721cc], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4addb0)
    }
}
