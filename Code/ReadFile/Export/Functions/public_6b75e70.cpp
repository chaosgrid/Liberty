#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b75e70, internal_6b75e70, public_6b75e70);
extern "C" NAKED register_t __cdecl internal_6b75e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x11C], 5
        xor eax, eax
        ret 0x18
        UNREACHABLE_TRAP(0x6b75e70)
    }
}
