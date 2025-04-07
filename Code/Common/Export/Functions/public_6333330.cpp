#include "Common-PCH.h"

PROC_DECLARE(0x6333330, internal_6333330, public_6333330);
extern "C" NAKED register_t __cdecl internal_6333330()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov cl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax], offset public_63a4980
        ret 4
        UNREACHABLE_TRAP(0x6333330)
    }
}
