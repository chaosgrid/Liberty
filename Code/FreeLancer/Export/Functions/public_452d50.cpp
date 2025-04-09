#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452d50, internal_452d50, public_452d50);
extern "C" NAKED register_t __cdecl internal_452d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x74]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x452d50)
    }
}
