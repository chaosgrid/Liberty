#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51fde0, internal_51fde0, public_51fde0);
extern "C" NAKED register_t __cdecl internal_51fde0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc36c]
        mov dword ptr ds : [public_6753d4], eax
        ret 
        UNREACHABLE_TRAP(0x51fde0)
    }
}
