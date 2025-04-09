#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6cd0, internal_4f6cd0, public_4f6cd0);
extern "C" NAKED register_t __cdecl internal_4f6cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x14]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x4f6cd0)
    }
}
