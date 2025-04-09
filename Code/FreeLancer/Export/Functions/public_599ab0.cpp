#include "FreeLancer-PCH.h"

PROC_DECLARE(0x599ab0, internal_599ab0, public_599ab0);
extern "C" NAKED register_t __cdecl internal_599ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e57c0]
        mov dword ptr ds : [public_67dbb4], eax
        ret 
        UNREACHABLE_TRAP(0x599ab0)
    }
}
