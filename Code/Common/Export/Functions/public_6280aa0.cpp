#include "Common-PCH.h"

PROC_DECLARE(0x6280aa0, internal_6280aa0, public_6280aa0);
extern "C" NAKED register_t __cdecl internal_6280aa0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639b874
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov cl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax], offset public_639b864
        ret 4
        UNREACHABLE_TRAP(0x6280aa0)
    }
}
