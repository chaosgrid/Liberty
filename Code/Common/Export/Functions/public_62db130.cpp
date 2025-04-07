#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db130);

PROC_DECLARE(0x62db130, internal_62db130, public_62db130);
extern "C" NAKED register_t __cdecl internal_62db130()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xE
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e16c
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        ret 
        UNREACHABLE_TRAP(0x62db130)
    }
}
