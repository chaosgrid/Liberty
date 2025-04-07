#include "DALib-PCH.h"

PROC_DECLARE(0x65c5c20, internal_65c5c20, public_65c5c20);
extern "C" NAKED register_t __cdecl internal_65c5c20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x65c5c20)
    }
}
