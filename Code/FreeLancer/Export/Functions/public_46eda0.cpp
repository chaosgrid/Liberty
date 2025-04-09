#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46edd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x46eda0, internal_46eda0, public_46eda0);
extern "C" NAKED register_t __cdecl internal_46eda0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_66dabc], al
        xor eax, eax
/*FIXUP push offset _public_46edd0 @0x46edac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_46edd0
        mov dword ptr ds : [public_66dac0], eax
        mov dword ptr ds : [public_66dac4], eax
        mov dword ptr ds : [public_66dac8], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46eda0)
    }
}
