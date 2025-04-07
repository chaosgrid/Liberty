#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235630, internal_6235630, public_6235630);
extern "C" NAKED register_t __cdecl internal_6235630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xE4]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6235630)
    }
}
