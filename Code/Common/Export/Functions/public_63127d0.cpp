#include "Common-PCH.h"

PROC_DECLARE(0x63127d0, internal_63127d0, public_63127d0);
extern "C" NAKED register_t __cdecl internal_63127d0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], 1
        ret 
        UNREACHABLE_TRAP(0x63127d0)
    }
}
