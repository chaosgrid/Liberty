#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7010);

PROC_DECLARE(0x58c330, internal_58c330, public_58c330);
extern "C" NAKED register_t __cdecl internal_58c330()
{
    __asm
    {
        push 0
        call public_5b7010
        add esp, 4
        mov dword ptr ds : [public_67d8cc], eax
        ret 
        UNREACHABLE_TRAP(0x58c330)
    }
}
