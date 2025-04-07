#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d2c70, internal_65d2c70, public_65d2c70);
extern "C" NAKED register_t __cdecl internal_65d2c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d2c70)
    }
}
