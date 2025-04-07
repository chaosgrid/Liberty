#include "Server-PCH.h"

PROC_DECLARE(0x6d17ce0, internal_6d17ce0, public_6d17ce0);
extern "C" NAKED register_t __cdecl internal_6d17ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d647b0]
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6d17ce0)
    }
}
