#include "Alchemy-PCH.h"

PROC_DECLARE(0x6215090, internal_6215090, public_6215090);
extern "C" NAKED register_t __cdecl internal_6215090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        inc ecx
        mov dword ptr ds : [eax+0xBC], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6215090)
    }
}
