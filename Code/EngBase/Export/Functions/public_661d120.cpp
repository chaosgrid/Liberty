#include "EngBase-PCH.h"

PROC_DECLARE(0x661d120, internal_661d120, public_661d120);
extern "C" NAKED register_t __cdecl internal_661d120()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        ret 8
        UNREACHABLE_TRAP(0x661d120)
    }
}
