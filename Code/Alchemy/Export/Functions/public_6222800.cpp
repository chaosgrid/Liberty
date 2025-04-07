#include "Alchemy-PCH.h"

PROC_DECLARE(0x6222800, internal_6222800, public_6222800);
extern "C" NAKED register_t __cdecl internal_6222800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x20]
        inc ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6222800)
    }
}
