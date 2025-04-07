#include "FLServer-PCH.h"

PROC_DECLARE(0x402820, internal_402820, public_402820);
extern "C" NAKED register_t __cdecl internal_402820()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_425f84], ax
        mov byte ptr ds : [public_425f86], al
        ret 
        UNREACHABLE_TRAP(0x402820)
    }
}
