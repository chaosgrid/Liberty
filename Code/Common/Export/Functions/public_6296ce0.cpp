#include "Common-PCH.h"

PROC_DECLARE(0x6296ce0, internal_6296ce0, public_6296ce0);
extern "C" NAKED register_t __cdecl internal_6296ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C]
        mov edx, dword ptr ds : [eax+0x90]
        xor ecx, ecx
        test edx, edx
        setne cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6296ce0)
    }
}
