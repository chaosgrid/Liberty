#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d2b80, internal_65d2b80, public_65d2b80);
extern "C" NAKED register_t __cdecl internal_65d2b80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d2b80)
    }
}
