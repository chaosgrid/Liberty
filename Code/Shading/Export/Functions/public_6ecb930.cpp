#include "Shading-PCH.h"

PROC_DECLARE(0x6ecb930, internal_6ecb930, public_6ecb930);
extern "C" NAKED register_t __cdecl internal_6ecb930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecb930)
    }
}
