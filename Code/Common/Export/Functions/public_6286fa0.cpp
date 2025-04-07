#include "Common-PCH.h"

PROC_DECLARE(0x6286fa0, internal_6286fa0, public_6286fa0);
extern "C" NAKED register_t __cdecl internal_6286fa0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        test edx, edx
        setg al
        ret 
        UNREACHABLE_TRAP(0x6286fa0)
    }
}
