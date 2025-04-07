#include "Common-PCH.h"

PROC_DECLARE(0x6273490, internal_6273490, public_6273490);
extern "C" NAKED register_t __cdecl internal_6273490()
{
    __asm
    {
        sub esp, 0xC
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        push esi
        mov dword ptr ds : [ecx+0x28], eax
        mov dword ptr ds : [ecx+0x24], eax
        mov dword ptr ds : [ecx+0x20], eax
        mov dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov esi, eax
        lea edx, ds:[ecx+0x30]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov byte ptr ds : [ecx+0xA4], al
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273490)
    }
}
