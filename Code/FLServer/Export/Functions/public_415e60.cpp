#include "FLServer-PCH.h"

PROC_DECLARE(0x415e60, internal_415e60, public_415e60);
extern "C" NAKED register_t __cdecl internal_415e60()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_42958c], ax
        mov byte ptr ds : [public_42958e], al
        ret 
        UNREACHABLE_TRAP(0x415e60)
    }
}
