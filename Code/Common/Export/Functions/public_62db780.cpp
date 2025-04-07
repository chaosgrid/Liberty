#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db780);

PROC_DECLARE(0x62db780, internal_62db780, public_62db780);
extern "C" NAKED register_t __cdecl internal_62db780()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+0x38], cl
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        ret 
        UNREACHABLE_TRAP(0x62db780)
    }
}
