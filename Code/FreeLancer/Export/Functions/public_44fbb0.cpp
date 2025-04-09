#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44fbb0, internal_44fbb0, public_44fbb0);
extern "C" NAKED register_t __cdecl internal_44fbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc584]
        mov dword ptr ds : [public_668afc], eax
        ret 
        UNREACHABLE_TRAP(0x44fbb0)
    }
}
