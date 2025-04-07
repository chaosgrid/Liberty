#include "RendComp-PCH.h"

PROC_DECLARE(0x6c29830, internal_6c29830, public_6c29830);
extern "C" NAKED register_t __cdecl internal_6c29830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x6c29830)
    }
}
