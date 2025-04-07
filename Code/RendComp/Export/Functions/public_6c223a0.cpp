#include "RendComp-PCH.h"

PROC_DECLARE(0x6c223a0, internal_6c223a0, public_6c223a0);
extern "C" NAKED register_t __cdecl internal_6c223a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x34]
        inc ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6c223a0)
    }
}
