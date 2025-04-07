#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2dce0, internal_6c2dce0, public_6c2dce0);
extern "C" NAKED register_t __cdecl internal_6c2dce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6c2dce0)
    }
}
