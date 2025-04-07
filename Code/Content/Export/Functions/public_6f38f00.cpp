#include "Content-PCH.h"

PROC_DECLARE(0x6f38f00, internal_6f38f00, public_6f38f00);
extern "C" NAKED register_t __cdecl internal_6f38f00()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0954], eax
        ret 
        UNREACHABLE_TRAP(0x6f38f00)
    }
}
