#include "Content-PCH.h"

PROC_DECLARE(0x6eef730, internal_6eef730, public_6eef730);
extern "C" NAKED register_t __cdecl internal_6eef730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x240]
        mov eax, dword ptr ds : [eax+0x50]
        ret 
        UNREACHABLE_TRAP(0x6eef730)
    }
}
