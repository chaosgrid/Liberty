#include "Common-PCH.h"

PROC_DECLARE(0x627bfe0, internal_627bfe0, public_627bfe0);
extern "C" NAKED register_t __cdecl internal_627bfe0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov edx, offset public_639b5ac
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x2C], cl
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+8], cl
        ret 
        UNREACHABLE_TRAP(0x627bfe0)
    }
}
