#include "Server-PCH.h"

PROC_DECLARE(0x6cfdfe0, internal_6cfdfe0, public_6cfdfe0);
extern "C" NAKED register_t __cdecl internal_6cfdfe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66ee8]
        mov dword ptr ds : [public_6d8d8c8], eax
        ret 
        UNREACHABLE_TRAP(0x6cfdfe0)
    }
}
