#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f4b0, internal_52f4b0, public_52f4b0);
extern "C" NAKED register_t __cdecl internal_52f4b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c68f8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x52f4b0)
    }
}
