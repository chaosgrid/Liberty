#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548e00, internal_548e00, public_548e00);
extern "C" NAKED register_t __cdecl internal_548e00()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_679758], ax
        mov byte ptr ds : [public_67975a], al
        ret 
        UNREACHABLE_TRAP(0x548e00)
    }
}
