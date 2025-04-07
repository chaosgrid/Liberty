#include "Common-PCH.h"

PROC_DECLARE(0x62d4a10, internal_62d4a10, public_62d4a10);
extern "C" NAKED register_t __cdecl internal_62d4a10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x20]
        UNREACHABLE_TRAP(0x62d4a10)
    }
}
