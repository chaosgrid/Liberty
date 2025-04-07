#include "Content-PCH.h"

PROC_DECLARE(0x6f6eec0, internal_6f6eec0, public_6f6eec0);
extern "C" NAKED register_t __cdecl internal_6f6eec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fbbcf4]
        mov dword ptr ds : [public_6fd1c84], eax
        ret 
        UNREACHABLE_TRAP(0x6f6eec0)
    }
}
