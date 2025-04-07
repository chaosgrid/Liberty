#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213980, internal_6213980, public_6213980);
extern "C" NAKED register_t __cdecl internal_6213980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x8C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6213980)
    }
}
