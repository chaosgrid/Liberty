#include "Common-PCH.h"

PROC_DECLARE(0x6273830, internal_6273830, public_6273830);
extern "C" NAKED register_t __cdecl internal_6273830()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        xor ecx, ecx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+0x40], ecx
        push esi
        push edi
        mov edi, ecx
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        mov dword ptr ds : [edx+0x2C], esi
        mov dword ptr ds : [edx+0x1C], esi
        mov dword ptr ds : [edx+0xC], esi
        mov dword ptr ds : [edx+0x28], ecx
        mov dword ptr ds : [edx+0x24], ecx
        mov dword ptr ds : [edx+0x20], ecx
        mov dword ptr ds : [edx+0x18], ecx
        mov dword ptr ds : [edx+0x14], ecx
        mov dword ptr ds : [edx+0x10], ecx
        or edx, 0xFFFFFFFF
        pop edi
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ds : [eax+0x34], edx
        mov dword ptr ds : [eax+0x38], edx
        mov byte ptr ds : [eax+0x3C], cl
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273830)
    }
}
