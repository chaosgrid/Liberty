#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212350, internal_6212350, public_6212350);
extern "C" NAKED register_t __cdecl internal_6212350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6212350)
    }
}
