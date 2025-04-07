#include "FLServer-PCH.h"

PROC_DECLARE(0x402850, internal_402850, public_402850);
extern "C" NAKED register_t __cdecl internal_402850()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_425f80], ax
        mov byte ptr ds : [public_425f82], al
        ret 
        UNREACHABLE_TRAP(0x402850)
    }
}
