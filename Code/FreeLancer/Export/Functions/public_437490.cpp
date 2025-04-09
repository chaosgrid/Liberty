#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437490, internal_437490, public_437490);
extern "C" NAKED register_t __cdecl internal_437490()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6686dc], ax
        mov byte ptr ds : [public_6686de], al
        ret 
        UNREACHABLE_TRAP(0x437490)
    }
}
