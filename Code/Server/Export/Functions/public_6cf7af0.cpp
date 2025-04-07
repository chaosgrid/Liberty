#include "Server-PCH.h"

PROC_DECLARE(0x6cf7af0, internal_6cf7af0, public_6cf7af0);
extern "C" NAKED register_t __cdecl internal_6cf7af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b08]
        mov dword ptr ds : [public_6d8d860], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7af0)
    }
}
