#include "Server-PCH.h"

PROC_DECLARE(0x6d18910, internal_6d18910, public_6d18910);
extern "C" NAKED register_t __cdecl internal_6d18910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68670]
        mov dword ptr ds : [public_6d8f5f8], eax
        ret 
        UNREACHABLE_TRAP(0x6d18910)
    }
}
