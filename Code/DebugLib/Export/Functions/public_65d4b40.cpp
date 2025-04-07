#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d4b40, internal_65d4b40, public_65d4b40);
extern "C" NAKED register_t __cdecl internal_65d4b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x14]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d4b40)
    }
}
