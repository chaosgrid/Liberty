#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d4980, internal_65d4980, public_65d4980);
extern "C" NAKED register_t __cdecl internal_65d4980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x65d4980)
    }
}
