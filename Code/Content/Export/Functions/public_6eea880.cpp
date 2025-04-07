#include "Content-PCH.h"

PROC_DECLARE(0x6eea880, internal_6eea880, public_6eea880);
extern "C" NAKED register_t __cdecl internal_6eea880()
{
    __asm
    {
        mov dword ptr ds : [public_6fcf0dc], 0x4ABEBC20
        ret 
        UNREACHABLE_TRAP(0x6eea880)
    }
}
