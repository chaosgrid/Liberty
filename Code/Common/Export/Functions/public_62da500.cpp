#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da500);

PROC_DECLARE(0x62da500, internal_62da500, public_62da500);
extern "C" NAKED register_t __cdecl internal_62da500()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax], offset public_63a0584
        ret 
        UNREACHABLE_TRAP(0x62da500)
    }
}
