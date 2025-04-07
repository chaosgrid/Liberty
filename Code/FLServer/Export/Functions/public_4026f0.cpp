#include "FLServer-PCH.h"

PROC_DECLARE(0x4026f0, internal_4026f0, public_4026f0);
extern "C" NAKED register_t __cdecl internal_4026f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_425f54], ax
        mov byte ptr ds : [public_425f56], al
        ret 
        UNREACHABLE_TRAP(0x4026f0)
    }
}
