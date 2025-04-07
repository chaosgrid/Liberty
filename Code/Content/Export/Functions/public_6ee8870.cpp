#include "Content-PCH.h"

PROC_DECLARE(0x6ee8870, internal_6ee8870, public_6ee8870);
extern "C" NAKED register_t __cdecl internal_6ee8870()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6ee8870)
    }
}
