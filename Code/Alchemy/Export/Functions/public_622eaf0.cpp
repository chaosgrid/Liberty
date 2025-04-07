#include "Alchemy-PCH.h"

PROC_DECLARE(0x622eaf0, internal_622eaf0, public_622eaf0);
extern "C" NAKED register_t __cdecl internal_622eaf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x1C], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x622eaf0)
    }
}
