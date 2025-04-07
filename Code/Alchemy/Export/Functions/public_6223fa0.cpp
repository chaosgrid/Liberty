#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223fa0, internal_6223fa0, public_6223fa0);
extern "C" NAKED register_t __cdecl internal_6223fa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x88]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6223fa0)
    }
}
