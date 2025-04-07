#include "Server-PCH.h"

PROC_DECLARE(0x6d453d0, internal_6d453d0, public_6d453d0);
extern "C" NAKED register_t __cdecl internal_6d453d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d90268]
        ret 
        UNREACHABLE_TRAP(0x6d453d0)
    }
}
