#include "Common-PCH.h"

PROC_DECLARE(0x6267090, internal_6267090, public_6267090);
extern "C" NAKED register_t __cdecl internal_6267090()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx*2]
        ret 4
        UNREACHABLE_TRAP(0x6267090)
    }
}
