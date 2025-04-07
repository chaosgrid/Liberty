#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2daa0, internal_6c2daa0, public_6c2daa0);
extern "C" NAKED register_t __cdecl internal_6c2daa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        ret 0x14
        UNREACHABLE_TRAP(0x6c2daa0)
    }
}
