#include "Content-PCH.h"

PROC_DECLARE(0x6ebfff0, internal_6ebfff0, public_6ebfff0);
extern "C" NAKED register_t __cdecl internal_6ebfff0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [ecx+0x24], eax
        ret 
        UNREACHABLE_TRAP(0x6ebfff0)
    }
}
