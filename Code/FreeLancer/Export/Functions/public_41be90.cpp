#include "Freelancer-PCH.h"

PROC_DECLARE(0x41be90, internal_41be90, public_41be90);
extern "C" NAKED register_t __cdecl internal_41be90()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_5c9348
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dl, byte ptr ds : [ecx+8]
        mov byte ptr ds : [eax+8], dl
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], edx
        mov ecx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax], offset public_5c933c
        ret 4
        UNREACHABLE_TRAP(0x41be90)
    }
}
