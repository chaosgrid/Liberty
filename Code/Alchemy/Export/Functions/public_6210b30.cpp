#include "Alchemy-PCH.h"

PROC_DECLARE(0x6210b30, internal_6210b30, public_6210b30);
extern "C" NAKED register_t __cdecl internal_6210b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6210b30)
    }
}
