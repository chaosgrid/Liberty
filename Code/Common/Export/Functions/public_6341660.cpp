#include "Common-PCH.h"

PROC_DECLARE(0x6341660, internal_6341660, public_6341660);
extern "C" NAKED register_t __cdecl internal_6341660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a5330]
        mov dword ptr ds : [public_658a9d8], eax
        ret 
        UNREACHABLE_TRAP(0x6341660)
    }
}
