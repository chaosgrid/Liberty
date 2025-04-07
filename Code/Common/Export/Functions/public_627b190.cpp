#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b190);

PROC_DECLARE(0x627b190, internal_627b190, public_627b190);
extern "C" NAKED register_t __cdecl internal_627b190()
{
    __asm
    {
        mov eax, ecx
        xor edx, edx
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [eax], dl
        mov byte ptr ds : [eax+1], dl
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], dl
        mov dword ptr ds : [eax+0x20], ecx
        ret 
        UNREACHABLE_TRAP(0x627b190)
    }
}
