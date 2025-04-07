#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d270);

PROC_DECLARE(0x629d270, internal_629d270, public_629d270);
extern "C" NAKED register_t __cdecl internal_629d270()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ds : [eax+0x4C]
        lea ecx, ds:[eax+0x4C]
        mov eax, dword ptr ds : [eax+4]
        push eax
        call dword ptr ds : [edx+0x28]
        ret 
        UNREACHABLE_TRAP(0x629d270)
    }
}
