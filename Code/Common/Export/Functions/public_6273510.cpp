#include "Common-PCH.h"

PROC_DECLARE(0x6273510, internal_6273510, public_6273510);
extern "C" NAKED register_t __cdecl internal_6273510()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        mov eax, ecx
        lea ecx, ds:[eax+0xC]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], 0xFFFFFFFF
        push esi
        push edi
        mov edi, edx
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [ecx+0x28], edx
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x14], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov esi, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], esi
        mov dword ptr ds : [ecx+0x1C], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov cl, 1
        pop edi
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov byte ptr ds : [eax+0x3C], cl
        mov byte ptr ds : [eax+0x3D], cl
        mov byte ptr ds : [eax+0x3E], cl
        mov byte ptr ds : [eax+0x3F], dl
        mov byte ptr ds : [eax+0x40], dl
        mov byte ptr ds : [eax+0x41], dl
        mov dword ptr ds : [eax+0x44], edx
        mov dword ptr ds : [eax+0x48], edx
        mov dword ptr ds : [eax+0x4C], edx
        mov byte ptr ds : [eax+0x50], dl
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273510)
    }
}
