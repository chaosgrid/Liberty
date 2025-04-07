#include "ImeUi-PCH.h"

PROC_DECLARE(0x67114e0, internal_67114e0, public_67114e0);
extern "C" NAKED register_t __cdecl internal_67114e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x67114e0)
    }
}
