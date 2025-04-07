#include "FLServer-PCH.h"

PROC_DECLARE(0x412840, internal_412840, public_412840);
extern "C" NAKED register_t __cdecl internal_412840()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_428c2c], ax
        mov byte ptr ds : [public_428c2e], al
        ret 
        UNREACHABLE_TRAP(0x412840)
    }
}
