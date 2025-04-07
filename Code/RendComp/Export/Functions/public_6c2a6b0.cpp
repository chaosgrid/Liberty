#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2a6b0, internal_6c2a6b0, public_6c2a6b0);
extern "C" NAKED register_t __cdecl internal_6c2a6b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x30]
        inc ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6c2a6b0)
    }
}
