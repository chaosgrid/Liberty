#include "Common-PCH.h"

PROC_DECLARE(0x631f5f0, internal_631f5f0, public_631f5f0);
extern "C" NAKED register_t __cdecl internal_631f5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018fc]
        ret 
        UNREACHABLE_TRAP(0x631f5f0)
    }
}
