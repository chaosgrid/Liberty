#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a1e70, internal_5a1e70, public_5a1e70);
extern "C" NAKED register_t __cdecl internal_5a1e70()
{
    __asm
    {
        mov byte ptr ds : [public_67dd54], 0x37
        mov byte ptr ds : [public_67dd55], 0x49
        mov byte ptr ds : [public_67dd56], 0x5A
        mov byte ptr ds : [public_67dd57], 0xFF
        ret 
        UNREACHABLE_TRAP(0x5a1e70)
    }
}
