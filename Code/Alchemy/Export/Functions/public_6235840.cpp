#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235840, internal_6235840, public_6235840);
extern "C" NAKED register_t __cdecl internal_6235840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x98]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6235840)
    }
}
