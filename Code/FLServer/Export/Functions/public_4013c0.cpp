#include "FLServer-PCH.h"

PROC_DECLARE(0x4013c0, internal_4013c0, public_4013c0);
extern "C" NAKED register_t __cdecl internal_4013c0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_425f28], ax
        mov byte ptr ds : [public_425f2a], al
        ret 
        UNREACHABLE_TRAP(0x4013c0)
    }
}
