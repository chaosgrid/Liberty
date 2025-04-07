#include "Common-PCH.h"

PROC_DECLARE(0x62a8930, internal_62a8930, public_62a8930);
extern "C" NAKED register_t __cdecl internal_62a8930()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], offset public_639e0d0
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        push esi
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        push edi
        mov dword ptr ds : [eax+0x14], edx
        mov dl, byte ptr ds : [ecx+0x18]
        lea esi, ds:[ecx+0x1C]
        lea edi, ds:[eax+0x1C]
        mov ecx, 0xF6
        mov byte ptr ds : [eax+0x18], dl
        rep movsd
        pop edi
        mov dword ptr ds : [eax], offset public_639e0fc
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8930)
    }
}
