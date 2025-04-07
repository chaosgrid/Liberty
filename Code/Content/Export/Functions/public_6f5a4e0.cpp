#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a510);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5a4e0, internal_6f5a4e0, public_6f5a4e0);
extern "C" NAKED register_t __cdecl internal_6f5a4e0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd0e54], al
        xor eax, eax
/*FIXUP push offset _public_6f5a510 @0x6f5a4ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5a510
        mov dword ptr ds : [public_6fd0e58], eax
        mov dword ptr ds : [public_6fd0e5c], eax
        mov dword ptr ds : [public_6fd0e60], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f5a4e0)
    }
}
