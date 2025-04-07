#include "Common-PCH.h"

PROC_DECLARE(0x63259f0, internal_63259f0, public_63259f0);
extern "C" NAKED register_t __cdecl internal_63259f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov dl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [eax+4], dl
        mov dl, byte ptr ds : [ecx+5]
        mov byte ptr ds : [eax+5], dl
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax], offset public_63a420c
        ret 4
        UNREACHABLE_TRAP(0x63259f0)
    }
}
