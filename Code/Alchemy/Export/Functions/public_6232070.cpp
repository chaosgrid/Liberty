#include "Alchemy-PCH.h"

PROC_DECLARE(0x6232070, internal_6232070, public_6232070);
extern "C" NAKED register_t __cdecl internal_6232070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x9C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6232070)
    }
}
