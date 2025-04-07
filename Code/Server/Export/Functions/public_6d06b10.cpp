#include "Server-PCH.h"

PROC_DECLARE(0x6d06b10, internal_6d06b10, public_6d06b10);
extern "C" NAKED register_t __cdecl internal_6d06b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cb8]
        mov dword ptr ds : [public_6d8da04], eax
        ret 
        UNREACHABLE_TRAP(0x6d06b10)
    }
}
