#include "zlib-PCH.h"

PROC_DECLARE(0x1000a3b0, internal_1000a3b0, public_1000a3b0);
extern "C" NAKED register_t __cdecl internal_1000a3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax*4]
        mov edx, offset public_1000e1a8
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        ret 4
        UNREACHABLE_TRAP(0x1000a3b0)
    }
}
