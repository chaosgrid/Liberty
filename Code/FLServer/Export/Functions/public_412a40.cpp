#include "FLServer-PCH.h"

PROC_DECLARE(0x412a40, internal_412a40, public_412a40);
extern "C" NAKED register_t __cdecl internal_412a40()
{
    __asm
    {
        mov eax, offset public_41df88
        ret 
        UNREACHABLE_TRAP(0x412a40)
    }
}
