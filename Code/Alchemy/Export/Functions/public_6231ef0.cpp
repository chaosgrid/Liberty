#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231ef0, internal_6231ef0, public_6231ef0);
extern "C" NAKED register_t __cdecl internal_6231ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6231ef0)
    }
}
