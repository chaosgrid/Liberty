#include "Common-PCH.h"

PROC_DECLARE(0x6281170, internal_6281170, public_6281170);
extern "C" NAKED register_t __cdecl internal_6281170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        ret 
        UNREACHABLE_TRAP(0x6281170)
    }
}
