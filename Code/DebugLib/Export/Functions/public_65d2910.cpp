#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d2910, internal_65d2910, public_65d2910);
extern "C" NAKED register_t __cdecl internal_65d2910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x65d2910)
    }
}
