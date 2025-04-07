#include "Common-PCH.h"

PROC_DECLARE(0x6273890, internal_6273890, public_6273890);
extern "C" NAKED register_t __cdecl internal_6273890()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        lea eax, ds:[ecx+4]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+0x40], edx
        push esi
        push edi
        mov edi, edx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        mov dword ptr ds : [eax+0x2C], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        or eax, 0xFFFFFFFF
        pop edi
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ds : [ecx+0x34], eax
        mov dword ptr ds : [ecx+0x38], eax
        mov byte ptr ds : [ecx+0x3C], dl
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273890)
    }
}
