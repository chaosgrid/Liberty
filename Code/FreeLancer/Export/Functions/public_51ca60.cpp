#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ca60, internal_51ca60, public_51ca60);
extern "C" NAKED register_t __cdecl internal_51ca60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc074]
        mov dword ptr ds : [public_675288], eax
        ret 
        UNREACHABLE_TRAP(0x51ca60)
    }
}
