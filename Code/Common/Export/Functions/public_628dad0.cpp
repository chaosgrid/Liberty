#include "Common-PCH.h"

PROC_DECLARE(0x628dad0, internal_628dad0, public_628dad0);
extern "C" NAKED register_t __cdecl internal_628dad0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx*4]
        ret 4
        UNREACHABLE_TRAP(0x628dad0)
    }
}
