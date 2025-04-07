#include "Common-PCH.h"

PROC_DECLARE(0x62735b0, internal_62735b0, public_62735b0);
extern "C" NAKED register_t __cdecl internal_62735b0()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        lea eax, ds:[ecx+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], 0xFFFFFFFF
        push esi
        push edi
        mov edi, edx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        mov esi, 0x3F800000
        mov dword ptr ds : [eax+0x2C], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0xC], esi
        mov al, 1
        pop edi
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov byte ptr ds : [ecx+0x3C], al
        mov byte ptr ds : [ecx+0x3D], al
        mov byte ptr ds : [ecx+0x3E], al
        mov byte ptr ds : [ecx+0x3F], dl
        mov byte ptr ds : [ecx+0x40], dl
        mov byte ptr ds : [ecx+0x41], dl
        mov dword ptr ds : [ecx+0x44], edx
        mov dword ptr ds : [ecx+0x48], edx
        mov dword ptr ds : [ecx+0x4C], edx
        mov byte ptr ds : [ecx+0x50], dl
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62735b0)
    }
}
