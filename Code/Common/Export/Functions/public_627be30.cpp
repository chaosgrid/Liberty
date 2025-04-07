#include "Common-PCH.h"

PROC_DECLARE(0x627be30, internal_627be30, public_627be30);
extern "C" NAKED register_t __cdecl internal_627be30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_639b5ac
        ret 
        UNREACHABLE_TRAP(0x627be30)
    }
}
