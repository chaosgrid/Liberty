#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53f860, internal_53f860, public_53f860);
extern "C" NAKED register_t __cdecl internal_53f860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df888]
        mov dword ptr ds : [public_678ad8], eax
        ret 
        UNREACHABLE_TRAP(0x53f860)
    }
}
