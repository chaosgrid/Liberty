#include "FreeLancer-PCH.h"

PROC_DECLARE(0x575d40, internal_575d40, public_575d40);
extern "C" NAKED register_t __cdecl internal_575d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4268]
        mov dword ptr ds : [public_67c298], eax
        ret 
        UNREACHABLE_TRAP(0x575d40)
    }
}
