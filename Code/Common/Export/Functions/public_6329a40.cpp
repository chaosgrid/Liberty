#include "Common-PCH.h"

PROC_DECLARE(0x6329a40, internal_6329a40, public_6329a40);
extern "C" NAKED register_t __cdecl internal_6329a40()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        mov word ptr ds : [ecx+4], ax
        ret 4
        UNREACHABLE_TRAP(0x6329a40)
    }
}
