#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e0820, internal_4e0820, public_4e0820);
extern "C" NAKED register_t __cdecl internal_4e0820()
{
    __asm
    {
        mov word ptr ds : [public_674adc], 3
        mov byte ptr ds : [public_674ade], 1
        ret 
        UNREACHABLE_TRAP(0x4e0820)
    }
}
