#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231170, internal_6231170, public_6231170);
extern "C" NAKED register_t __cdecl internal_6231170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xA4]
        inc ecx
        mov dword ptr ds : [eax+0xA4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6231170)
    }
}
