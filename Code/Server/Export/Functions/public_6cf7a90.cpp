#include "Server-PCH.h"

PROC_DECLARE(0x6cf7a90, internal_6cf7a90, public_6cf7a90);
extern "C" NAKED register_t __cdecl internal_6cf7a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66afc]
        mov dword ptr ds : [public_6d8d810], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7a90)
    }
}
