#include "Alchemy-PCH.h"

PROC_DECLARE(0x622dca0, internal_622dca0, public_622dca0);
extern "C" NAKED register_t __cdecl internal_622dca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x90]
        inc ecx
        mov dword ptr ds : [eax+0x90], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x622dca0)
    }
}
