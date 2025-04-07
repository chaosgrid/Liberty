#include "Common-PCH.h"

PROC_DECLARE(0x62f4730, internal_62f4730, public_62f4730);
extern "C" NAKED register_t __cdecl internal_62f4730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x62f4730)
    }
}
