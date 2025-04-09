#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4370c0, internal_4370c0, public_4370c0);
extern "C" NAKED register_t __cdecl internal_4370c0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6686b4], ax
        mov byte ptr ds : [public_6686b6], al
        ret 
        UNREACHABLE_TRAP(0x4370c0)
    }
}
