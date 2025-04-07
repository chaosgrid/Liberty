#include "Server-PCH.h"

PROC_DECLARE(0x6cef4a0, internal_6cef4a0, public_6cef4a0);
extern "C" NAKED register_t __cdecl internal_6cef4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65bb4]
        mov dword ptr ds : [public_6d8d74c], eax
        ret 
        UNREACHABLE_TRAP(0x6cef4a0)
    }
}
