#include "Common-PCH.h"

PROC_DECLARE(0x6329920, internal_6329920, public_6329920);
extern "C" NAKED register_t __cdecl internal_6329920()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a43a4
        xor ecx, ecx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6329920)
    }
}
