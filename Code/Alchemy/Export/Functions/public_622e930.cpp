#include "Alchemy-PCH.h"

PROC_DECLARE(0x622e930, internal_622e930, public_622e930);
extern "C" NAKED register_t __cdecl internal_622e930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xE4]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x622e930)
    }
}
