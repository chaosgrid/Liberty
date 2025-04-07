#include "Common-PCH.h"

PROC_DECLARE(0x62db020, internal_62db020, public_62db020);
extern "C" NAKED register_t __cdecl internal_62db020()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 9
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e144
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], 1
        ret 
        UNREACHABLE_TRAP(0x62db020)
    }
}
