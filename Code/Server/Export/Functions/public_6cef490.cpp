#include "Server-PCH.h"

PROC_DECLARE(0x6cef490, internal_6cef490, public_6cef490);
extern "C" NAKED register_t __cdecl internal_6cef490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65bb0]
        mov dword ptr ds : [public_6d8d750], eax
        ret 
        UNREACHABLE_TRAP(0x6cef490)
    }
}
