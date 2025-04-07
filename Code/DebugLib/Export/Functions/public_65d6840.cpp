#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d6840, internal_65d6840, public_65d6840);
extern "C" NAKED register_t __cdecl internal_65d6840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x24]
        inc ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d6840)
    }
}
