#include "Freelancer-PCH.h"

PROC_DECLARE(0x561d20, internal_561d20, public_561d20);
extern "C" NAKED register_t __cdecl internal_561d20()
{
    __asm
    {
        mov byte ptr ds : [public_679b8c], 0x87
        mov byte ptr ds : [public_679b8d], 0xC3
        mov byte ptr ds : [public_679b8e], 0xE0
        mov byte ptr ds : [public_679b8f], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561d20)
    }
}
