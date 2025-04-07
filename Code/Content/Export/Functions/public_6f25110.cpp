#include "Content-PCH.h"

PROC_DECLARE(0x6f25110, internal_6f25110, public_6f25110);
extern "C" NAKED register_t __cdecl internal_6f25110()
{
    __asm
    {
        mov eax, 0xF
        ret 
        UNREACHABLE_TRAP(0x6f25110)
    }
}
