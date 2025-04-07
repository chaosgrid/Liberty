#include "Common-PCH.h"

PROC_DECLARE(0x6273990, internal_6273990, public_6273990);
extern "C" NAKED register_t __cdecl internal_6273990()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        xor ecx, ecx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+0x34], cl
        mov byte ptr ds : [eax+0x35], cl
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        push esi
        push edi
        mov edi, ecx
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        pop edi
        mov dword ptr ds : [edx+0x2C], esi
        mov dword ptr ds : [edx+0x1C], esi
        mov dword ptr ds : [edx+0xC], esi
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ds : [edx+0x28], ecx
        mov dword ptr ds : [edx+0x24], ecx
        mov dword ptr ds : [edx+0x20], ecx
        mov dword ptr ds : [edx+0x18], ecx
        mov dword ptr ds : [edx+0x14], ecx
        mov dword ptr ds : [edx+0x10], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273990)
    }
}
