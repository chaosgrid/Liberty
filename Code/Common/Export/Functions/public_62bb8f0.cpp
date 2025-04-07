#include "Common-PCH.h"

PROC_DECLARE(0x62bb8f0, internal_62bb8f0, public_62bb8f0);
extern "C" NAKED register_t __cdecl internal_62bb8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639eccc]
        mov dword ptr ds : [public_63fc49c], eax
        ret 
        UNREACHABLE_TRAP(0x62bb8f0)
    }
}
