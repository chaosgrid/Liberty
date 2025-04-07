#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ddc0, internal_620ddc0, public_620ddc0);
extern "C" NAKED register_t __cdecl internal_620ddc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xB4]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x620ddc0)
    }
}
