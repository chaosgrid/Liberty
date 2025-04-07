#include "Alchemy-PCH.h"

PROC_DECLARE(0x6242fe0, internal_6242fe0, public_6242fe0);
extern "C" NAKED register_t __cdecl internal_6242fe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6242fe0)
    }
}
