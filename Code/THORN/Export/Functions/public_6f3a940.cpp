#include "THORN-PCH.h"

PROC_DECLARE(0x6f3a940, internal_6f3a940, public_6f3a940);
extern "C" NAKED register_t __cdecl internal_6f3a940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x104], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f3a940)
    }
}
