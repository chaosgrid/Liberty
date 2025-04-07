#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b970);

PROC_DECLARE(0x629b970, internal_629b970, public_629b970);
extern "C" NAKED register_t __cdecl internal_629b970()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x629b970)
    }
}
