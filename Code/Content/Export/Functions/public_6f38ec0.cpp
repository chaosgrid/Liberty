#include "Content-PCH.h"

PROC_DECLARE(0x6f38ec0, internal_6f38ec0, public_6f38ec0);
extern "C" NAKED register_t __cdecl internal_6f38ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fb95e0]
        mov dword ptr ds : [public_6fd0948], eax
        ret 
        UNREACHABLE_TRAP(0x6f38ec0)
    }
}
