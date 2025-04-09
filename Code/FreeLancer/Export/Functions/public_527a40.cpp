#include "FreeLancer-PCH.h"

PROC_DECLARE(0x527a40, internal_527a40, public_527a40);
extern "C" NAKED register_t __cdecl internal_527a40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd074]
        mov dword ptr ds : [public_6753f4], eax
        ret 
        UNREACHABLE_TRAP(0x527a40)
    }
}
