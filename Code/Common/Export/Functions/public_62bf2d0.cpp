#include "Common-PCH.h"

PROC_DECLARE(0x62bf2d0, internal_62bf2d0, public_62bf2d0);
extern "C" NAKED register_t __cdecl internal_62bf2d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x6C]
        UNREACHABLE_TRAP(0x62bf2d0)
    }
}
